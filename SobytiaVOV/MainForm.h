#pragma once
#include "Publications.h"

namespace SobytiaVOV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	
	private: Int32^ selectedIndexOnMainForm = 0; 
	private: Int32^ currentId = -1;
	private: Int32^ currentPublications = -1;
	private: bool isAdmin = false;
	private: String^ connectionString = "Provider=Microsoft.ACE.OLEDB.16.0;Data Source=Database.accdb;";

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Panel^ panel43;
	private: System::Windows::Forms::Panel^ panel42;
	private: System::Windows::Forms::Panel^ panel44;
	private: System::Windows::Forms::Panel^ panel45;
	private: System::Windows::Forms::Panel^ panel46;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Panel^ panel47;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Panel^ panel48;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Panel^ panel49;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Panel^ panel51;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Panel^ panel50;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Panel^ panel55;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Panel^ panel54;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Panel^ panel52;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Panel^ panel53;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Panel^ panel56;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Panel^ panel58;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Panel^ panel57;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Panel^ panel59;
	private: System::Windows::Forms::Panel^ panel60;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Panel^ panel61;
	private: System::Windows::Forms::Panel^ panel62;
	private: System::Windows::Forms::Panel^ panel63;
	private: System::Windows::Forms::Panel^ panel64;
	private: System::Windows::Forms::Panel^ panel65;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Panel^ panel66;
	private: System::Windows::Forms::Panel^ panel67;
	private: System::Windows::Forms::Panel^ panel68;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ panel69;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Panel^ panel70;
	private: System::Windows::Forms::Panel^ panel71;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::TabPage^ tabPage7;



	private: System::Windows::Forms::Panel^ panel72;
	private: System::Windows::Forms::Panel^ panel73;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	private: System::Windows::Forms::Panel^ panel76;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Panel^ panel79;
	private: System::Windows::Forms::Panel^ panel80;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Panel^ panel77;
	private: System::Windows::Forms::Panel^ panel78;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Panel^ panel74;
	private: System::Windows::Forms::Panel^ panel75;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Panel^ panel81;

	private: System::Windows::Forms::Panel^ panel41;

	public:

		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel6;





	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel9;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::Panel^ panel36;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Panel^ panel39;
