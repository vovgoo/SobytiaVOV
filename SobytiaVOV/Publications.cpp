#include "Publications.h"
#include "Comment.h"

using namespace System::Data::OleDb;

// База данных

void SobytiaVOV::Publications::setDataAboutPubliecations()
{
    try {
        String^ query = "SELECT p.id, p.title, p.description, p.photo_path, p.views, (SELECT Count(c.id) FROM comments AS c WHERE c.publications_id = p.id) AS comment_count, (SELECT Count(l.id) FROM likes AS l WHERE l.publications_id = p.id) AS like_count FROM publications AS p WHERE p.id = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", publicationId);
        OleDbDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            this->label24->Text = reader->GetString(reader->GetOrdinal("title"));
            this->label1->Text = reader->GetString(reader->GetOrdinal("description"));
            try {
                this->panel2->BackgroundImage = Image::FromFile(reader->GetString(reader->GetOrdinal("photo_path")));
            }
            catch (Exception^) {
                this->panel2->BackgroundImage = Image::FromFile("images\\notFoundPhoto.jpg");
            }
            this->label2->Text = reader->GetInt32(reader->GetOrdinal("views")).ToString();
            this->label3->Text = reader->GetInt32(reader->GetOrdinal("like_count")).ToString();
            this->label4->Text = reader->GetInt32(reader->GetOrdinal("comment_count")).ToString();
        }
        connection->Close();
    }
    catch (Exception^) {}
}

void SobytiaVOV::Publications::setUserLike() {
    if (checkLikeOnPublications()) {
        this->panel5->BackgroundImage = Image::FromFile("images\\selectedLike_logo.png");
    }
    else {
        this->panel5->BackgroundImage = Image::FromFile("images\\like_logo.png");
    }
}

void SobytiaVOV::Publications::addViews()
{
    try
    {
        String^ query = "UPDATE publications SET views = views + 1 WHERE id = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", publicationId);
        command->ExecuteNonQuery();
        connection->Close();
    }
    catch (Exception^) {}
}

void SobytiaVOV::Publications::deleteLike()
{
    try {
        String^ query = "DELETE FROM [likes] WHERE [user_id] = ? AND [publications_id] = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", currentId);
        command->Parameters->AddWithValue("?", publicationId);
        command->ExecuteNonQuery();
        connection->Close();
    }
    catch (Exception^) {}
}

void SobytiaVOV::Publications::setLike()
{
    try {
        String^ query = "INSERT INTO [likes] ([user_id], [publications_id]) VALUES (?, ?)";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", currentId);
        command->Parameters->AddWithValue("?", publicationId);
        command->ExecuteNonQuery();
        connection->Close();
    }
    catch (Exception^) {}
}

bool SobytiaVOV::Publications::checkLikeOnPublications() // Под вопросом
{
    try {
        String^ query = "SELECT COUNT(*) FROM [likes] WHERE [user_id] = ? AND [publications_id] = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", currentId);
        command->Parameters->AddWithValue("?", publicationId);
        Object^ result = command->ExecuteScalar();
        if (result != DBNull::Value) {
            int count = Convert::ToInt32(result);
            if (count > 0) {
                return true;
            }
            else {
                return false;
            }
        }
        connection->Close();
    }
    catch (Exception^) {
        return false;
    }
}

// Загрузка публикации

System::Void SobytiaVOV::Publications::Publications_Load(System::Object^ sender, System::EventArgs^ e)
{
    setDataAboutPubliecations();
    setUserLike();
    return System::Void();
}

// Дизайн и анимация

System::Void SobytiaVOV::Publications::label31_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (Label^ label = dynamic_cast<Label^>(sender)) {
        Control^ parentPanel = label->Parent;
        if (Panel^ panel = dynamic_cast<Panel^>(parentPanel)) {
            panel->BackColor = Color::FromArgb(200, 0, 0);
        }
    }
    return System::Void();
}

System::Void SobytiaVOV::Publications::label31_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    if (Label^ label = dynamic_cast<Label^>(sender)) {
        Control^ parentPanel = label->Parent;
        if (Panel^ panel = dynamic_cast<Panel^>(parentPanel)) {
            panel->BackColor = Color::FromArgb(255, 50, 50);
        }
    }
    return System::Void();
}

// Чтение публикации

