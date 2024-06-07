#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SobytiaVOV {

	/// <summary>
	/// —водка дл€ Comment
	/// </summary>
	public ref class Comment : public System::Windows::Forms::UserControl
	{
	private: Int32^ commentId;

	private: String^ connectionString;

	private: System::Windows::Forms::Panel^ panel4;

	public:
		Comment(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Comment(String^ connectionString, String^ avatarka, String^ name, String^ date, String^ description, Int32^ commentId, bool IsAdmin)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			try {
				this->panel2->BackgroundImage = Image::FromFile(avatarka);
			}
			catch (Exception^) {
				this->panel2->BackgroundImage = Image::FromFile("images\\notFoundPhoto.jpg");
			}
			this->label1->Text = name;
			this->label2->Text = date;
			this->label3->Text = description;
			
			this->commentId = commentId;

			this->connectionString = connectionString;

			IsAdmin ? this->panel4->Visible = true : this->panel4->Visible = false;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Comment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Comment::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 139);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(17, 71);
			this->label3->MaximumSize = System::Drawing::Size(560, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(560, 54);
			this->label3->TabIndex = 3;
			this->label3->Text = L"123456789012345678901234567890123456789012345678901234567890123456789012345678901"
				L"234567890123456789012345678901234567890123456789012345678901234567890";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(485, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"12.12.2005";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(87, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// panel2
			// 
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(20, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(50, 50);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(50, 50);
			this->panel3->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel4->Location = System::Drawing::Point(455, 25);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(24, 24);
			this->panel4->TabIndex = 4;
			this->panel4->Visible = false;
			this->panel4->Click += gcnew System::EventHandler(this, &Comment::panel4_Click);
			// 
			// Comment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"Comment";
			this->Size = System::Drawing::Size(600, 139);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel4_Click(System::Object^ sender, System::EventArgs^ e);
};
}
