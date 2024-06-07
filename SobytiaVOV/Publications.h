#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SobytiaVOV {

	/// <summary>
	/// Сводка для Publications
	/// </summary>
	public ref class Publications : public System::Windows::Forms::UserControl
	{
	private: Int32^ publicationId;
	private: String^ connectionString;
	private: Int32^ currentId;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: Int32^ currentPublications;
	private: bool isAdmin;

	public:
		Publications(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Publications(Int32^ publicationId, String^ connectionString, Int32^ currentId, Int32^ currentPublications, bool isAdmin)
		{
			InitializeComponent();

			this->publicationId = publicationId;
			this->connectionString = connectionString;
			this->currentId = currentId;
			this->currentPublications = currentPublications;
			this->isAdmin = isAdmin;

			if (isAdmin) {
				this->label24->Size = System::Drawing::Size(569, 58);
				this->panel8->Visible = true;
				this->panel9->Visible = true;
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Publications()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label31;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Publications::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(946, 236);
			this->panel1->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel9->Location = System::Drawing::Point(910, 42);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(24, 24);
			this->panel9->TabIndex = 11;
			this->panel9->Visible = false;
			this->panel9->Click += gcnew System::EventHandler(this, &Publications::panel9_Click);
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel8->Location = System::Drawing::Point(910, 12);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(24, 24);
			this->panel8->TabIndex = 10;
			this->panel8->Visible = false;
			this->panel8->Click += gcnew System::EventHandler(this, &Publications::panel8_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->label31);
			this->panel7->Location = System::Drawing::Point(723, 176);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(201, 43);
			this->panel7->TabIndex = 9;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label31->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(0, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(201, 43);
			this->label31->TabIndex = 11;
			this->label31->Text = L"Читать";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label31->Click += gcnew System::EventHandler(this, &Publications::label31_Click);
			this->label31->MouseLeave += gcnew System::EventHandler(this, &Publications::label31_MouseLeave);
			this->label31->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Publications::label31_MouseMove);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(628, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"000000";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(510, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 21);
			this->label3->TabIndex = 7;
			this->label3->Text = L"000000";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(403, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"000000";
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Location = System::Drawing::Point(586, 177);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(36, 37);
			this->panel6->TabIndex = 5;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(482, 182);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(22, 22);
			this->panel5->TabIndex = 4;
			this->panel5->Click += gcnew System::EventHandler(this, &Publications::panel5_Click);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Location = System::Drawing::Point(375, 182);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(22, 22);
			this->panel4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(335, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(599, 94);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Описание";
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(335, 12);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(599, 58);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Заголовок";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(11, 9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(316, 216);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(316, 216);
			this->panel3->TabIndex = 1;
			// 
			// Publications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->Controls->Add(this->panel1);
			this->Name = L"Publications";
			this->Size = System::Drawing::Size(946, 236);
			this->Load += gcnew System::EventHandler(this, &Publications::Publications_Load);
			this->panel1->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

// База данных

private: void setDataAboutPubliecations();

private: void setUserLike();

private: bool checkLikeOnPublications();

private: void deleteLike();

private: void setLike();

private: void addViews();

// Сторонние функции

private: System::Void label31_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

private: System::Void label31_MouseLeave(System::Object^ sender, System::EventArgs^ e);

private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void panel5_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void Publications_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void panel8_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void panel9_Click(System::Object^ sender, System::EventArgs^ e);
};
}
