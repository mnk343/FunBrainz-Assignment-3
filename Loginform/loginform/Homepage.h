#pragma once
#include "profile.h"
#include "Arithmetic1.h"
namespace loginform {

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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(108, 353);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 28);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Quizzes and Puzzles";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(108, 273);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 28);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Identifying Shapes";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(108, 210);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Abacus";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(108, 136);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Arithmetic Operations";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Homepage::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(108, 76);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Profile";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Homepage::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(257, 7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(773, 444);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::panel1_Paint);
			// 
			// backbtn
			// 
			this->backbtn->Location = System::Drawing::Point(1057, 428);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(75, 23);
			this->backbtn->TabIndex = 8;
			this->backbtn->Text = L"Back";
			this->backbtn->UseVisualStyleBackColor = true;
			this->backbtn->Click += gcnew System::EventHandler(this, &Homepage::backbtn_Click);
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 487);
			this->Controls->Add(this->backbtn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Homepage";
			this->Text = L"Homepage";
			this->Load += gcnew System::EventHandler(this, &Homepage::Homepage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 profile ^ f = gcnew profile();
			 f->user=user;
			 panel1->Controls->Clear();
			 panel1->Controls->Add(f);
		 }
private: System::Void Homepage_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void backbtn_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 this->Hide();
			 obj->Show();
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
              Arithmetic1 ^ f =  gcnew Arithmetic1();
			  panel1->Controls->Clear();
			  panel1->Controls->Add(f);
		 }
};
}