System::Void SobytiaVOV::Publications::label31_Click(System::Object^ sender, System::EventArgs^ e)
{
    Label^ clickedLabel = dynamic_cast<Label^>(sender);
    Panel^ panel1 = dynamic_cast<Panel^>(clickedLabel->Parent);
    Panel^ panel2 = dynamic_cast<Panel^>(panel1->Parent);
    UserControl^ userControl = dynamic_cast<UserControl^>(panel2->Parent);
    FlowLayoutPanel^ flowLayoutPanel = dynamic_cast<FlowLayoutPanel^>(userControl->Parent);
    TabPage^ tabPage = dynamic_cast<TabPage^>(flowLayoutPanel->Parent);
    TabControl^ tabControl = dynamic_cast<TabControl^>(tabPage->Parent);
    TabPage^ tabPage2 = tabControl->TabPages[2];
    FlowLayoutPanel^ newPanel = dynamic_cast<FlowLayoutPanel^>(tabPage2->Controls->Find("flowLayoutPanel3", true)[0]);
    if (newPanel != nullptr)
    {
        Panel^ panel59 = dynamic_cast<Panel^>(newPanel->Controls->Find("panel59", true)[0]);
        panel59->BackgroundImage = this->panel2->BackgroundImage;
        Label^ label42 = dynamic_cast<Label^>(newPanel->Controls->Find("label42", true)[0]);
        label42->Text = this->label24->Text;
        Label^ label43 = dynamic_cast<Label^>(newPanel->Controls->Find("label43", true)[0]);
        label43->Text = this->label1->Text;
        Label^ label46 = dynamic_cast<Label^>(newPanel->Controls->Find("label46", true)[0]);
        label46->Text = (Convert::ToInt32(this->label2->Text) + 1).ToString();
        Label^ label45 = dynamic_cast<Label^>(newPanel->Controls->Find("label45", true)[0]);
        label45->Text = this->label3->Text;
        Label^ label44 = dynamic_cast<Label^>(newPanel->Controls->Find("label44", true)[0]);
        label44->Text = this->label4->Text;
        Panel^ panel60 = dynamic_cast<Panel^>(newPanel->Controls->Find("panel60", true)[0]);
        Panel^ panel62 = dynamic_cast<Panel^>(newPanel->Controls->Find("panel62", true)[0]);
        if (checkLikeOnPublications()) {
            panel62->BackgroundImage = Image::FromFile("images\\selectedLike_logo.png");
        }
        else {
            panel62->BackgroundImage = Image::FromFile("images\\like_logo.png");
        }
        Panel^ panel67 = dynamic_cast<Panel^>(newPanel->Controls->Find("panel67", true)[0]);
        Panel^ panel68 = dynamic_cast<Panel^>(panel67->Controls->Find("panel68", true)[0]);
        RichTextBox^ richTextBox1 = dynamic_cast<RichTextBox^>(panel68->Controls->Find("richTextBox1", true)[0]);
        richTextBox1->Text = "Введите текст";
        for (int i =newPanel->Controls->Count - 1; i >= 0; i--)
        {
            Comment^ comment = dynamic_cast<Comment^>(newPanel->Controls[i]);
            if (comment != nullptr)
            {
                newPanel->Controls->RemoveAt(i);
            }
        }
        try
        {
            OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
            connection->Open();
            String^ query = "SELECT comments.id as id, publications_id, comment_description, comment_date, first_name, photo_path FROM comments INNER JOIN users ON comments.user_id = users.id WHERE publications_id = ? ";
            OleDbCommand^ command = gcnew OleDbCommand(query, connection);
            command->Parameters->AddWithValue("?", publicationId);
            OleDbDataReader^ reader = command->ExecuteReader();
            while (reader->Read())
            {
                Int32^ commentId = Convert::ToInt32(reader["id"]);
                String^ description = reader["comment_description"]->ToString();
                String^ date = (dynamic_cast<DateTime^>(reader["comment_date"]))->ToShortDateString();
                String^ firstName = reader["first_name"]->ToString();
                String^ photoPath = reader["photo_path"]->ToString();

                newPanel->Controls->Add(gcnew Comment(connectionString, photoPath, firstName, date, description, commentId, isAdmin));
            }
            reader->Close();
            connection->Close();
        }
        catch (Exception^){}
    }
    *currentPublications = Convert::ToInt32(publicationId);
    //MessageBox::Show(publicationId->ToString());
    addViews();
    tabControl->SelectedIndex = 2;
    return System::Void();
}

// Поставить лайк публикации

