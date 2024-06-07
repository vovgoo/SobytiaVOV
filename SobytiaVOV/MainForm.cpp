#include "MainForm.h"
#include "Publications.h"
#include "Comment.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text::RegularExpressions;
using namespace System::Data::OleDb;
using namespace System::IO;
using namespace System::Threading;
using namespace System::Collections::Generic;
using namespace System::Threading::Tasks;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(0);
    SobytiaVOV::MainForm form;
    Application::Run(% form);
}

// Доступ к базе данных

void SobytiaVOV::MainForm::UpdateUserPhotoPath(String^ photoPath)
{
    try {
        String^ query = "UPDATE users SET photo_path = ? WHERE id = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", photoPath);
        command->Parameters->AddWithValue("?", currentId);
        command->ExecuteNonQuery();
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Ошибка при обновлении пути фотографии пользователя: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

String^ SobytiaVOV::MainForm::GetPasswordById(Int32^ currentId)
{
    try {
        String^ query = "SELECT password FROM users WHERE id = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("id", currentId);
        Object^ result = command->ExecuteScalar();
        String^ password = (result != nullptr) ? result->ToString() : "None";
        connection->Close();
        return password;
    }
    catch (Exception^) {
        return "None";
    }
}

String^ SobytiaVOV::MainForm::GetEmailById(Int32^ currentId)
{
    try {
        String^ query = "SELECT email FROM users WHERE id = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("id", currentId);
        Object^ result = command->ExecuteScalar();
        String^ email = (result != nullptr) ? result->ToString() : "None";
        connection->Close();
        return email;
    }
    catch (Exception^) {
        return "None";
    }
}

void SobytiaVOV::MainForm::UpdatePassword(String^ newPassword)
{
    try {
        String^ query = "UPDATE [users] SET [password] = ? WHERE [id] = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", newPassword);
        command->Parameters->AddWithValue("?", currentId);
        command->ExecuteNonQuery();
        connection->Close();
        MessageBox::Show("Пароль успешно изменен.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ ex) {
        MessageBox::Show("Ошибка при изменении пароля: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

void SobytiaVOV::MainForm::UpdateUser(String^ newFirstName, String^ newLastName, String^ newMiddleName, Int32^ newAge, String^ newEmail, String^ newAbout)
{
    try {
        String^ query = "UPDATE users SET [first_name] = ?, [last_name] = ?, [middle_name] = ?, [age] = ?, [email] = ?, [about] = ? WHERE [id] = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", newFirstName);
        command->Parameters->AddWithValue("?", newLastName);
        command->Parameters->AddWithValue("?", newMiddleName);
        command->Parameters->AddWithValue("?", newAge);
        command->Parameters->AddWithValue("?", newEmail);
        command->Parameters->AddWithValue("?", newAbout);
        command->Parameters->AddWithValue("?", currentId);
        command->ExecuteNonQuery();
        connection->Close();
        MessageBox::Show("Данные пользователя успешно изменены.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ ex) {
        MessageBox::Show("Ошибка при изменении данных пользователя: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

bool SobytiaVOV::MainForm::CheckIfEmailExists(String^ emailToCheck)
{
    try {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "SELECT COUNT(*) FROM users WHERE email = ?";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("email", emailToCheck);
        int count = Convert::ToInt32(command->ExecuteScalar());
        connection->Close();
        return count > 0;
    }
    catch (Exception^ ex) {
        MessageBox::Show("При проверке существования записи возникла ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return false;
    }
}

Int32 SobytiaVOV::MainForm::GetMaxId()
{
    Int32 maxId = 0;
    try {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "SELECT MAX(id) AS maxId FROM users";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);

        Object^ result = command->ExecuteScalar();
        if (result != DBNull::Value) {
            maxId = Convert::ToInt32(result);
        }
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("При получении максимального ID возникла ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    return maxId;
}

void SobytiaVOV::MainForm::LoadPublications()
{
    this->flowLayoutPanel2->Controls->Clear();
    try {
        String^ query = "SELECT id FROM publications";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        OleDbDataReader^ reader = command->ExecuteReader();
        while (reader->Read()) {
            this->flowLayoutPanel2->Controls->Add(gcnew Publications(reader->GetInt32(reader->GetOrdinal("id")), connectionString, currentId, currentPublications, isAdmin));
        }
        reader->Close();
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Ошибка при получении данных публикации: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    } 
}

void SobytiaVOV::MainForm::LoadPublicationsWithSelect(String^ query)
{
    try {
        this->flowLayoutPanel2->Controls->Clear();
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        OleDbDataReader^ reader = command->ExecuteReader();
        while (reader->Read()) {
            int publicationId = reader->GetInt32(reader->GetOrdinal("id"));
            Publications^ publication = gcnew Publications(publicationId, connectionString, currentId, currentPublications, isAdmin);
            this->flowLayoutPanel2->Controls->Add(publication);
        }
        reader->Close();
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Ошибка при получении данных публикации: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

void SobytiaVOV::MainForm::deleteLike()
{
    try {
        String^ query = "DELETE FROM [likes] WHERE [user_id] = ? AND [publications_id] = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("user_id", currentId);
        command->Parameters->AddWithValue("publications_id", currentPublications);
        command->ExecuteNonQuery();
        connection->Close();
    }
    catch (Exception^) { }
}

void SobytiaVOV::MainForm::setLike()
{
    try {
        String^ query = "INSERT INTO [likes] ([user_id], [publications_id]) VALUES (?, ?)";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("user_id", currentId);
        command->Parameters->AddWithValue("publications_id", currentPublications);
        command->ExecuteNonQuery();
        connection->Close();
    }
    catch (Exception^) { }
}

bool SobytiaVOV::MainForm::checkLikeOnPublications() // Под вопросом
{
    try {
        String^ query = "SELECT COUNT(*) FROM [likes] WHERE [user_id] = ? AND [publications_id] = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("user_id", currentId);
        command->Parameters->AddWithValue("publications_id", currentPublications);
        Object^ result = command->ExecuteScalar();
        connection->Close();
        int count = Convert::ToInt32(result);
        return (count > 0);
    }
    catch (Exception^) {
        return false;
    }
}

String^ SobytiaVOV::MainForm::getFirstNameById(Int32^ userId)
{
    try
    {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "SELECT first_name FROM users WHERE id = ?";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("id", userId);
        Object^ result = command->ExecuteScalar();
        connection->Close();
        return (result != DBNull::Value) ? result->ToString() : "None";
    }
    catch (Exception^)
    {
        return "None";
    }
}

String^ SobytiaVOV::MainForm::getAvatarkaById(Int32^ userId)
{
    try
    {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "SELECT photo_path FROM users WHERE id = ?";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("id", userId);
        Object^ result = command->ExecuteScalar();
        connection->Close();
        return (result != DBNull::Value) ? result->ToString() : "None";
    }
    catch (Exception^)
    {
        return "None";
    }
}

Int32 SobytiaVOV::MainForm::getMaxCommentId()
{
    try
    {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "SELECT MAX(id) FROM comments";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        Object^ result = command->ExecuteScalar();
        connection->Close();
        return (result != nullptr && result != DBNull::Value) ? safe_cast<Int32>(result) : 0;
    }
    catch (Exception^)
    {
        return 0;
    }
}

bool SobytiaVOV::MainForm::IsAdmin()
{
    try
    {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "SELECT isAdmin FROM users WHERE id = ?";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("id", currentId);
        Object^ result = command->ExecuteScalar();
        connection->Close();
        return (result != nullptr && result->ToString()->Equals("True", StringComparison::InvariantCultureIgnoreCase));
    }
    catch (Exception^)
    {
        return false;
    }
}

// Загрузка формы

System::Void SobytiaVOV::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    LoadPublications();

    this->tabControl1->Location = System::Drawing::Point(-4, -23);
    this->tabControl2->Location = System::Drawing::Point(-4, -23);
    this->Size = System::Drawing::Size(1296, 759);
    this->comboBox1->SelectedIndex = 0;
    this->tabControl2->SelectedIndex = 0;
    this->panel30->Visible = false;
    this->panel72->Tag = "";

    return System::Void();
}

// Сторонние функции

System::Void SobytiaVOV::MainForm::panelFocus(System::Object^ sender, System::EventArgs^ e)
{
    if (Panel^ panel = dynamic_cast<Panel^>(sender)) {
        for each (System::Windows::Forms::Control ^ control in panel->Controls) {
            if (dynamic_cast<System::Windows::Forms::TextBox^>(control) != nullptr) {
                control->Select();
                break;
            }
        }
    }
}

bool SobytiaVOV::MainForm::IsValidEmail(String^ email)
{
    String^ pattern = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";
    Regex^ regex = gcnew Regex(pattern);
    return regex->IsMatch(email);
}

void SobytiaVOV::MainForm::ClearAutorize()
{
    this->textBox1->Clear();
    this->textBox2->Clear();

    return System::Void();
}

void SobytiaVOV::MainForm::ClearRegistrate()
{
    this->textBox3->Clear();
    this->textBox4->Clear();
    this->textBox5->Clear();
    this->textBox6->Clear();
    this->textBox7->Clear();
    this->textBox8->Clear();
    this->textBox9->Clear();

    return System::Void();
}

void SobytiaVOV::MainForm::AutorizeUser()
{
    *this->currentPublications = -1;
    LoadPublications();

    this->label26->Text = "Выйти";
    this->selectedIndexOnMainForm = 0;
    this->tabControl1->SelectedIndex = 0;
    this->tabControl2->SelectedIndex = 0;
    this->panel30->Visible = true;
    this->panel6->BackColor = Color::FromArgb(26, 29, 31);
    this->panel30->BackColor = Color::FromArgb(17, 19, 21);
    this->label24->Text = "Список публикаций";
}

// Дизайн кнопок при наведение и свдеение (Динамические типы)

System::Void SobytiaVOV::MainForm::label7_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (Label^ label = dynamic_cast<Label^>(sender)) {
        Control^ parentPanel = label->Parent;
        if (Panel^ panel = dynamic_cast<Panel^>(parentPanel)) {
            panel->BackColor = Color::FromArgb(200, 0, 0);
        }
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label7_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    if (Label^ label = dynamic_cast<Label^>(sender)) {
        Control^ parentPanel = label->Parent;
        if (Panel^ panel = dynamic_cast<Panel^>(parentPanel)) {
            panel->BackColor = Color::FromArgb(255, 50, 50);
        }
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label23_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (Control^ control = dynamic_cast<Control^>(sender)) {
        Control^ parentPanel = control->Parent;
        if (selectedIndexOnMainForm->Equals(0) && parentPanel->Name->Equals("panel6")) {
            return;
        }
        if (selectedIndexOnMainForm->Equals(1) && parentPanel->Name->Equals("panel30")) {
            return;
        }
        if (Panel^ panel = dynamic_cast<Panel^>(parentPanel)) {
            panel->BackColor = Color::FromArgb(26, 29, 31);
        }
    }

    return System::Void();
}

System::Void SobytiaVOV::MainForm::label23_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    if (Control^ control = dynamic_cast<Control^>(sender)) {
        Control^ parentPanel = control->Parent;
        if (selectedIndexOnMainForm->Equals(0) && parentPanel->Name->Equals("panel6")) {
            return;
        }
        if (selectedIndexOnMainForm->Equals(1) && parentPanel->Name->Equals("panel30")) {
            return;
        }
        if (Panel^ panel = dynamic_cast<Panel^>(parentPanel)) {
            panel->BackColor = Color::FromArgb(17, 19, 21);
        }
    }
    return System::Void();
}

// Реализация PlaceHolders

System::Void SobytiaVOV::MainForm::textBox10_Enter(System::Object^ sender, System::EventArgs^ e)
{
    if (this->textBox10->Text->Equals("Искать")) {
        this->textBox10->Clear();
    }

    return System::Void();
}

System::Void SobytiaVOV::MainForm::textBox10_Leave(System::Object^ sender, System::EventArgs^ e)
{
    if (String::IsNullOrWhiteSpace(this->textBox10->Text)) {
        this->textBox10->Text = "Искать";
    }

    return System::Void();
}

System::Void SobytiaVOV::MainForm::richTextBox1_Enter(System::Object^ sender, System::EventArgs^ e)
{
    RichTextBox^ richTextBox = dynamic_cast<RichTextBox^>(sender);
    if (richTextBox != nullptr && richTextBox->Text->Equals("Введите текст")) {
        richTextBox->Clear();
    }
}

System::Void SobytiaVOV::MainForm::richTextBox1_Leave(System::Object^ sender, System::EventArgs^ e)
{
    RichTextBox^ richTextBox = dynamic_cast<RichTextBox^>(sender);
    if (richTextBox != nullptr && String::IsNullOrWhiteSpace(richTextBox->Text)) {
        richTextBox->Text = "Введите текст";
    }
}

// Переход по страницам

System::Void SobytiaVOV::MainForm::label19_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->tabControl2->SelectedIndex = 0;
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label21_Click(System::Object^ sender, System::EventArgs^ e)
{
    *this->currentPublications = -1;
    //LoadPublications();
    
    this->label24->Text = "Список публикаций";
    this->tabControl1->SelectedIndex = 0;
    this->selectedIndexOnMainForm = 0;
    this->panel30->BackColor = Color::FromArgb(17, 19, 21);

    return System::Void();
}

System::Void SobytiaVOV::MainForm::label26_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->currentId->Equals(-1)) {
        this->ClearAutorize();
        this->tabControl2->SelectedIndex = 1;
        return;
    }
    if (!this->currentId->Equals(-1)) {
        this->currentId = -1;
        *this->currentPublications = -1;
        this->isAdmin = false;
        LoadPublications();

        this->panel70->Visible = false;
        this->label26->Text = "Войти";
        this->tabControl1->SelectedIndex = 0;
        this->panel30->Visible = false;

        return;
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->currentPublications = -1;

    this->selectedIndexOnMainForm = 0;
    this->tabControl1->SelectedIndex = 0;
    this->tabControl2->SelectedIndex = 0;
    this->panel6->BackColor = Color::FromArgb(26, 29, 31);
    this->panel30->BackColor = Color::FromArgb(17, 19, 21);
    this->label24->Text = "Список публикаций";

    //MessageBox::Show(currentPublications->ToString());

    return System::Void();
}

System::Void SobytiaVOV::MainForm::label47_Click(System::Object^ sender, System::EventArgs^ e)
{
    *this->currentPublications = -1;
    //LoadPublications();
    this->tabControl1->SelectedIndex = 0;
    return System::Void();
}

// Ограничение ввода

System::Void SobytiaVOV::MainForm::textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    if (!Char::IsLetter(e->KeyChar) && e->KeyChar != '-' && e->KeyChar != ' ' && e->KeyChar != '\b') {
        e->Handled = true;
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    System::Windows::Forms::TextBox^ textBox = dynamic_cast<System::Windows::Forms::TextBox^>(sender);
    if (textBox == nullptr) {
        return;
    }
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b') {
        e->Handled = true;
    }
    else if (e->KeyChar == '\b' || System::String::IsNullOrEmpty(textBox->Text)) {
        return;
    }
    else {
        int value;
        System::String^ newText = textBox->Text + e->KeyChar;
        e->Handled = !Int32::TryParse(newText, value) || value < 1 || value > 116;
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    if ((e->KeyChar < 65 || e->KeyChar > 90) && (e->KeyChar < 97 || e->KeyChar > 122) && !Char::IsDigit(e->KeyChar) && !Char::IsPunctuation(e->KeyChar) && e->KeyChar != 8)
    {
        e->Handled = true;
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    if (!((e->KeyChar >= 'a' && e->KeyChar <= 'z') ||
        (e->KeyChar >= 'A' && e->KeyChar <= 'Z') ||
        Char::IsDigit(e->KeyChar) ||
        (e->KeyChar == '_') ||
        (e->KeyChar == '.') ||
        (e->KeyChar == '-') ||
        (e->KeyChar == '@') ||
        (e->KeyChar == 8)))
    {
        e->Handled = true;
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    e->Handled = true;
    return System::Void();
}

System::Void SobytiaVOV::MainForm::richTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if (e->KeyCode == Keys::Enter)
    {
        e->SuppressKeyPress = true;
    }
    return System::Void();
}

// Авторизация (Переход и функции относящиеся к данной форме)

System::Void SobytiaVOV::MainForm::label7_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (String::IsNullOrWhiteSpace(this->textBox1->Text) || String::IsNullOrWhiteSpace(this->textBox1->Text)) {
        MessageBox::Show("Что бы авторизоваться, вам нужно заполнить корректно все поля.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (!IsValidEmail(this->textBox1->Text)) {
        MessageBox::Show("Ведите корректную почту, для дальнейшей работы.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    String^ email = textBox1->Text;
    String^ password = textBox2->Text;
    try {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "SELECT id FROM users WHERE email = ? AND password = ?";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", email);
        command->Parameters->AddWithValue("?", password);
        OleDbDataReader^ reader = command->ExecuteReader();
        if (reader->HasRows) {
            if (reader->Read()) {
                this->currentId = Convert::ToInt32(reader["id"]);
                this->isAdmin = IsAdmin();
                this->isAdmin ? this->panel70->Visible = true : this->panel70->Visible = false;
                this->AutorizeUser();
                MessageBox::Show("Вы были успешно авторизованы. Приятного пользования.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }
        else {
            MessageBox::Show("Вы ввели некорректную почту или пароль. Проверьте что вы указали все данные верно.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        reader->Close();
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show("При поиске записи возникла ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    return System::Void();
}

System::Void SobytiaVOV::MainForm::label18_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->tabControl2->SelectedIndex = 1;
    this->ClearRegistrate();
    return System::Void();
}

// Регистрация (Переход и функции относящиеся к данной форме)

System::Void SobytiaVOV::MainForm::label17_Click(System::Object^ sender, System::EventArgs^ e)
{
    if( String::IsNullOrWhiteSpace(this->textBox3->Text) ||
        String::IsNullOrWhiteSpace(this->textBox4->Text) ||
        String::IsNullOrWhiteSpace(this->textBox5->Text) ||
        String::IsNullOrWhiteSpace(this->textBox6->Text) ||
        String::IsNullOrWhiteSpace(this->textBox7->Text) ||
        String::IsNullOrWhiteSpace(this->textBox8->Text) ||
        String::IsNullOrWhiteSpace(this->textBox9->Text)) 
    {
        MessageBox::Show("Заполните все поля, для дальнейшей работы.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (!IsValidEmail(this->textBox7->Text)) {
        MessageBox::Show("Ведите корректную почту, для дальнейшей работы. Пример почты: example@example.com", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (CheckIfEmailExists(this->textBox7->Text)) {
        MessageBox::Show("Данная почта уже зарегистрирована. Попробуйте войти в вашу учетную запись если вы ее владелец.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (this->textBox9->Text->Length < 8) {
        MessageBox::Show("Ваш пароль должен содержать в себе не менее 8 знаков для надежности и безопасности ваших персональных данных.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (!this->textBox9->Text->Equals(this->textBox8->Text)) {
        MessageBox::Show("Ваши пароли от аккаунта должны совпадать. Проверьте правильность введенных данных и повторите попытку.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    try {
        String^ firstName = this->textBox3->Text;
        String^ lastName = this->textBox4->Text;
        String^ middleName = this->textBox5->Text;
        int age = Convert::ToInt32(this->textBox6->Text);
        String^ email = this->textBox7->Text;
        String^ password = this->textBox8->Text;

        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        String^ query = "INSERT INTO [users] ([first_name], [last_name], [middle_name], [age], [email], [about], [password], [isAdmin], [photo_path]) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("@FirstName", firstName);
        command->Parameters->AddWithValue("@LastName", lastName);
        command->Parameters->AddWithValue("@MiddleName", middleName);
        command->Parameters->AddWithValue("@Age", age);
        command->Parameters->AddWithValue("@Email", email);
        command->Parameters->AddWithValue("@About", "");
        command->Parameters->AddWithValue("@Password", password);
        command->Parameters->AddWithValue("@IsAdmin", 0);
        command->Parameters->AddWithValue("@PhotoPath", "");
        command->ExecuteNonQuery();
        connection->Close();
        this->currentId = GetMaxId();
        this->AutorizeUser();
        MessageBox::Show("Вы были успешно зарегистрированы. Можете продолжать пользоваться приложением.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ ex) {
        MessageBox::Show("При осуществлении регистрации возникла следующая ошибка." + ex->Message, "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label8_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->tabControl2->SelectedIndex = 2;
    this->ClearAutorize();
    return System::Void();
}

// Личный кабинет (Переход и функции относящиеся к данной форме)

System::Void SobytiaVOV::MainForm::label22_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->label24->Text = "Личный кабинет";
    this->tabControl1->SelectedIndex = 1;
    this->selectedIndexOnMainForm = 1;
    this->panel6->BackColor = Color::FromArgb(17, 19, 21);
    try {
        String^ query = "SELECT first_name, last_name, middle_name, age, email, about, photo_path FROM users WHERE id = ?";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", currentId);
        OleDbDataReader^ reader = command->ExecuteReader();
        if (reader->Read()) {
            this->textBox11->Text = reader->GetString(reader->GetOrdinal("first_name"));
            this->textBox12->Text = reader->GetString(reader->GetOrdinal("last_name"));
            this->textBox14->Text = reader->GetString(reader->GetOrdinal("middle_name"));
            this->textBox13->Text = reader->GetInt32(reader->GetOrdinal("age")).ToString();
            this->textBox15->Text = reader->GetString(reader->GetOrdinal("email"));
            this->textBox16->Text = reader->GetString(reader->GetOrdinal("about"));
            try {
                this->panel44->BackgroundImage = Image::FromFile(reader->GetString(reader->GetOrdinal("photo_path")));
            }
            catch (Exception^) {
                this->panel44->BackgroundImage = Image::FromFile("images\\notFoundPhoto.jpg");
            }
        }
        reader->Close();
        connection->Close();
    }
    catch (Exception^) {}
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label30_Click(System::Object^ sender, System::EventArgs^ e)
{
    OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
    openFileDialog1->Filter = "Файлы изображений|*.png;*.jpg";
    openFileDialog1->Title = "Выберите фотографию";
    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ selectedFileName = openFileDialog1->FileName;
        try {
            if (!Directory::Exists("publicationImages")) {
                Directory::CreateDirectory("publicationImages");
            }
            String^ extension = Path::GetExtension(selectedFileName);
            String^ uniqueFileName = DateTime::Now.ToString("yyyyMMddHHmmssfff") + "-" + Guid::NewGuid().ToString() + extension;
            String^ destinationFilePath = Path::Combine("publicationImages", uniqueFileName);
            File::Copy(selectedFileName, destinationFilePath);
            this->UpdateUserPhotoPath(destinationFilePath);
            panel44->BackgroundImage = Image::FromFile(destinationFilePath);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Ошибка при загрузке изображения: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label31_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (String::IsNullOrWhiteSpace(this->textBox11->Text) ||
        String::IsNullOrWhiteSpace(this->textBox12->Text) ||
        String::IsNullOrWhiteSpace(this->textBox13->Text) ||
        String::IsNullOrWhiteSpace(this->textBox14->Text) ||
        String::IsNullOrWhiteSpace(this->textBox15->Text)
        )
    {
        MessageBox::Show("Заполните все поля, для дальнейшей работы.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (!IsValidEmail(this->textBox15->Text)) {
        MessageBox::Show("Ведите корректную почту, для дальнейшей работы. Пример почты: example@example.com", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (CheckIfEmailExists(this->textBox15->Text) && !this->textBox15->Text->Equals(GetEmailById(currentId))) {
        MessageBox::Show("Данная почта уже зарегистрирована. Попробуйте войти в вашу учетную запись если вы ее владелец.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    UpdateUser(this->textBox11->Text, this->textBox12->Text, this->textBox14->Text, Convert::ToInt32(this->textBox13->Text), this->textBox15->Text, this->textBox16->Text);
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label32_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!this->textBox17->Text->Equals(GetPasswordById(currentId))) {
        MessageBox::Show("Пароль который вы ввели, в поле 'Старый пароль' не совпадает с вашим нынешним паролем.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (this->textBox18->Text->Length < 8) {
        MessageBox::Show("Ваш пароль должен содержать в себе не менее 8 знаков для надежности и безопасности ваших персональных данных.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (!this->textBox18->Text->Equals(this->textBox19->Text)) {
        MessageBox::Show("Ваши пароли от аккаунта должны совпадать. Проверьте правильность введенных данных и повторите попытку.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    UpdatePassword(this->textBox18->Text);
    this->textBox17->Clear();
    this->textBox18->Clear();
    this->textBox19->Clear();
    return System::Void();
}

// Сортировка публикаций

System::Void SobytiaVOV::MainForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    switch (this->comboBox1->SelectedIndex)
    {
    case 0:
        LoadPublications();
        break;
    case 1:
        LoadPublicationsWithSelect("SELECT * FROM publications ORDER BY views DESC");
        break;
    case 2:
        LoadPublicationsWithSelect("SELECT publications.id, publications.title, publications.description, publications.photo_path, publications.views FROM publications LEFT JOIN comments ON publications.id = comments.publications_id GROUP BY publications.id, publications.title, publications.description, publications.photo_path, publications.views ORDER BY IIf(Count(comments.id) Is Null,0,Count(comments.id)) DESC");
        break;
    case 3:
        LoadPublicationsWithSelect("SELECT publications.id, publications.title, publications.description, publications.photo_path, publications.views FROM publications LEFT JOIN likes ON publications.id = likes.publications_id GROUP BY publications.id, publications.title, publications.description, publications.photo_path, publications.views ORDER BY IIf(Count(likes.id) Is Null,0,Count(likes.id)) DESC;");
        break;
    default:
        LoadPublications();
        break;
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::panel34_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->comboBox1->DroppedDown = true;
    return System::Void();
}

// Поиск публикаций

System::Void SobytiaVOV::MainForm::label25_Click(System::Object^ sender, System::EventArgs^ e)
{   
    if (this->textBox10->Text->Equals("Искать") || String::IsNullOrWhiteSpace(this->textBox10->Text)) {
        LoadPublications();
        tabControl1->SelectedIndex = 0;
        return;
    }
    *this->currentPublications = -1;
    this->label24->Text = "Список публикаций";
    this->tabControl1->SelectedIndex = 0;
    this->selectedIndexOnMainForm = 0;
    this->panel30->BackColor = Color::FromArgb(17, 19, 21);
    this->panel6->BackColor = Color::FromArgb(26, 29, 31);
    try {
        String^ query = "SELECT * FROM publications WHERE title LIKE '%' + ? + '%'";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", this->textBox10->Text);
        OleDbDataReader^ reader = command->ExecuteReader();
        if (reader->HasRows) {
            this->flowLayoutPanel2->Controls->Clear();
            while (reader->Read()) {
                this->flowLayoutPanel2->Controls->Add(gcnew Publications(reader->GetInt32(reader->GetOrdinal("id")), connectionString, currentId, currentPublications, isAdmin));
            }
            this->textBox10->Text = "";
            return;
        }
        reader->Close();
        connection->Close();
        MessageBox::Show("По вашему запросу ничего не найдено.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^) {}
    return System::Void();
}

// Лайк на публикацию

System::Void SobytiaVOV::MainForm::panel62_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (currentId->Equals(-1)) {
        MessageBox::Show("Для того что бы поставить лайк записи вам нужно пройти авторизацию. Войдите в личный кабинет.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (checkLikeOnPublications()) {
        deleteLike();
        this->panel62->BackgroundImage = Image::FromFile("images\\like_logo.png");
        this->label45->Text = (Convert::ToInt32(this->label45->Text) - 1).ToString();
    }
    else {
        setLike();
        this->panel62->BackgroundImage = Image::FromFile("images\\selectedLike_logo.png");
        this->label45->Text = (Convert::ToInt32(this->label45->Text) + 1).ToString();
    }
    return System::Void();
}

// Комментарии

System::Void SobytiaVOV::MainForm::panel69_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->currentId->Equals(-1)) {
        MessageBox::Show("Для того что бы добавить комментарий нужно зарегистрироваться или войти в учетную запись!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    if (String::IsNullOrWhiteSpace(this->richTextBox1->Text) || this->richTextBox1->Text->Equals("Введите текст")) {
        MessageBox::Show("Для того что бы добавить комментарий нужно написать его!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    try
    {
        DateTime now = DateTime::Now;
        String^ commentDate = now.ToString("dd.MM.yyyy");
        String^ query = "INSERT INTO [comments] ([publications_id], [user_id], [comment_description], [comment_date]) VALUES (?, ?, ?, ?)";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        connection->Open();
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("?", currentPublications);
        command->Parameters->AddWithValue("?", currentId);
        command->Parameters->AddWithValue("?", this->richTextBox1->Text);
        command->Parameters->AddWithValue("?", commentDate);
        command->ExecuteNonQuery();
        connection->Close();
        this->flowLayoutPanel3->Controls->Add(gcnew Comment(connectionString, getAvatarkaById(currentId), getFirstNameById(currentId), commentDate, this->richTextBox1->Text, getMaxCommentId(), isAdmin));
        this->richTextBox1->Clear();
        this->richTextBox1->Focus();
        this->label44->Text = (Convert::ToInt32(this->label44->Text) + 1).ToString();
        MessageBox::Show("Ваш комментарий был успешно добавлен!", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^){}
    return System::Void();
}

// Добавление статей (Переход и функции относящиеся к данной форме)

System::Void SobytiaVOV::MainForm::label49_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->tabControl1->SelectedIndex = 3;
    this->panel72->BackgroundImage = Image::FromFile("images\\notFoundPhoto.jpg");
    this->textBox20->Clear();
    this->richTextBox2->Text = "Введите текст";
    this->label56->Text = "Добавить публикацию";
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label50_Click(System::Object^ sender, System::EventArgs^ e)
{
    *this->currentPublications = -1;
    //LoadPublications();
    this->tabControl1->SelectedIndex = 0;
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label55_Click(System::Object^ sender, System::EventArgs^ e)
{
    OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
    openFileDialog1->Filter = "Файлы изображений|*.png;*.jpg";
    openFileDialog1->Title = "Выберите фотографию";
    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ selectedFileName = openFileDialog1->FileName;
        try {
            if (!Directory::Exists("publicationImages")) {
                Directory::CreateDirectory("publicationImages");
            }
            String^ extension = Path::GetExtension(selectedFileName);
            String^ uniqueFileName = DateTime::Now.ToString("yyyyMMddHHmmssfff") + "-" + Guid::NewGuid().ToString() + extension;
            String^ destinationFilePath = Path::Combine("publicationImages", uniqueFileName);
            File::Copy(selectedFileName, destinationFilePath);
            this->panel72->BackgroundImage = Image::FromFile(destinationFilePath);
            this->panel72->Tag = destinationFilePath;
        }
        catch (Exception^ ex) {
            MessageBox::Show("Ошибка при загрузке изображения: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    return System::Void();
}

System::Void SobytiaVOV::MainForm::label56_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (String::IsNullOrWhiteSpace(this->textBox20->Text) || String::IsNullOrWhiteSpace(this->richTextBox2->Text) || this->richTextBox2->Text->Equals("Введите текст")) {
        MessageBox::Show("Поле заголовка или описания не может быть пустым.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    if (this->label56->Text->Equals("Добавить публикацию")) {
        try {
            OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
            connection->Open();
            String^ insertQuery = "INSERT INTO [publications] ([title], [description], [photo_path], [views]) VALUES (?, ?, ?, ?)";
            OleDbCommand^ command = gcnew OleDbCommand(insertQuery, connection);
            command->Parameters->AddWithValue("@title", this->textBox20->Text);
            command->Parameters->AddWithValue("@description", this->richTextBox2->Text);
            command->Parameters->AddWithValue("@photo_path", this->panel72->Tag->ToString());
            command->Parameters->AddWithValue("@views", 0);
            command->ExecuteNonQuery();
            connection->Close();
            this->panel72->BackgroundImage = Image::FromFile("images\\notFoundPhoto.jpg");
            this->textBox20->Clear();
            this->richTextBox2->Text = "Введите текст";
            this->textBox20->Focus();
            LoadPublications();
            MessageBox::Show("Статья была успешно добавлена!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        return;
    }
    if (this->label56->Text->Equals("Сохранить изменения")) {
        try {
            OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
            connection->Open();
            String^ updateQuery = "UPDATE [publications] SET [title] = ?, [description] = ?, [photo_path] = ? WHERE [id] = ?";
            OleDbCommand^ command = gcnew OleDbCommand(updateQuery, connection);
            command->Parameters->AddWithValue("@title", this->textBox20->Text);
            command->Parameters->AddWithValue("@description", this->richTextBox2->Text);
            command->Parameters->AddWithValue("@photo_path", this->panel72->Tag->ToString());
            command->Parameters->AddWithValue("@id", currentPublications);
            command->ExecuteNonQuery();
            connection->Close();
            this->textBox20->Focus();
            LoadPublications();
            MessageBox::Show("Статья была успешно изменена!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        return;
    }
    return System::Void();
}

// Выход из приложения

System::Void SobytiaVOV::MainForm::label23_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
    return System::Void();
}