private: System::Windows::Forms::Panel^ panel40;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Panel^ panel37;
private: System::Windows::Forms::Panel^ panel38;
private: System::Windows::Forms::Label^ label25;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel70 = (gcnew System::Windows::Forms::Panel());
			this->panel71 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->panel66 = (gcnew System::Windows::Forms::Panel());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->panel64 = (gcnew System::Windows::Forms::Panel());
			this->panel65 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel62 = (gcnew System::Windows::Forms::Panel());
			this->panel63 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->panel67 = (gcnew System::Windows::Forms::Panel());
			this->panel69 = (gcnew System::Windows::Forms::Panel());
			this->panel68 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->panel81 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel79 = (gcnew System::Windows::Forms::Panel());
			this->panel80 = (gcnew System::Windows::Forms::Panel());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel77 = (gcnew System::Windows::Forms::Panel());
			this->panel78 = (gcnew System::Windows::Forms::Panel());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel74 = (gcnew System::Windows::Forms::Panel());
			this->panel75 = (gcnew System::Windows::Forms::Panel());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->panel76 = (gcnew System::Windows::Forms::Panel());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel72 = (gcnew System::Windows::Forms::Panel());
			this->panel73 = (gcnew System::Windows::Forms::Panel());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel31->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel39->SuspendLayout();
			this->panel40->SuspendLayout();
			this->panel37->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel35->SuspendLayout();
			this->panel5->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel70->SuspendLayout();
			this->panel71->SuspendLayout();
			this->panel33->SuspendLayout();
			this->panel32->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel47->SuspendLayout();
			this->panel46->SuspendLayout();
			this->panel43->SuspendLayout();
			this->panel58->SuspendLayout();
			this->panel57->SuspendLayout();
			this->panel56->SuspendLayout();
			this->panel49->SuspendLayout();
			this->panel48->SuspendLayout();
			this->panel42->SuspendLayout();
			this->panel55->SuspendLayout();
			this->panel54->SuspendLayout();
			this->panel52->SuspendLayout();
			this->panel51->SuspendLayout();
			this->panel53->SuspendLayout();
			this->panel50->SuspendLayout();
			this->panel41->SuspendLayout();
			this->panel44->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel59->SuspendLayout();
			this->panel60->SuspendLayout();
			this->panel64->SuspendLayout();
			this->panel65->SuspendLayout();
			this->panel67->SuspendLayout();
			this->panel68->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->panel81->SuspendLayout();
			this->panel79->SuspendLayout();
			this->panel80->SuspendLayout();
			this->panel77->SuspendLayout();
			this->panel78->SuspendLayout();
			this->panel74->SuspendLayout();
			this->panel75->SuspendLayout();
			this->panel76->SuspendLayout();
			this->panel72->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(2);
			this->panel1->Size = System::Drawing::Size(310, 755);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel2->Controls->Add(this->panel31);
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(2, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(0, 14, 0, 0);
			this->panel2->Size = System::Drawing::Size(306, 751);
			this->panel2->TabIndex = 0;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel31->Controls->Add(this->label23);
			this->panel31->Controls->Add(this->pictureBox6);
			this->panel31->Location = System::Drawing::Point(3, 650);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(299, 61);
			this->panel31->TabIndex = 2;
			this->panel31->MouseLeave += gcnew System::EventHandler(this, &MainForm::label23_MouseLeave);
			this->panel31->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label23_MouseMove);
			// 
			// label23
			// 
			this->label23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label23->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(85, 0);
			this->label23->Name = L"label23";
			this->label23->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->label23->Size = System::Drawing::Size(214, 61);
			this->label23->TabIndex = 4;
			this->label23->Text = L"Закрыть приложение";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label23->Click += gcnew System::EventHandler(this, &MainForm::label23_Click);
			this->label23->MouseLeave += gcnew System::EventHandler(this, &MainForm::label23_MouseLeave);
			this->label23->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label23_MouseMove);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(85, 61);
			this->pictureBox6->TabIndex = 3;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MainForm::label23_Click);
			this->pictureBox6->MouseLeave += gcnew System::EventHandler(this, &MainForm::label23_MouseLeave);
			this->pictureBox6->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label23_MouseMove);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->panel30);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 268);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(306, 332);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(299, 61);
			this->panel6->TabIndex = 0;
			// 
			// label21
			// 
			this->label21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label21->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(86, 0);
			this->label21->Name = L"label21";
			this->label21->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->label21->Size = System::Drawing::Size(213, 61);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Главная страница";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label21->Click += gcnew System::EventHandler(this, &MainForm::label21_Click);
			this->label21->MouseLeave += gcnew System::EventHandler(this, &MainForm::label23_MouseLeave);
			this->label21->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label23_MouseMove);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(86, 61);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MainForm::label21_Click);
			this->pictureBox4->MouseLeave += gcnew System::EventHandler(this, &MainForm::label23_MouseLeave);
			this->pictureBox4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label23_MouseMove);
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel30->Controls->Add(this->label22);
			this->panel30->Controls->Add(this->pictureBox5);
			this->panel30->Location = System::Drawing::Point(3, 70);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(299, 61);
			this->panel30->TabIndex = 1;
			// 
			// label22
			// 
			this->label22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label22->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(86, 0);
			this->label22->Name = L"label22";
			this->label22->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->label22->Size = System::Drawing::Size(213, 61);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Личный кабинет";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label22->Click += gcnew System::EventHandler(this, &MainForm::label22_Click);
			this->label22->MouseLeave += gcnew System::EventHandler(this, &MainForm::label23_MouseLeave);
			this->label22->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label23_MouseMove);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(86, 61);
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MainForm::label22_Click);
			this->pictureBox5->MouseLeave += gcnew System::EventHandler(this, &MainForm::label23_MouseLeave);
			this->pictureBox5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label23_MouseMove);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 139);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->label1->Size = System::Drawing::Size(306, 129);
			this->label1->TabIndex = 1;
			this->label1->Text = L"СОБЫТИЯ \nВЕЛИКОЙ ОТЕЧЕСТВЕННОЙ\nВОЙНЫ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Location = System::Drawing::Point(0, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(306, 125);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(310, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Padding = System::Windows::Forms::Padding(2);
			this->panel3->Size = System::Drawing::Size(998, 86);
			this->panel3->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel4->Controls->Add(this->panel39);
			this->panel4->Controls->Add(this->panel37);
			this->panel4->Controls->Add(this->panel35);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(2, 2);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(994, 82);
			this->panel4->TabIndex = 0;
			// 
			// panel39
			// 
			this->panel39->Controls->Add(this->panel40);
			this->panel39->Location = System::Drawing::Point(813, 25);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(142, 35);
			this->panel39->TabIndex = 17;
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel40.BackgroundImage")));
			this->panel40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel40->Controls->Add(this->label26);
			this->panel40->Location = System::Drawing::Point(-2, -2);
			this->panel40->Margin = System::Windows::Forms::Padding(0);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(145, 38);
			this->panel40->TabIndex = 10;
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label26->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(-4, -1);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(151, 38);
			this->label26->TabIndex = 8;
			this->label26->Text = L"Войти";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label26->Click += gcnew System::EventHandler(this, &MainForm::label26_Click);
			this->label26->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label26->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel37
			// 
			this->panel37->Controls->Add(this->panel38);
			this->panel37->Location = System::Drawing::Point(634, 25);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(142, 35);
			this->panel37->TabIndex = 17;
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel38.BackgroundImage")));
			this->panel38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel38->Controls->Add(this->label25);
			this->panel38->Location = System::Drawing::Point(-2, -2);
			this->panel38->Margin = System::Windows::Forms::Padding(0);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(145, 38);
			this->panel38->TabIndex = 10;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label25->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(-4, -1);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(151, 38);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Поиск";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label25->Click += gcnew System::EventHandler(this, &MainForm::label25_Click);
			this->label25->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label25->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel35
			// 
			this->panel35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel35.BackgroundImage")));
			this->panel35->Controls->Add(this->textBox10);
			this->panel35->Controls->Add(this->panel36);
			this->panel35->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel35->Location = System::Drawing::Point(293, 25);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(330, 38);
			this->panel35->TabIndex = 1;
			this->panel35->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->textBox10->Location = System::Drawing::Point(48, 5);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(277, 21);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"Искать";
			this->textBox10->Enter += gcnew System::EventHandler(this, &MainForm::textBox10_Enter);
			this->textBox10->Leave += gcnew System::EventHandler(this, &MainForm::textBox10_Leave);
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::Transparent;
			this->panel36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel36.BackgroundImage")));
			this->panel36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel36->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel36->Location = System::Drawing::Point(0, 0);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(44, 38);
			this->panel36->TabIndex = 0;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(18, 29);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(196, 24);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Список публикаций";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->tabControl1);
			this->panel5->Location = System::Drawing::Point(310, 85);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1023, 710);
			this->panel5->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1020, 713);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->tabPage1->Controls->Add(this->panel70);
			this->tabPage1->Controls->Add(this->flowLayoutPanel2);
			this->tabPage1->Controls->Add(this->panel33);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(0);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1012, 687);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Список публикаций";
			// 
			// panel70
			// 
			this->panel70->Controls->Add(this->panel71);
			this->panel70->Location = System::Drawing::Point(15, 19);
			this->panel70->Name = L"panel70";
			this->panel70->Size = System::Drawing::Size(267, 35);
			this->panel70->TabIndex = 13;
			this->panel70->Visible = false;
			// 
			// panel71
			// 
			this->panel71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel71->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel71.BackgroundImage")));
			this->panel71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel71->Controls->Add(this->label49);
			this->panel71->Location = System::Drawing::Point(-1, -2);
			this->panel71->Margin = System::Windows::Forms::Padding(0);
			this->panel71->Name = L"panel71";
			this->panel71->Size = System::Drawing::Size(267, 38);
			this->panel71->TabIndex = 10;
			// 
			// label49
			// 
			this->label49->BackColor = System::Drawing::Color::Transparent;
			this->label49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label49->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label49->ForeColor = System::Drawing::Color::White;
			this->label49->Location = System::Drawing::Point(1, -1);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(267, 38);
			this->label49->TabIndex = 8;
			this->label49->Text = L"Добавить публикацию";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label49->Click += gcnew System::EventHandler(this, &MainForm::label49_Click);
			this->label49->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label49->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(8, 63);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->flowLayoutPanel2->Size = System::Drawing::Size(1035, 573);
			this->flowLayoutPanel2->TabIndex = 3;
			this->flowLayoutPanel2->WrapContents = false;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::Transparent;
			this->panel33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel33.BackgroundImage")));
			this->panel33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel33->Controls->Add(this->panel34);
			this->panel33->Controls->Add(this->panel32);
			this->panel33->Location = System::Drawing::Point(621, 18);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(335, 36);
			this->panel33->TabIndex = 2;
			// 
			// panel34
			// 
			this->panel34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel34.BackgroundImage")));
			this->panel34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel34->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel34->Location = System::Drawing::Point(292, 0);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(43, 36);
			this->panel34->TabIndex = 2;
			this->panel34->Click += gcnew System::EventHandler(this, &MainForm::panel34_Click);
			// 
			// panel32
			// 
			this->panel32->Controls->Add(this->comboBox1);
			this->panel32->Location = System::Drawing::Point(14, 4);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(272, 26);
			this->panel32->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12.75F, System::Drawing::FontStyle::Bold));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"По порядку добавления", L"По числу просмотров",
					L"По числу комментариев", L"По числу лайков"
			});
			this->comboBox1->Location = System::Drawing::Point(-3, -3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(295, 32);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->TabStop = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBox1_KeyPress);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->tabPage2->Controls->Add(this->panel47);
			this->tabPage2->Controls->Add(this->panel46);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->panel43);
			this->tabPage2->Controls->Add(this->panel42);
			this->tabPage2->Controls->Add(this->panel41);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(0);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(1012, 687);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Личный кабинет";
			// 
			// panel47
			// 
			this->panel47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel47.BackgroundImage")));
			this->panel47->Controls->Add(this->label31);
			this->panel47->Location = System::Drawing::Point(414, 425);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(530, 36);
			this->panel47->TabIndex = 7;
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
			this->label31->Size = System::Drawing::Size(530, 36);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Сохранить данные";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label31->Click += gcnew System::EventHandler(this, &MainForm::label31_Click);
			this->label31->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label31->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel46
			// 
			this->panel46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel46.BackgroundImage")));
			this->panel46->Controls->Add(this->label30);
			this->panel46->Location = System::Drawing::Point(23, 425);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(360, 36);
			this->panel46->TabIndex = 6;
			this->panel46->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->panel46->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label30->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(0, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(360, 36);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Изменить фотографию";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label30->Click += gcnew System::EventHandler(this, &MainForm::label30_Click);
			this->label30->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label30->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(20, 482);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(929, 24);
			this->label29->TabIndex = 5;
			this->label29->Text = L"Смена пароля";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(414, 13);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(530, 24);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Личные данные";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(23, 13);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(360, 24);
			this->label27->TabIndex = 3;
			this->label27->Text = L"Фотография профиля";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel43
			// 
			this->panel43->BackColor = System::Drawing::Color::Transparent;
			this->panel43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel43.BackgroundImage")));
			this->panel43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel43->Controls->Add(this->label41);
			this->panel43->Controls->Add(this->panel58);
			this->panel43->Controls->Add(this->label40);
			this->panel43->Controls->Add(this->panel57);
			this->panel43->Controls->Add(this->label39);
			this->panel43->Controls->Add(this->panel56);
			this->panel43->Controls->Add(this->panel49);
			this->panel43->Location = System::Drawing::Point(20, 516);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(924, 90);
			this->panel43->TabIndex = 2;
			// 
			// label41
			// 
			this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label41->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label41->ForeColor = System::Drawing::Color::White;
			this->label41->Location = System::Drawing::Point(464, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(197, 29);
			this->label41->TabIndex = 21;
			this->label41->Text = L"Повтор нового пароля";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel58
			// 
			this->panel58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel58.BackgroundImage")));
			this->panel58->Controls->Add(this->textBox19);
			this->panel58->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel58->Location = System::Drawing::Point(464, 32);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(197, 38);
			this->panel58->TabIndex = 20;
			this->panel58->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox19->ForeColor = System::Drawing::Color::White;
			this->textBox19->Location = System::Drawing::Point(9, 7);
			this->textBox19->Name = L"textBox19";
			this->textBox19->PasswordChar = '*';
			this->textBox19->Size = System::Drawing::Size(179, 18);
			this->textBox19->TabIndex = 2;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox9_KeyPress);
			// 
			// label40
			// 
			this->label40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label40->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label40->ForeColor = System::Drawing::Color::White;
			this->label40->Location = System::Drawing::Point(242, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(197, 29);
			this->label40->TabIndex = 19;
			this->label40->Text = L"Новый пароль";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel57
			// 
			this->panel57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel57.BackgroundImage")));
			this->panel57->Controls->Add(this->textBox18);
			this->panel57->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel57->Location = System::Drawing::Point(242, 32);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(197, 38);
			this->panel57->TabIndex = 18;
			this->panel57->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox18->ForeColor = System::Drawing::Color::White;
			this->textBox18->Location = System::Drawing::Point(9, 7);
			this->textBox18->Name = L"textBox18";
			this->textBox18->PasswordChar = '*';
			this->textBox18->Size = System::Drawing::Size(179, 18);
			this->textBox18->TabIndex = 2;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox9_KeyPress);
			// 
			// label39
			// 
			this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label39->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label39->ForeColor = System::Drawing::Color::White;
			this->label39->Location = System::Drawing::Point(20, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(197, 29);
			this->label39->TabIndex = 17;
			this->label39->Text = L"Старый пароль";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel56
			// 
			this->panel56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel56.BackgroundImage")));
			this->panel56->Controls->Add(this->textBox17);
			this->panel56->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel56->Location = System::Drawing::Point(20, 32);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(197, 38);
			this->panel56->TabIndex = 13;
			this->panel56->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox17->ForeColor = System::Drawing::Color::White;
			this->textBox17->Location = System::Drawing::Point(9, 7);
			this->textBox17->Name = L"textBox17";
			this->textBox17->PasswordChar = '*';
			this->textBox17->Size = System::Drawing::Size(179, 18);
			this->textBox17->TabIndex = 2;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox9_KeyPress);
			// 
			// panel49
			// 
			this->panel49->Controls->Add(this->panel48);
			this->panel49->Location = System::Drawing::Point(682, 32);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(225, 36);
			this->panel49->TabIndex = 12;
			// 
			// panel48
			// 
			this->panel48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel48.BackgroundImage")));
			this->panel48->Controls->Add(this->label32);
			this->panel48->Location = System::Drawing::Point(-2, -2);
			this->panel48->Margin = System::Windows::Forms::Padding(0);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(222, 38);
			this->panel48->TabIndex = 0;
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label32->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(0, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(222, 38);
			this->label32->TabIndex = 11;
			this->label32->Text = L"Изменить пароль";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label32->Click += gcnew System::EventHandler(this, &MainForm::label32_Click);
			this->label32->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label32->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel42
			// 
			this->panel42->BackColor = System::Drawing::Color::Transparent;
			this->panel42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel42.BackgroundImage")));
			this->panel42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel42->Controls->Add(this->label38);
			this->panel42->Controls->Add(this->label37);
			this->panel42->Controls->Add(this->panel55);
			this->panel42->Controls->Add(this->label35);
			this->panel42->Controls->Add(this->panel54);
			this->panel42->Controls->Add(this->label34);
			this->panel42->Controls->Add(this->panel52);
			this->panel42->Controls->Add(this->panel51);
			this->panel42->Controls->Add(this->label36);
			this->panel42->Controls->Add(this->label33);
			this->panel42->Controls->Add(this->panel53);
			this->panel42->Controls->Add(this->panel50);
			this->panel42->Location = System::Drawing::Point(414, 50);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(530, 360);
			this->panel42->TabIndex = 1;
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label38->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(13, 268);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(502, 34);
			this->label38->TabIndex = 18;
			this->label38->Text = L"О себе";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label37->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(13, 182);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(502, 34);
			this->label37->TabIndex = 16;
			this->label37->Text = L"Почта";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel55
			// 
			this->panel55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel55.BackgroundImage")));
			this->panel55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel55->Controls->Add(this->textBox16);
			this->panel55->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel55->Location = System::Drawing::Point(13, 305);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(502, 38);
			this->panel55->TabIndex = 17;
			this->panel55->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox16->ForeColor = System::Drawing::Color::White;
			this->textBox16->Location = System::Drawing::Point(9, 7);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(485, 18);
			this->textBox16->TabIndex = 1;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label35->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(275, 95);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(240, 34);
			this->label35->TabIndex = 16;
			this->label35->Text = L"Возраст";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel54
			// 
			this->panel54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel54.BackgroundImage")));
			this->panel54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel54->Controls->Add(this->textBox15);
			this->panel54->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel54->Location = System::Drawing::Point(13, 219);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(502, 38);
			this->panel54->TabIndex = 15;
			this->panel54->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox15->ForeColor = System::Drawing::Color::White;
			this->textBox15->Location = System::Drawing::Point(9, 7);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(485, 18);
			this->textBox15->TabIndex = 1;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox7_KeyPress);
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label34->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label34->ForeColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(275, 6);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(240, 34);
			this->label34->TabIndex = 12;
			this->label34->Text = L"Фамилия";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel52
			// 
			this->panel52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel52.BackgroundImage")));
			this->panel52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel52->Controls->Add(this->textBox13);
			this->panel52->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel52->Location = System::Drawing::Point(275, 132);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(240, 38);
			this->panel52->TabIndex = 15;
			this->panel52->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->Location = System::Drawing::Point(9, 7);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(223, 18);
			this->textBox13->TabIndex = 1;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox6_KeyPress);
			// 
			// panel51
			// 
			this->panel51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel51.BackgroundImage")));
			this->panel51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel51->Controls->Add(this->textBox12);
			this->panel51->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel51->Location = System::Drawing::Point(275, 43);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(240, 38);
			this->panel51->TabIndex = 11;
			this->panel51->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(9, 7);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(223, 18);
			this->textBox12->TabIndex = 1;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox3_KeyPress);
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label36->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(13, 95);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(240, 34);
			this->label36->TabIndex = 14;
			this->label36->Text = L"Отчество";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label33->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(13, 6);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(240, 34);
			this->label33->TabIndex = 10;
			this->label33->Text = L"Имя";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel53
			// 
			this->panel53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel53.BackgroundImage")));
			this->panel53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel53->Controls->Add(this->textBox14);
			this->panel53->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel53->Location = System::Drawing::Point(13, 132);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(240, 38);
			this->panel53->TabIndex = 13;
			this->panel53->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox14->ForeColor = System::Drawing::Color::White;
			this->textBox14->Location = System::Drawing::Point(9, 7);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(223, 18);
			this->textBox14->TabIndex = 1;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox3_KeyPress);
			// 
			// panel50
			// 
			this->panel50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel50.BackgroundImage")));
			this->panel50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel50->Controls->Add(this->textBox11);
			this->panel50->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel50->Location = System::Drawing::Point(13, 43);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(240, 38);
			this->panel50->TabIndex = 0;
			this->panel50->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(9, 7);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(223, 18);
			this->textBox11->TabIndex = 1;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox3_KeyPress);
			// 
			// panel41
			// 
			this->panel41->BackColor = System::Drawing::Color::Transparent;
			this->panel41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel41.BackgroundImage")));
			this->panel41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel41->Controls->Add(this->panel44);
			this->panel41->Location = System::Drawing::Point(23, 50);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(360, 360);
			this->panel41->TabIndex = 0;
			// 
			// panel44
			// 
			this->panel44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel44.BackgroundImage")));
			this->panel44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel44->Controls->Add(this->panel45);
			this->panel44->Location = System::Drawing::Point(17, 17);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(325, 325);
			this->panel44->TabIndex = 0;
			// 
			// panel45
			// 
			this->panel45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel45.BackgroundImage")));
			this->panel45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel45->Location = System::Drawing::Point(0, 0);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(325, 325);
			this->panel45->TabIndex = 1;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->tabPage6->Controls->Add(this->flowLayoutPanel3);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1012, 687);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"Публикация";
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoScroll = true;
			this->flowLayoutPanel3->Controls->Add(this->label42);
			this->flowLayoutPanel3->Controls->Add(this->panel59);
			this->flowLayoutPanel3->Controls->Add(this->panel60);
			this->flowLayoutPanel3->Controls->Add(this->label43);
			this->flowLayoutPanel3->Controls->Add(this->label48);
			this->flowLayoutPanel3->Controls->Add(this->panel67);
			this->flowLayoutPanel3->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Padding = System::Windows::Forms::Padding(185, 0, 0, 0);
			this->flowLayoutPanel3->Size = System::Drawing::Size(1012, 612);
			this->flowLayoutPanel3->TabIndex = 1;
			this->flowLayoutPanel3->WrapContents = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::Color::White;
			this->label42->Location = System::Drawing::Point(188, 0);
			this->label42->MaximumSize = System::Drawing::Size(600, 0);
			this->label42->MinimumSize = System::Drawing::Size(600, 0);
			this->label42->Name = L"label42";
			this->label42->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->label42->Size = System::Drawing::Size(600, 64);
			this->label42->TabIndex = 0;
			this->label42->Text = L"Заголовок";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel59
			// 
			this->panel59->BackColor = System::Drawing::Color::Transparent;
			this->panel59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel59->Controls->Add(this->panel66);
			this->panel59->Location = System::Drawing::Point(188, 67);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(600, 279);
			this->panel59->TabIndex = 1;
			// 
			// panel66
			// 
			this->panel66->BackColor = System::Drawing::Color::Transparent;
			this->panel66->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel66.BackgroundImage")));
			this->panel66->Location = System::Drawing::Point(0, 0);
			this->panel66->Name = L"panel66";
			this->panel66->Size = System::Drawing::Size(600, 279);
			this->panel66->TabIndex = 2;
			// 
			// panel60
			// 
			this->panel60->Controls->Add(this->label44);
			this->panel60->Controls->Add(this->label45);
			this->panel60->Controls->Add(this->label46);
			this->panel60->Controls->Add(this->panel61);
			this->panel60->Controls->Add(this->panel64);
			this->panel60->Controls->Add(this->panel62);
			this->panel60->Controls->Add(this->panel63);
			this->panel60->Location = System::Drawing::Point(188, 352);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(600, 120);
			this->panel60->TabIndex = 3;
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label44->ForeColor = System::Drawing::Color::White;
			this->label44->Location = System::Drawing::Point(390, 19);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(70, 21);
			this->label44->TabIndex = 14;
			this->label44->Text = L"000000";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label45->ForeColor = System::Drawing::Color::White;
			this->label45->Location = System::Drawing::Point(272, 19);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(70, 21);
			this->label45->TabIndex = 13;
			this->label45->Text = L"000000";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label46
			// 
			this->label46->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label46->ForeColor = System::Drawing::Color::White;
			this->label46->Location = System::Drawing::Point(165, 19);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(70, 21);
			this->label46->TabIndex = 12;
			this->label46->Text = L"000000";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel61
			// 
			this->panel61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel61.BackgroundImage")));
			this->panel61->Location = System::Drawing::Point(348, 13);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(36, 37);
			this->panel61->TabIndex = 11;
			// 
			// panel64
			// 
			this->panel64->Controls->Add(this->panel65);
			this->panel64->Location = System::Drawing::Point(227, 69);
			this->panel64->Name = L"panel64";
			this->panel64->Size = System::Drawing::Size(142, 35);
			this->panel64->TabIndex = 18;
			// 
			// panel65
			// 
			this->panel65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel65.BackgroundImage")));
			this->panel65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel65->Controls->Add(this->label47);
			this->panel65->Location = System::Drawing::Point(-2, -2);
			this->panel65->Margin = System::Windows::Forms::Padding(0);
			this->panel65->Name = L"panel65";
			this->panel65->Size = System::Drawing::Size(145, 38);
			this->panel65->TabIndex = 10;
			// 
			// label47
			// 
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label47->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label47->ForeColor = System::Drawing::Color::White;
			this->label47->Location = System::Drawing::Point(-4, -1);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(151, 38);
			this->label47->TabIndex = 8;
			this->label47->Text = L"Домой";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label47->Click += gcnew System::EventHandler(this, &MainForm::label47_Click);
			this->label47->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label47->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel62
			// 
			this->panel62->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel62.BackgroundImage")));
			this->panel62->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel62->Location = System::Drawing::Point(244, 18);
			this->panel62->Name = L"panel62";
			this->panel62->Size = System::Drawing::Size(22, 22);
			this->panel62->TabIndex = 10;
			this->panel62->Click += gcnew System::EventHandler(this, &MainForm::panel62_Click);
			// 
			// panel63
			// 
			this->panel63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel63.BackgroundImage")));
			this->panel63->Location = System::Drawing::Point(137, 18);
			this->panel63->Name = L"panel63";
			this->panel63->Size = System::Drawing::Size(22, 22);
			this->panel63->TabIndex = 9;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Bold));
			this->label43->ForeColor = System::Drawing::Color::White;
			this->label43->Location = System::Drawing::Point(188, 475);
			this->label43->MaximumSize = System::Drawing::Size(600, 0);
			this->label43->MinimumSize = System::Drawing::Size(600, 0);
			this->label43->Name = L"label43";
			this->label43->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->label43->Size = System::Drawing::Size(600, 58);
			this->label43->TabIndex = 2;
			this->label43->Text = L"Описание";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->ForeColor = System::Drawing::Color::White;
			this->label48->Location = System::Drawing::Point(188, 533);
			this->label48->MaximumSize = System::Drawing::Size(600, 0);
			this->label48->MinimumSize = System::Drawing::Size(600, 0);
			this->label48->Name = L"label48";
			this->label48->Padding = System::Windows::Forms::Padding(0, 20, 0, 20);
			this->label48->Size = System::Drawing::Size(600, 64);
			this->label48->TabIndex = 5;
			this->label48->Text = L"Комментарии к публикации";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel67
			// 
			this->panel67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel67.BackgroundImage")));
			this->panel67->Controls->Add(this->panel69);
			this->panel67->Controls->Add(this->panel68);
			this->panel67->Location = System::Drawing::Point(188, 600);
			this->panel67->Name = L"panel67";
			this->panel67->Size = System::Drawing::Size(600, 89);
			this->panel67->TabIndex = 4;
			// 
			// panel69
			// 
			this->panel69->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel69.BackgroundImage")));
			this->panel69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel69->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel69->Location = System::Drawing::Point(542, 26);
			this->panel69->Name = L"panel69";
			this->panel69->Size = System::Drawing::Size(40, 40);
			this->panel69->TabIndex = 1;
			this->panel69->Click += gcnew System::EventHandler(this, &MainForm::panel69_Click);
			// 
			// panel68
			// 
			this->panel68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel68->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel68.BackgroundImage")));
			this->panel68->Controls->Add(this->richTextBox1);
			this->panel68->Location = System::Drawing::Point(20, 15);
			this->panel68->Name = L"panel68";
			this->panel68->Size = System::Drawing::Size(504, 61);
			this->panel68->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(11, 10);
			this->richTextBox1->MaxLength = 150;
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(510, 39);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"Введите текст";
			this->richTextBox1->Enter += gcnew System::EventHandler(this, &MainForm::richTextBox1_Enter);
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::richTextBox1_KeyDown);
			this->richTextBox1->Leave += gcnew System::EventHandler(this, &MainForm::richTextBox1_Leave);
			// 
			// tabPage7
			// 
			this->tabPage7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->tabPage7->Controls->Add(this->panel81);
			this->tabPage7->Controls->Add(this->panel79);
			this->tabPage7->Controls->Add(this->panel77);
			this->tabPage7->Controls->Add(this->panel74);
			this->tabPage7->Controls->Add(this->panel76);
			this->tabPage7->Controls->Add(this->label53);
			this->tabPage7->Controls->Add(this->label52);
			this->tabPage7->Controls->Add(this->label51);
			this->tabPage7->Controls->Add(this->panel72);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1012, 687);
			this->tabPage7->TabIndex = 3;
			this->tabPage7->Text = L"Добавление публикации";
			this->tabPage7->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->tabPage7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel81
			// 
			this->panel81->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel81.BackgroundImage")));
			this->panel81->Controls->Add(this->richTextBox2);
			this->panel81->Location = System::Drawing::Point(30, 428);
			this->panel81->Name = L"panel81";
			this->panel81->Size = System::Drawing::Size(897, 204);
			this->panel81->TabIndex = 26;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->richTextBox2->ForeColor = System::Drawing::Color::White;
			this->richTextBox2->Location = System::Drawing::Point(20, 20);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(857, 164);
			this->richTextBox2->TabIndex = 18;
			this->richTextBox2->Text = L"Введите текст";
			this->richTextBox2->Enter += gcnew System::EventHandler(this, &MainForm::richTextBox1_Enter);
			this->richTextBox2->Leave += gcnew System::EventHandler(this, &MainForm::richTextBox1_Leave);
			// 
			// panel79
			// 
			this->panel79->Controls->Add(this->panel80);
			this->panel79->Location = System::Drawing::Point(661, 242);
			this->panel79->Name = L"panel79";
			this->panel79->Size = System::Drawing::Size(267, 35);
			this->panel79->TabIndex = 25;
			// 
			// panel80
			// 
			this->panel80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel80->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel80.BackgroundImage")));
			this->panel80->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel80->Controls->Add(this->label56);
			this->panel80->Location = System::Drawing::Point(-1, -2);
			this->panel80->Margin = System::Windows::Forms::Padding(0);
			this->panel80->Name = L"panel80";
			this->panel80->Size = System::Drawing::Size(267, 38);
			this->panel80->TabIndex = 10;
			// 
			// label56
			// 
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label56->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label56->ForeColor = System::Drawing::Color::White;
			this->label56->Location = System::Drawing::Point(1, -1);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(267, 38);
			this->label56->TabIndex = 8;
			this->label56->Text = L"Добавить публикацию";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label56->Click += gcnew System::EventHandler(this, &MainForm::label56_Click);
			this->label56->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label56->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel77
			// 
			this->panel77->Controls->Add(this->panel78);
			this->panel77->Location = System::Drawing::Point(661, 283);
			this->panel77->Name = L"panel77";
			this->panel77->Size = System::Drawing::Size(267, 35);
			this->panel77->TabIndex = 25;
			// 
			// panel78
			// 
			this->panel78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel78->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel78.BackgroundImage")));
			this->panel78->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel78->Controls->Add(this->label55);
			this->panel78->Location = System::Drawing::Point(-1, -2);
			this->panel78->Margin = System::Windows::Forms::Padding(0);
			this->panel78->Name = L"panel78";
			this->panel78->Size = System::Drawing::Size(267, 38);
			this->panel78->TabIndex = 10;
			// 
			// label55
			// 
			this->label55->BackColor = System::Drawing::Color::Transparent;
			this->label55->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label55->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label55->ForeColor = System::Drawing::Color::White;
			this->label55->Location = System::Drawing::Point(1, -1);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(267, 38);
			this->label55->TabIndex = 8;
			this->label55->Text = L"Добавить фотографию";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label55->Click += gcnew System::EventHandler(this, &MainForm::label55_Click);
			this->label55->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label55->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel74
			// 
			this->panel74->Controls->Add(this->panel75);
			this->panel74->Location = System::Drawing::Point(661, 324);
			this->panel74->Name = L"panel74";
			this->panel74->Size = System::Drawing::Size(267, 35);
			this->panel74->TabIndex = 24;
			// 
			// panel75
			// 
			this->panel75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel75.BackgroundImage")));
			this->panel75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel75->Controls->Add(this->label50);
			this->panel75->Location = System::Drawing::Point(-1, -2);
			this->panel75->Margin = System::Windows::Forms::Padding(0);
			this->panel75->Name = L"panel75";
			this->panel75->Size = System::Drawing::Size(267, 38);
			this->panel75->TabIndex = 10;
			// 
			// label50
			// 
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label50->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label50->ForeColor = System::Drawing::Color::White;
			this->label50->Location = System::Drawing::Point(1, -1);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(267, 38);
			this->label50->TabIndex = 8;
			this->label50->Text = L"Главная страница";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label50->Click += gcnew System::EventHandler(this, &MainForm::label50_Click);
			this->label50->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label50->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel76
			// 
			this->panel76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel76->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel76.BackgroundImage")));
			this->panel76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel76->Controls->Add(this->textBox20);
			this->panel76->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel76->Location = System::Drawing::Point(664, 83);
			this->panel76->Name = L"panel76";
			this->panel76->Size = System::Drawing::Size(267, 38);
			this->panel76->TabIndex = 23;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox20->ForeColor = System::Drawing::Color::White;
			this->textBox20->Location = System::Drawing::Point(5, 6);
			this->textBox20->MaxLength = 100;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(259, 18);
			this->textBox20->TabIndex = 0;
			// 
			// label53
			// 
			this->label53->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label53->ForeColor = System::Drawing::Color::White;
			this->label53->Location = System::Drawing::Point(649, 38);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(307, 23);
			this->label53->TabIndex = 21;
			this->label53->Text = L"Название статьи";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label52->ForeColor = System::Drawing::Color::White;
			this->label52->Location = System::Drawing::Point(30, 386);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(897, 23);
			this->label52->TabIndex = 20;
			this->label52->Text = L"Содержание статьи";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold));
			this->label51->ForeColor = System::Drawing::Color::White;
			this->label51->Location = System::Drawing::Point(30, 38);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(600, 23);
			this->label51->TabIndex = 19;
			this->label51->Text = L"Фотография статьи";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel72
			// 
			this->panel72->BackColor = System::Drawing::Color::Transparent;
			this->panel72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel72->Controls->Add(this->panel73);
			this->panel72->Location = System::Drawing::Point(30, 83);
			this->panel72->Name = L"panel72";
			this->panel72->Size = System::Drawing::Size(600, 279);
			this->panel72->TabIndex = 2;
			// 
			// panel73
			// 
			this->panel73->BackColor = System::Drawing::Color::Transparent;
			this->panel73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel73.BackgroundImage")));
			this->panel73->Location = System::Drawing::Point(0, 0);
			this->panel73->Name = L"panel73";
			this->panel73->Size = System::Drawing::Size(600, 279);
			this->panel73->TabIndex = 2;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(6, -3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1407, 781);
			this->tabControl2->TabIndex = 3;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->panel5);
			this->tabPage3->Controls->Add(this->panel1);
			this->tabPage3->Controls->Add(this->panel3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(0);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1399, 755);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Главная форма";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->tabPage4->Controls->Add(this->panel26);
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->panel9);
			this->tabPage4->Controls->Add(this->pictureBox2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(0);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1399, 755);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Форма авторизации";
			// 
			// panel26
			// 
			this->panel26->Controls->Add(this->panel27);
			this->panel26->Location = System::Drawing::Point(1089, 33);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(142, 35);
			this->panel26->TabIndex = 16;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel27.BackgroundImage")));
			this->panel27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel27->Controls->Add(this->label19);
			this->panel27->Location = System::Drawing::Point(-2, -2);
			this->panel27->Margin = System::Windows::Forms::Padding(0);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(145, 38);
			this->panel27->TabIndex = 10;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label19->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(-4, -1);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(151, 38);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Назад";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label19->Click += gcnew System::EventHandler(this, &MainForm::label19_Click);
			this->label19->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label19->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(491, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 73);
			this->label2->TabIndex = 15;
			this->label2->Text = L"СОБЫТИЯ \nВЕЛИКОЙ ОТЕЧЕСТВЕННОЙ\nВОЙНЫ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->panel12);
			this->panel9->Controls->Add(this->label4);
			this->panel9->Controls->Add(this->panel8);
			this->panel9->Controls->Add(this->label5);
			this->panel9->Controls->Add(this->panel7);
			this->panel9->Controls->Add(this->label6);
			this->panel9->Location = System::Drawing::Point(484, 273);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(313, 382);
			this->panel9->TabIndex = 10;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->panel13);
			this->panel11->Location = System::Drawing::Point(22, 326);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(267, 35);
			this->panel11->TabIndex = 13;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel13->Controls->Add(this->label8);
			this->panel13->Location = System::Drawing::Point(-1, -2);
			this->panel13->Margin = System::Windows::Forms::Padding(0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(267, 38);
			this->panel13->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(1, -1);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(267, 38);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Регистрация";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &MainForm::label8_Click);
			this->label8->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label8->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->panel10);
			this->panel12->Location = System::Drawing::Point(23, 280);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(267, 35);
			this->panel12->TabIndex = 12;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel10->Controls->Add(this->label7);
			this->panel10->Location = System::Drawing::Point(-1, -2);
			this->panel10->Margin = System::Windows::Forms::Padding(0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(267, 38);
			this->panel10->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(1, -1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(267, 38);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Войти";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MainForm::label7_Click);
			this->label7->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(313, 63);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Авторизация";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->textBox2);
			this->panel8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel8->Location = System::Drawing::Point(23, 202);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(267, 38);
			this->panel8->TabIndex = 9;
			this->panel8->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(5, 6);
			this->textBox2->MaxLength = 100;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(257, 18);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox9_KeyPress);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(0, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(313, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Почта";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel7->Location = System::Drawing::Point(23, 111);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(267, 38);
			this->panel7->TabIndex = 8;
			this->panel7->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(5, 6);
			this->textBox1->MaxLength = 100;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 18);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox7_KeyPress);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(0, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(313, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Пароль";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(583, 10);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(115, 100);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->tabPage5->Controls->Add(this->panel28);
			this->tabPage5->Controls->Add(this->panel14);
			this->tabPage5->Controls->Add(this->label3);
			this->tabPage5->Controls->Add(this->pictureBox3);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(0);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1399, 755);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"Форма регистрации";
			// 
			// panel28
			// 
			this->panel28->Controls->Add(this->panel29);
			this->panel28->Location = System::Drawing::Point(1089, 33);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(142, 35);
			this->panel28->TabIndex = 17;
			this->panel28->Click += gcnew System::EventHandler(this, &MainForm::label19_Click);
			this->panel28->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->panel28->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel29.BackgroundImage")));
			this->panel29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel29->Controls->Add(this->label20);
			this->panel29->Location = System::Drawing::Point(-2, -2);
			this->panel29->Margin = System::Windows::Forms::Padding(0);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(145, 38);
			this->panel29->TabIndex = 10;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label20->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(-4, -1);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(151, 38);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Назад";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label20->Click += gcnew System::EventHandler(this, &MainForm::label19_Click);
			this->label20->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label20->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->Controls->Add(this->panel24);
			this->panel14->Controls->Add(this->panel22);
			this->panel14->Controls->Add(this->label15);
			this->panel14->Controls->Add(this->label16);
			this->panel14->Controls->Add(this->panel20);
			this->panel14->Controls->Add(this->panel21);
			this->panel14->Controls->Add(this->label14);
			this->panel14->Controls->Add(this->panel19);
			this->panel14->Controls->Add(this->label13);
			this->panel14->Controls->Add(this->label12);
			this->panel14->Controls->Add(this->panel18);
			this->panel14->Controls->Add(this->panel17);
			this->panel14->Controls->Add(this->label11);
			this->panel14->Controls->Add(this->label10);
			this->panel14->Controls->Add(this->panel16);
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Controls->Add(this->label9);
			this->panel14->Location = System::Drawing::Point(404, 204);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(472, 504);
			this->panel14->TabIndex = 6;
			// 
			// panel24
			// 
			this->panel24->Controls->Add(this->panel25);
			this->panel24->Location = System::Drawing::Point(103, 452);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(267, 35);
			this->panel24->TabIndex = 13;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel25.BackgroundImage")));
			this->panel25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel25->Controls->Add(this->label18);
			this->panel25->Location = System::Drawing::Point(-1, -2);
			this->panel25->Margin = System::Windows::Forms::Padding(0);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(267, 38);
			this->panel25->TabIndex = 10;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label18->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(1, -1);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(267, 38);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Авторизоваться";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label18->Click += gcnew System::EventHandler(this, &MainForm::label18_Click);
			this->label18->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label18->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Location = System::Drawing::Point(103, 402);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(267, 35);
			this->panel22->TabIndex = 23;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel23.BackgroundImage")));
			this->panel23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel23->Controls->Add(this->label17);
			this->panel23->Location = System::Drawing::Point(-1, -2);
			this->panel23->Margin = System::Windows::Forms::Padding(0);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(267, 38);
			this->panel23->TabIndex = 10;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label17->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(1, -1);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(267, 38);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Зарегистрироваться";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label17->Click += gcnew System::EventHandler(this, &MainForm::label17_Click);
			this->label17->MouseLeave += gcnew System::EventHandler(this, &MainForm::label7_MouseLeave);
			this->label17->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label7_MouseMove);
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label15->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(246, 308);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(203, 34);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Повтор пароля";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(22, 308);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(203, 34);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Пароль";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel20->Controls->Add(this->textBox8);
			this->panel20->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel20->Location = System::Drawing::Point(246, 345);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(203, 38);
			this->panel20->TabIndex = 22;
			this->panel20->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(5, 6);
			this->textBox8->MaxLength = 100;
			this->textBox8->Name = L"textBox8";
			this->textBox8->PasswordChar = '*';
			this->textBox8->Size = System::Drawing::Size(195, 18);
			this->textBox8->TabIndex = 0;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox9_KeyPress);
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel21.BackgroundImage")));
			this->panel21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel21->Controls->Add(this->textBox9);
			this->panel21->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel21->Location = System::Drawing::Point(22, 345);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(203, 38);
			this->panel21->TabIndex = 20;
			this->panel21->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(5, 6);
			this->textBox9->MaxLength = 100;
			this->textBox9->Name = L"textBox9";
			this->textBox9->PasswordChar = '*';
			this->textBox9->Size = System::Drawing::Size(195, 18);
			this->textBox9->TabIndex = 0;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox9_KeyPress);
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(22, 233);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(430, 34);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Почта";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel19->Controls->Add(this->textBox7);
			this->panel19->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel19->Location = System::Drawing::Point(22, 270);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(430, 38);
			this->panel19->TabIndex = 18;
			this->panel19->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(5, 6);
			this->textBox7->MaxLength = 100;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(422, 18);
			this->textBox7->TabIndex = 0;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox7_KeyPress);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(246, 149);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(203, 34);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Возраст";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(22, 149);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(203, 34);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Отчество";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel18->Controls->Add(this->textBox6);
			this->panel18->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel18->Location = System::Drawing::Point(246, 186);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(203, 38);
			this->panel18->TabIndex = 16;
			this->panel18->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(5, 6);
			this->textBox6->MaxLength = 3;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(195, 18);
			this->textBox6->TabIndex = 0;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox6_KeyPress);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel17.BackgroundImage")));
			this->panel17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel17->Controls->Add(this->textBox5);
			this->panel17->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel17->Location = System::Drawing::Point(22, 186);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(203, 38);
			this->panel17->TabIndex = 14;
			this->panel17->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(5, 6);
			this->textBox5->MaxLength = 100;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(195, 18);
			this->textBox5->TabIndex = 0;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox3_KeyPress);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(246, 66);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(203, 34);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Фамилия";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(22, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(203, 34);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Имя";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel16.BackgroundImage")));
			this->panel16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel16->Controls->Add(this->textBox4);
			this->panel16->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel16->Location = System::Drawing::Point(246, 103);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(203, 38);
			this->panel16->TabIndex = 12;
			this->panel16->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(5, 6);
			this->textBox4->MaxLength = 100;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(195, 18);
			this->textBox4->TabIndex = 0;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox3_KeyPress);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel15->Controls->Add(this->textBox3);
			this->panel15->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel15->Location = System::Drawing::Point(22, 103);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(203, 38);
			this->panel15->TabIndex = 10;
			this->panel15->Click += gcnew System::EventHandler(this, &MainForm::panelFocus);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 11, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(5, 6);
			this->textBox3->MaxLength = 100;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(195, 18);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox3_KeyPress);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Dock = System::Windows::Forms::DockStyle::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(472, 66);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Регистрация";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(491, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(298, 73);
			this->label3->TabIndex = 5;
			this->label3->Text = L"СОБЫТИЯ \nВЕЛИКОЙ ОТЕЧЕСТВЕННОЙ\nВОЙНЫ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(583, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(115, 100);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1367, 801);
			this->Controls->Add(this->tabControl2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"События великой отечественной войны";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel31->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel30->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel39->ResumeLayout(false);
			this->panel40->ResumeLayout(false);
			this->panel37->ResumeLayout(false);
			this->panel38->ResumeLayout(false);
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel70->ResumeLayout(false);
			this->panel71->ResumeLayout(false);
			this->panel33->ResumeLayout(false);
			this->panel32->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->panel47->ResumeLayout(false);
			this->panel46->ResumeLayout(false);
			this->panel43->ResumeLayout(false);
			this->panel58->ResumeLayout(false);
			this->panel58->PerformLayout();
			this->panel57->ResumeLayout(false);
			this->panel57->PerformLayout();
			this->panel56->ResumeLayout(false);
			this->panel56->PerformLayout();
			this->panel49->ResumeLayout(false);
			this->panel48->ResumeLayout(false);
			this->panel42->ResumeLayout(false);
			this->panel55->ResumeLayout(false);
			this->panel55->PerformLayout();
			this->panel54->ResumeLayout(false);
			this->panel54->PerformLayout();
			this->panel52->ResumeLayout(false);
			this->panel52->PerformLayout();
			this->panel51->ResumeLayout(false);
			this->panel51->PerformLayout();
			this->panel53->ResumeLayout(false);
			this->panel53->PerformLayout();
			this->panel50->ResumeLayout(false);
			this->panel50->PerformLayout();
			this->panel41->ResumeLayout(false);
			this->panel44->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->panel59->ResumeLayout(false);
			this->panel60->ResumeLayout(false);
			this->panel64->ResumeLayout(false);
			this->panel65->ResumeLayout(false);
			this->panel67->ResumeLayout(false);
			this->panel68->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->panel81->ResumeLayout(false);
			this->panel79->ResumeLayout(false);
			this->panel80->ResumeLayout(false);
			this->panel77->ResumeLayout(false);
			this->panel78->ResumeLayout(false);
			this->panel74->ResumeLayout(false);
			this->panel75->ResumeLayout(false);
			this->panel76->ResumeLayout(false);
			this->panel76->PerformLayout();
			this->panel72->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->panel26->ResumeLayout(false);
			this->panel27->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->panel28->ResumeLayout(false);
			this->panel29->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			this->panel25->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			this->panel23->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	// Стороние функции
	
	private: bool IsValidEmail(String^ email);

	private: void ClearAutorize();

	private: void ClearRegistrate();

	private: void AutorizeUser();

	// Доступ к БД

	private: void UpdateUserPhotoPath(String^ photoPath);

	private: String^ GetPasswordById(Int32^ currentId);

	private: String^ GetEmailById(Int32^ currentId);

	private: void UpdatePassword(String^ newPassword);

	private: void UpdateUser(String^ newFirstName, String^ newLastName, String^ newMiddleName, Int32^ newAge, String^ newEmail, String^ newAbout);

	private: bool CheckIfEmailExists(String^ emailToCheck);

	private: Int32 GetMaxId();

	private: void LoadPublications();

	private: void LoadPublicationsWithSelect(String^ query);

	private: void deleteLike();

	private: void setLike();

	private: bool checkLikeOnPublications();

	private: String^ getFirstNameById(Int32^ userId);

	private: String^ getAvatarkaById(Int32^ userId);

	private: Int32 getMaxCommentId();

	private: bool IsAdmin();

	// Дизайн и анимации элементов

	private: System::Void label7_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void label7_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label23_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void label23_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	// Загрузка формы

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);

	// Переход на страницу регистрации

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e);

	// Переход на страницу авторизации

	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e);

	// Переход на главную форму

	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e);
	
	// Выход из приложения

	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panel34_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e);

	// Ограничители ввода

	private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

	private: System::Void textBox10_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox10_Leave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panelFocus(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	
	private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

	// Регистрация

	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e);

	// Авторизация

	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e);

	// Личный кабинет

	private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e);
	
	// Сортировка публикаций

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	// Поиск публикаций

	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e);

	// Лайк на публикацию

	private: System::Void panel62_Click(System::Object^ sender, System::EventArgs^ e);

	// Комментарии

	private: System::Void richTextBox1_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void richTextBox1_Leave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panel69_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void richTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	// Добавление статьи

	private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void label50_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label55_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label56_Click(System::Object^ sender, System::EventArgs^ e);
};
}
