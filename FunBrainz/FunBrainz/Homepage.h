#pragma once
#include "profile.h"
#include "Arithmetic1.h"
#include "Abacus.h"
#include "shapesPanel.h"
#include "PuzzlesRedirect.h"
#include "operationsRedirect.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
		Form ^ obj;
	private: System::Windows::Forms::Button^  Deletebtn;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;



	public:
		String^ user;

	public:
		Homepage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Homepage(Form ^ obj1)
		{
			obj=obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Homepage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




















	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  Arithmeticbtn;
	private: System::Windows::Forms::Button^  Profilebtn;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  backbtn;


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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Arithmeticbtn = (gcnew System::Windows::Forms::Button());
			this->Profilebtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->Deletebtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(11, 322);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 45);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Quizzes and Puzzles";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Homepage::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(11, 266);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 45);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Identifying Shapes";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Homepage::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(11, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Abacus";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Homepage::button3_Click);
			// 
			// Arithmeticbtn
			// 
			this->Arithmeticbtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Arithmeticbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Arithmeticbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Arithmeticbtn->Location = System::Drawing::Point(11, 100);
			this->Arithmeticbtn->Name = L"Arithmeticbtn";
			this->Arithmeticbtn->Size = System::Drawing::Size(136, 45);
			this->Arithmeticbtn->TabIndex = 3;
			this->Arithmeticbtn->Text = L"Graph For Cricket";
			this->Arithmeticbtn->UseVisualStyleBackColor = false;
			this->Arithmeticbtn->Click += gcnew System::EventHandler(this, &Homepage::Arithmeticbtn_Click);
			// 
			// Profilebtn
			// 
			this->Profilebtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Profilebtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Profilebtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Profilebtn->Location = System::Drawing::Point(11, 44);
			this->Profilebtn->Name = L"Profilebtn";
			this->Profilebtn->Size = System::Drawing::Size(136, 45);
			this->Profilebtn->TabIndex = 4;
			this->Profilebtn->Text = L"Profile";
			this->Profilebtn->UseVisualStyleBackColor = false;
			this->Profilebtn->Click += gcnew System::EventHandler(this, &Homepage::Profilebtn_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(171, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(842, 539);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::panel1_Paint);
			// 
			// backbtn
			// 
			this->backbtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->backbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->backbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->backbtn->Location = System::Drawing::Point(27, 457);
			this->backbtn->Margin = System::Windows::Forms::Padding(2);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(101, 33);
			this->backbtn->TabIndex = 8;
			this->backbtn->Text = L"Back";
			this->backbtn->UseVisualStyleBackColor = false;
			this->backbtn->Click += gcnew System::EventHandler(this, &Homepage::backbtn_Click);
			// 
			// Deletebtn
			// 
			this->Deletebtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Deletebtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Deletebtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Deletebtn->Location = System::Drawing::Point(11, 377);
			this->Deletebtn->Margin = System::Windows::Forms::Padding(2);
			this->Deletebtn->Name = L"Deletebtn";
			this->Deletebtn->Size = System::Drawing::Size(136, 45);
			this->Deletebtn->TabIndex = 10;
			this->Deletebtn->Text = L"Delete account";
			this->Deletebtn->UseVisualStyleBackColor = false;
			this->Deletebtn->Click += gcnew System::EventHandler(this, &Homepage::Deletebtn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(11, 155);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 45);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Basic Operations";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Homepage::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Firebrick;
			this->panel2->Controls->Add(this->Profilebtn);
			this->panel2->Controls->Add(this->backbtn);
			this->panel2->Controls->Add(this->Deletebtn);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->Arithmeticbtn);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(166, 539);
			this->panel2->TabIndex = 12;
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1008, 531);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1024, 570);
			this->MinimumSize = System::Drawing::Size(1024, 570);
			this->Name = L"Homepage";
			this->Text = L"Homepage";
			this->Load += gcnew System::EventHandler(this, &Homepage::Homepage_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		static OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Profilebtn_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 profile ^ f = gcnew profile();
				 f->user=user;
				 panel1->Controls->Clear();
				 panel1->Controls->Add(f);
			 }
	private: System::Void Homepage_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
			 }
	private: System::Void backbtn_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->Hide();
				 obj->Show();
			 }
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Arithmeticbtn_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 Arithmetic1 ^ f =  gcnew Arithmetic1();
				 f->user=user;
				 panel1->Controls->Clear();
				 panel1->Controls->Add(f);
				 //cloud ^form =gcnew cloud(this);
				 //form->ShowDialog();
			 }
	private: System::Void Deletebtn_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 String ^ Sql = "DELETE  FROM Students WHERE UserName = '" + user + "'  ";
					 con->Open();
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 command->ExecuteNonQuery();
					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 con->Close();
					 return;
				 }

				 backbtn_Click(sender,e);

			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

				 int student=1;
				 try {

					 String ^Sql = "Select [StudentID] from Students where [UserName] = '" + user + "';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 student = (int) command->ExecuteScalar();
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 PuzzlesRedirect ^ f =  gcnew PuzzlesRedirect(student);
				 panel1->Controls->Clear();
				 panel1->Controls->Add(f);
			 }

			 

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Abacus ^form =gcnew Abacus(this);
				 form->ShowDialog();
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

				 shapesPanel ^form2 = gcnew shapesPanel(this,user);
				 form2->ShowDialog();



			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int student=1;
				 try {

					 String ^Sql = "Select [StudentID] from Students where [UserName] = '" + user + "';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 student = (int) command->ExecuteScalar();
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 operationsRedirect ^ f =  gcnew operationsRedirect(student);
				 panel1->Controls->Clear();
				 panel1->Controls->Add(f);
			 }
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
};
}