System::Void SobytiaVOV::Publications::panel5_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (currentId->Equals(-1)) {
        MessageBox::Show("Для того что бы поставить лайк записи вам нужно пройти авторизацию. Войдите в личный кабинет.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (checkLikeOnPublications()) {
        deleteLike();
        this->panel5->BackgroundImage = Image::FromFile("images\\like_logo.png");
        this->label3->Text = (Convert::ToInt32(this->label3->Text) - 1).ToString();
    }
    else {
        setLike();
        this->panel5->BackgroundImage = Image::FromFile("images\\selectedLike_logo.png");
        this->label3->Text = (Convert::ToInt32(this->label3->Text) + 1).ToString();
    }
    return System::Void();
}

// Удаление публикации

System::Void SobytiaVOV::Publications::panel8_Click(System::Object^ sender, System::EventArgs^ e)
{
    OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
    connection->Open();
    OleDbTransaction^ transaction = connection->BeginTransaction();
    try
    {
        String^ queryDeletePublications = "DELETE FROM publications WHERE id = ?";
        OleDbCommand^ commandDeletePublications = gcnew OleDbCommand(queryDeletePublications, connection);
        commandDeletePublications->Transaction = transaction;
        commandDeletePublications->Parameters->AddWithValue("id", publicationId);
        commandDeletePublications->ExecuteNonQuery();
        String^ queryDeleteLikes = "DELETE FROM likes WHERE publications_id = ?";
        OleDbCommand^ commandDeleteLikes = gcnew OleDbCommand(queryDeleteLikes, connection);
        commandDeleteLikes->Transaction = transaction;
        commandDeleteLikes->Parameters->AddWithValue("publications_id", publicationId);
        commandDeleteLikes->ExecuteNonQuery();
        String^ queryDeleteComments = "DELETE FROM comments WHERE publications_id = ?";
        OleDbCommand^ commandDeleteComments = gcnew OleDbCommand(queryDeleteComments, connection);
        commandDeleteComments->Transaction = transaction;
        commandDeleteComments->Parameters->AddWithValue("publications_id", publicationId);
        commandDeleteComments->ExecuteNonQuery();
        transaction->Commit();
        connection->Close();
        MessageBox::Show("Запись и связанные с ней данные были успешно удалены.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->Parent->Controls->Remove(this);
    }
    catch (Exception^)
    {
        transaction->Rollback();
        MessageBox::Show("Данную запись и связанные с ней данные не удалось удалить.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    return System::Void();
}

// Изменение публикации

System::Void SobytiaVOV::Publications::panel9_Click(System::Object^ sender, System::EventArgs^ e)
{
    Panel^ clickedPanel = dynamic_cast<Panel^>(sender);
    Panel^ panel1 = dynamic_cast<Panel^>(clickedPanel->Parent);
    UserControl^ userControl = dynamic_cast<UserControl^>(panel1->Parent);
    FlowLayoutPanel^ flowLayoutPanel = dynamic_cast<FlowLayoutPanel^>(userControl->Parent);
    TabPage^ tabPage = dynamic_cast<TabPage^>(flowLayoutPanel->Parent);
    TabControl^ tabControl = dynamic_cast<TabControl^>(tabPage->Parent);
    TabPage^ tabPage2 = tabControl->TabPages[3];
    TextBox^ textBox20 = dynamic_cast<TextBox^>(tabPage2->Controls->Find("textBox20", true)[0]);
    RichTextBox^ richTextBox2 = dynamic_cast<RichTextBox^>(tabPage2->Controls->Find("richTextBox2", true)[0]);
    Panel^ panel72 = dynamic_cast<Panel^>(tabPage2->Controls->Find("panel72", true)[0]);
    Label^ label56 = dynamic_cast<Label^>(tabPage2->Controls->Find("label56", true)[0]);
    label56->Text = "Сохранить изменения";
    try {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        String^ query = "SELECT * FROM Publications WHERE id = @id";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("@id", publicationId);
        connection->Open();
        OleDbDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            textBox20->Text = reader["title"]->ToString();
            richTextBox2->Text = reader["description"]->ToString();
            panel72->Tag = reader["photo_path"]->ToString();
            try {
                panel72->BackgroundImage = Image::FromFile(reader->GetString(reader->GetOrdinal("photo_path")));
            }
            catch (Exception^) {
                panel72->BackgroundImage = Image::FromFile("images\\notFoundPhoto.jpg");
            }
            reader->Close();
            connection->Close();
        }
    }
    catch (Exception^) {}
    *currentPublications = Convert::ToInt32(publicationId);
    tabControl->SelectedIndex = 3;
    return System::Void();
}
