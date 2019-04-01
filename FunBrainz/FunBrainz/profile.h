#pragma once

#using <system.dll>
#include "regex"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace System::Text::RegularExpressions;

using namespace System::Text;
using namespace System::IO;
using namespace System::Security::Cryptography;


namespace FunBrainz {

	/// <summary>
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::UserControl
	{
	public:
		String^ user;
	public:
		profile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  save_button;
	private: System::Windows::Forms::Button^  edit_button;
	private: System::Windows::Forms::ComboBox^  Gendertxt;

	private: System::Windows::Forms::DateTimePicker^  DOBtxt;
	private: System::Windows::Forms::PictureBox^  pic;

	private: System::Windows::Forms::Button^  Uploadpicbtn;

	private: System::Windows::Forms::Button^  Deletepicbtn;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  GuardiansLastNametxt;
	private: System::Windows::Forms::TextBox^  GuardiansFirstNametxt;
	private: System::Windows::Forms::TextBox^  Passwordtxt;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(profile::typeid));
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->edit_button = (gcnew System::Windows::Forms::Button());
			this->Gendertxt = (gcnew System::Windows::Forms::ComboBox());
			this->DOBtxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->pic = (gcnew System::Windows::Forms::PictureBox());
			this->Uploadpicbtn = (gcnew System::Windows::Forms::Button());
			this->Deletepicbtn = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->GuardiansLastNametxt = (gcnew System::Windows::Forms::TextBox());
			this->GuardiansFirstNametxt = (gcnew System::Windows::Forms::TextBox());
			this->Passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pic))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->textBox7->Location = System::Drawing::Point(411, 171);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(159, 30);
			this->textBox7->TabIndex = 4;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &profile::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->textBox6->Location = System::Drawing::Point(411, 481);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(159, 30);
			this->textBox6->TabIndex = 31;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->textBox3->Location = System::Drawing::Point(411, 354);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(159, 30);
			this->textBox3->TabIndex = 28;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &profile::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->textBox2->Location = System::Drawing::Point(411, 132);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(159, 30);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->textBox1->Location = System::Drawing::Point(411, 91);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 30);
			this->textBox1->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label7->Location = System::Drawing::Point(187, 175);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 22);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Email ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label6->Location = System::Drawing::Point(112, 479);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 22);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Mobile Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label5->Location = System::Drawing::Point(187, 437);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 22);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Gender";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label4->Location = System::Drawing::Point(139, 396);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 22);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Date Of Birth";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label3->Location = System::Drawing::Point(213, 354);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 22);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Class";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label2->Location = System::Drawing::Point(164, 91);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 22);
			this->label2->TabIndex = 17;
			this->label2->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label1->Location = System::Drawing::Point(161, 132);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 22);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Last Name";
			// 
			// save_button
			// 
			this->save_button->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->save_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->save_button->Location = System::Drawing::Point(668, 581);
			this->save_button->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(120, 41);
			this->save_button->TabIndex = 38;
			this->save_button->Text = L"save";
			this->save_button->UseVisualStyleBackColor = false;
			this->save_button->Click += gcnew System::EventHandler(this, &profile::save_button_Click);
			// 
			// edit_button
			// 
			this->edit_button->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->edit_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->edit_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->edit_button->Location = System::Drawing::Point(513, 581);
			this->edit_button->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(120, 41);
			this->edit_button->TabIndex = 37;
			this->edit_button->Text = L"edit";
			this->edit_button->UseVisualStyleBackColor = false;
			this->edit_button->Click += gcnew System::EventHandler(this, &profile::edit_button_Click);
			// 
			// Gendertxt
			// 
			this->Gendertxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Gendertxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->Gendertxt->FormattingEnabled = true;
			this->Gendertxt->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Others"});
			this->Gendertxt->Location = System::Drawing::Point(411, 439);
			this->Gendertxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Gendertxt->Name = L"Gendertxt";
			this->Gendertxt->Size = System::Drawing::Size(159, 30);
			this->Gendertxt->TabIndex = 39;
			// 
			// DOBtxt
			// 
			this->DOBtxt->CustomFormat = L"dd-mm-yyyy";
			this->DOBtxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->DOBtxt->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOBtxt->Location = System::Drawing::Point(411, 399);
			this->DOBtxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DOBtxt->Name = L"DOBtxt";
			this->DOBtxt->Size = System::Drawing::Size(159, 30);
			this->DOBtxt->TabIndex = 40;
			// 
			// pic
			// 
			this->pic->Location = System::Drawing::Point(761, 47);
			this->pic->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pic->Name = L"pic";
			this->pic->Size = System::Drawing::Size(284, 177);
			this->pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pic->TabIndex = 41;
			this->pic->TabStop = false;
			// 
			// Uploadpicbtn
			// 
			this->Uploadpicbtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Uploadpicbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Uploadpicbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->Uploadpicbtn->Location = System::Drawing::Point(761, 245);
			this->Uploadpicbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Uploadpicbtn->Name = L"Uploadpicbtn";
			this->Uploadpicbtn->Size = System::Drawing::Size(284, 39);
			this->Uploadpicbtn->TabIndex = 42;
			this->Uploadpicbtn->Text = L"Upload Profile pic";
			this->Uploadpicbtn->UseVisualStyleBackColor = false;
			this->Uploadpicbtn->Click += gcnew System::EventHandler(this, &profile::Uploadpicbtn_Click);
			// 
			// Deletepicbtn
			// 
			this->Deletepicbtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Deletepicbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Deletepicbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->Deletepicbtn->Location = System::Drawing::Point(761, 297);
			this->Deletepicbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Deletepicbtn->Name = L"Deletepicbtn";
			this->Deletepicbtn->Size = System::Drawing::Size(284, 39);
			this->Deletepicbtn->TabIndex = 43;
			this->Deletepicbtn->Text = L"Delete Profile pic";
			this->Deletepicbtn->UseVisualStyleBackColor = false;
			this->Deletepicbtn->Click += gcnew System::EventHandler(this, &profile::Deletepicbtn_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label14->Location = System::Drawing::Point(744, 485);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 22);
			this->label14->TabIndex = 51;
			this->label14->Text = L"Last Name";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label13->Location = System::Drawing::Point(747, 446);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 22);
			this->label13->TabIndex = 50;
			this->label13->Text = L"First Name";
			// 
			// GuardiansLastNametxt
			// 
			this->GuardiansLastNametxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->GuardiansLastNametxt->Location = System::Drawing::Point(900, 481);
			this->GuardiansLastNametxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GuardiansLastNametxt->Name = L"GuardiansLastNametxt";
			this->GuardiansLastNametxt->Size = System::Drawing::Size(159, 30);
			this->GuardiansLastNametxt->TabIndex = 49;
			// 
			// GuardiansFirstNametxt
			// 
			this->GuardiansFirstNametxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->GuardiansFirstNametxt->Location = System::Drawing::Point(900, 442);
			this->GuardiansFirstNametxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GuardiansFirstNametxt->Name = L"GuardiansFirstNametxt";
			this->GuardiansFirstNametxt->Size = System::Drawing::Size(159, 30);
			this->GuardiansFirstNametxt->TabIndex = 48;
			// 
			// Passwordtxt
			// 
			this->Passwordtxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->Passwordtxt->Location = System::Drawing::Point(411, 209);
			this->Passwordtxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Passwordtxt->Name = L"Passwordtxt";
			this->Passwordtxt->Size = System::Drawing::Size(159, 30);
			this->Passwordtxt->TabIndex = 52;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label8->Location = System::Drawing::Point(175, 209);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 28);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Password";
			this->label8->UseCompatibleTextRendering = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(45, 47);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 23);
			this->label9->TabIndex = 54;
			this->label9->Text = L"Basic Details";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(689, 383);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 23);
			this->label10->TabIndex = 55;
			this->label10->Text = L"Guardian Details";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(45, 302);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(136, 23);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Other Details";
			// 
			// profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Passwordtxt);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->GuardiansLastNametxt);
			this->Controls->Add(this->GuardiansFirstNametxt);
			this->Controls->Add(this->Deletepicbtn);
			this->Controls->Add(this->Uploadpicbtn);
			this->Controls->Add(this->pic);
			this->Controls->Add(this->DOBtxt);
			this->Controls->Add(this->Gendertxt);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->edit_button);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"profile";
			this->Size = System::Drawing::Size(1245, 722);
			this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		static	 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
		static   Image^ Defualtimage;

	private: System::Void date(String ^ str)
			 {
				 //MessageBox::Show(str);
				 String ^ dd = "";
				 dd = dd + str[0];
				 dd = dd + str[1];
				 int  num1 = Convert::ToInt32(dd);
				 String ^ mm = "";
				 mm = mm + str[3];
				 mm = mm + str[4];
				 int  num2 = Convert::ToInt32(mm);
				 String ^ yyyy = "";
				 yyyy = yyyy + str[6];
				 yyyy = yyyy + str[7];
				 yyyy = yyyy + str[8];
				 yyyy = yyyy + str[9];
				 int  num3 = Convert::ToInt32(yyyy);
				 DOBtxt->Value = DateTime(num3, num2, num1);
			 }

	private: System::Void LoadProfilepic()
			 {
				 Defualtimage=gcnew Bitmap("Media\\Defualt.jpg");
				 try
				 {
					 String ^ str = "Media\\"+user+".png";
					 Image^ userpic = gcnew Bitmap(str);
					 pic->Image = userpic;
				 }
				 catch (Exception ^ ex)
				 {
					 pic->Image = Defualtimage;
				 }

			 }
	private: System::Void profile_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 disable();
				 LoadProfilepic();
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
				 String ^ access1 = "SELECT FirstName,LastName,Class,DateOfBirth,Gender,MobileNumber,Email,GuardiansFirstName,GuardiansLastName,[Password]  FROM Students WHERE  UserName  = '" + user + "' ";
				 con->Open();
				 OleDb::OleDbDataReader ^ reader;
				 try{
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
					 reader = command->ExecuteReader();
					 while (reader->Read() == true)
					 {
						 textBox1->Text = reader->GetString(0);
						 textBox2->Text = reader->GetString(1);
						 textBox3->Text = Convert::ToString(reader->GetInt32(2));
						 Gendertxt->Text = reader->GetString(4);
						 date(Convert::ToString(reader->GetDateTime(3)));
						 textBox6->Text = reader->GetString(5);
						 textBox7->Text = reader->GetString(6);
						 GuardiansFirstNametxt->Text=reader->GetString(7);
						 GuardiansLastNametxt->Text=reader->GetString(8);
						 Passwordtxt->Text=reader->GetString(9);
					 }
					 reader->Close();
					 con->Close();

				 }
				 catch (Exception ^ ex)
				 {
					 reader->Close();
					 con->Close();
					 //Box::Show(ex->Message);
				 }

			 }
	private: System::Void enable()
			 {

				 textBox1->Enabled = true;
				 textBox2->Enabled = true;
				 textBox3->Enabled = true;
				 //DOBtxt->Enabled = true;
				 //Gendertxt->Enabled = true;
				 textBox6->Enabled = true;
				 textBox7->Enabled = true;
				 save_button->Visible = true;
				 GuardiansFirstNametxt->Enabled=true;
				 GuardiansLastNametxt->Enabled=true;
				 Passwordtxt->Enabled=true;
			 }
	private: System::Void disable()
			 {
				 textBox1->Enabled = false;
				 textBox2->Enabled = false;
				 textBox3->Enabled = false;
				 DOBtxt->Enabled = false;
				 Gendertxt->Enabled = false;
				 textBox6->Enabled = false;
				 textBox7->Enabled = false;
				 save_button->Visible = false;
				 GuardiansFirstNametxt->Enabled=false;
				 GuardiansLastNametxt->Enabled=false;
				 Passwordtxt->Enabled=false;

			 }
	private: System::Void edit_button_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 enable();
			 }

	private : System::Boolean classvalidate ( String ^ s )
			  {
				  if(s=="") return false;
				  if (s->Length >= 3 || s->Length == 0) return false;
				  if (!(s->ToUpper() == s->ToLower()))  return false;
				  for (int i = 0; i < s->Length; i++)
				  {
					  if (!(s[i] >='0' && s[i] <='9')) return false;
				  }
				  int l = Convert::ToInt32(s);
				  if (l >= 11) return false;
				  return true;

			  }
	private : System::Boolean Mobilevalidate ( String ^ s )
			  {
				  if(s=="") return false;
				  if (!(s->Length == 10)) return false;
				  for (int  i = 0; i < s->Length; i++)
				  {
					  if (!(s[i] >= '0' && s[i] <= '9')) return false;
				  }
				  return true;
			  }
	private : System::Boolean Emailvalidate ( String ^ s )
			  {
				  if(s=="") return false;
				  Regex^ emailregex = gcnew Regex("(?<user>[^@]+)@(?<host>.+)");


				  Match^ m = emailregex->Match(s);

				  if (m->Success)
				  {
					  return true;
				  }
				  else
					  return false;
			  }
	private: System::Boolean namevalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 for (int i = 0; i < s->Length; i++)
				 {
					if (!( (s[i] >= 'a'&&s[i] <= 'z') || s[i]==' ')) return false;
				 }
				 return true;
			 }
	private: System::String ^ updatetext(String ^ s)
			 {
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 return s;
			 }

	private: System::Boolean Passwordvalidate(String ^ s)
			 {

				 if(s=="") return false;
				 if(s->Length<6||s->Length>15) return false;
				 return true;
			 }
	private: System::Boolean  datavalid()
			 {

				 textBox3->Text=updatetext(textBox3->Text);
				 textBox6->Text=updatetext(textBox6->Text);
				 textBox7->Text=updatetext(textBox7->Text);
				 textBox1->Text=updatetext(textBox1->Text);
				 textBox2->Text=updatetext(textBox2->Text);
				 GuardiansFirstNametxt->Text=updatetext(GuardiansFirstNametxt->Text);
				 GuardiansLastNametxt->Text=updatetext(GuardiansLastNametxt->Text);
				 if(!namevalidate(textBox1->Text))   {MessageBox::Show("enter valid FirstName");return false;}
				 if(!namevalidate(textBox2->Text))   {MessageBox::Show("enter valid LastName");return false;}
				 if(!Emailvalidate(textBox7->Text))  {MessageBox::Show("enter valid Email");return false;}
				 if(!Passwordvalidate(Passwordtxt->Text)) {MessageBox::Show("Password Should be Atleast 6 characters  And at max 15 characters");return false;}
				 if(!classvalidate(textBox3->Text))  {MessageBox::Show("enter valid class between 1-10");return false ;}
				 if(!Mobilevalidate(textBox6->Text)) {MessageBox::Show("enter valid Mobile Number");return false ;}
				 if(!namevalidate(GuardiansFirstNametxt->Text))   {MessageBox::Show("enter valid GuardiansFirstName and  GuardiansFirstName Should be Lessthan 20 characters");return false;}
				 if(!namevalidate(GuardiansLastNametxt->Text))   {MessageBox::Show("enter valid GuardiansLastName and  GuardiansLastName Should be Lessthan 20 characters");return false;}
				 return true;
			 }
	private: System::Void save_button_Click(System::Object^  sender, System::EventArgs^  e) 
			 {

				 DateTime ^ var = DOBtxt->Value;
				 String ^  strDate = var->ToString("dd-MM-yyyy");
				 if(!datavalid()) return ;
				 String ^ access1 = "update Students set FirstName= '" + textBox1->Text + "', LastName= '" + textBox2->Text + "', Class= '" + textBox3->Text + "', DateOfBirth= '" + strDate + "', Gender= '" + Gendertxt->Text + "', MobileNumber= '" + textBox6->Text + "', Email= '" + textBox7->Text + "', [Password]= '" + Passwordtxt->Text + "', GuardiansFirstName= '"+GuardiansFirstNametxt->Text +"', GuardiansLastName= '"+GuardiansLastNametxt->Text +"' WHERE  UserName  = '" + user + "' ";
				 con->Open();
				 try
				 {   	OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
				 command->ExecuteNonQuery();
				 con->Close();
				 MessageBox::Show("Succefully updated");
				 }
				 catch (Exception ^ ex)
				 {
					 con->Close();
					 //Box::Show(ex->Message);
				 }

				 profile_Load(sender,e);
			 }
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Uploadpicbtn_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 OpenFileDialog^ OpenFileDialog1 = gcnew OpenFileDialog;
				 String ^ str = "";
				 OpenFileDialog1->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp; *.png,)|*.jpg; *.jpeg; *.gif; *.bmp; *.png";
				 if (OpenFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 str = OpenFileDialog1->InitialDirectory + OpenFileDialog1->FileName;
				 }
				 if(str=="") { MessageBox::Show("File not provided");  return; }
				 Deletepicbtn_Click(sender,e);
				 File::Copy(str, "Media\\"+user+".png");
				 try{
					 String ^ userpic = "Media\\"+user+".png";
					 Image^ Type_A = gcnew Bitmap(userpic);
					 pic->Image = Type_A;
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Upload image not avaiable");
					 //Box::Show(ex->Message);
				 }


			 }

	private: System::Void Deletepicbtn_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if(Defualtimage==pic->Image) 
				 {
					 return ;
				 }
				 Image ^ temp = pic->Image;
				 pic->Image=Defualtimage;
				 delete temp;
				 File::Delete("Media\\"+user+".png");

			 }
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
