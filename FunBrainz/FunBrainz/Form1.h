#pragma once
#include "Cricket.h"
#include "GlobalFuncs.h"
#include "MyForm1.h"
#include "Image_Quiz.h"
#include "Pipeline_Game.h"

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btn_2048;
	private: System::Windows::Forms::Button^  btn_Image_Quiz;
	private: System::Windows::Forms::Button^  btn_pipeline;
	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_2048 = (gcnew System::Windows::Forms::Button());
			this->btn_Image_Quiz = (gcnew System::Windows::Forms::Button());
			this->btn_pipeline = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 101);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btn_2048
			// 
			this->btn_2048->Location = System::Drawing::Point(83, 148);
			this->btn_2048->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_2048->Name = L"btn_2048";
			this->btn_2048->Size = System::Drawing::Size(100, 28);
			this->btn_2048->TabIndex = 1;
			this->btn_2048->Text = L"2048_game";
			this->btn_2048->UseVisualStyleBackColor = true;
			this->btn_2048->Click += gcnew System::EventHandler(this, &Form1::btn_2048_Click);
			// 
			// btn_Image_Quiz
			// 
			this->btn_Image_Quiz->Location = System::Drawing::Point(83, 185);
			this->btn_Image_Quiz->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_Image_Quiz->Name = L"btn_Image_Quiz";
			this->btn_Image_Quiz->Size = System::Drawing::Size(100, 28);
			this->btn_Image_Quiz->TabIndex = 2;
			this->btn_Image_Quiz->Text = L"Image Quiz";
			this->btn_Image_Quiz->UseVisualStyleBackColor = true;
			this->btn_Image_Quiz->Click += gcnew System::EventHandler(this, &Form1::btn_Image_Quiz_Click);
			// 
			// btn_pipeline
			// 
			this->btn_pipeline->Location = System::Drawing::Point(95, 37);
			this->btn_pipeline->Name = L"btn_pipeline";
			this->btn_pipeline->Size = System::Drawing::Size(75, 23);
			this->btn_pipeline->TabIndex = 3;
			this->btn_pipeline->Text = L"Pipeline";
			this->btn_pipeline->UseVisualStyleBackColor = true;
			this->btn_pipeline->Click += gcnew System::EventHandler(this, &Form1::btn_pipeline_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 254);
			this->Controls->Add(this->btn_pipeline);
			this->Controls->Add(this->btn_Image_Quiz);
			this->Controls->Add(this->btn_2048);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 try { 
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection(); 
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;"; 
					 String ^ Sql = "Delete from Students where StudentId = 3"; 
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con); 
					 con->Open(); 
					 command->ExecuteNonQuery(); 
					 con->Close(); }
				 catch (Exception ^ ex) { 
					 MessageBox::Show(ex->Message); 
				 } 
				 std::pair <std::string, long int> ques = GlobalFuncs::generateQuestion(4, 1);
				 String ^ x = gcnew String(ques.first.c_str());
				 MessageBox::Show(x); 
				 Cricket ^ form = gcnew Cricket(this, 1); 
				 form->ShowDialog();
			 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 srand(time(0));
			 }
	private: System::Void btn_2048_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form1::Hide();
				 MyForm1^ form = gcnew MyForm1;
				 form->Begin();
				 form->ShowDialog();
			 }
	private: System::Void btn_Image_Quiz_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form1::Hide();
				 Image_Quiz ^ form = gcnew Image_Quiz;
				 form->ShowDialog();
			 }
private: System::Void btn_pipeline_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Hide();
			 Pipeline_Game ^ form = gcnew Pipeline_Game;
			 form->ShowDialog();
		 }
};
}

