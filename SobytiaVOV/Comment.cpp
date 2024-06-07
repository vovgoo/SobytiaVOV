#include "Comment.h"

using namespace System::Data::OleDb;

System::Void SobytiaVOV::Comment::panel4_Click(System::Object^ sender, System::EventArgs^ e)
{
    OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
    try
    {
        connection->Open();
        String^ query = "DELETE FROM comments WHERE id = ?";
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->AddWithValue("id", commentId);
        command->ExecuteNonQuery();
        connection->Close();
        MessageBox::Show("Комментарий был успешно удален.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->Parent->Controls->Remove(this);
    }
    catch (Exception^) {
        MessageBox::Show("Данный коментарий не удалось удалить.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
    } 
    return System::Void();
}