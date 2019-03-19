#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FunBrainz {

	/// <summary>
	/// Summary for Hint_user_control
	/// </summary>
	public ref class Hint_user_control : public System::Windows::Forms::UserControl
	{
	public:
		Hint_user_control(void)
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
		~Hint_user_control()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_solve;
	protected: 
	private: System::Windows::Forms::Button^  btn_extra;
	private: System::Windows::Forms::Button^  btn_selected;
	private: System::Windows::Forms::Button^  btn_random;

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
			this->btn_solve = (gcnew System::Windows::Forms::Button());
			this->btn_extra = (gcnew System::Windows::Forms::Button());
			this->btn_selected = (gcnew System::Windows::Forms::Button());
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_solve
			// 
			this->btn_solve->Location = System::Drawing::Point(30, 201);
			this->btn_solve->Name = L"btn_solve";
			this->btn_solve->Size = System::Drawing::Size(218, 45);
			this->btn_solve->TabIndex = 7;
			this->btn_solve->Text = L"Solve";
			this->btn_solve->UseVisualStyleBackColor = true;
			this->btn_solve->Click += gcnew System::EventHandler(this, &Hint_user_control::btn_solve_Click);
			// 
			// btn_extra
			// 
			this->btn_extra->Location = System::Drawing::Point(30, 150);
			this->btn_extra->Name = L"btn_extra";
			this->btn_extra->Size = System::Drawing::Size(218, 45);
			this->btn_extra->TabIndex = 6;
			this->btn_extra->Text = L"Remove Extra Letter";
			this->btn_extra->UseVisualStyleBackColor = true;
			this->btn_extra->Click += gcnew System::EventHandler(this, &Hint_user_control::btn_extra_Click);
			// 
			// btn_selected
			// 
			this->btn_selected->Location = System::Drawing::Point(30, 99);
			this->btn_selected->Name = L"btn_selected";
			this->btn_selected->Size = System::Drawing::Size(218, 45);
			this->btn_selected->TabIndex = 5;
			this->btn_selected->Text = L"Selected Letter";
			this->btn_selected->UseVisualStyleBackColor = true;
			this->btn_selected->Click += gcnew System::EventHandler(this, &Hint_user_control::btn_selected_Click);
			// 
			// btn_random
			// 
			this->btn_random->Location = System::Drawing::Point(30, 48);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(218, 45);
			this->btn_random->TabIndex = 4;
			this->btn_random->Text = L"Random Letter";
			this->btn_random->UseVisualStyleBackColor = true;
			this->btn_random->Click += gcnew System::EventHandler(this, &Hint_user_control::btn_random_Click);
			// 
			// Hint_user_control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_solve);
			this->Controls->Add(this->btn_extra);
			this->Controls->Add(this->btn_selected);
			this->Controls->Add(this->btn_random);
			this->Name = L"Hint_user_control";
			this->Size = System::Drawing::Size(278, 294);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_random_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void btn_extra_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_selected_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_solve_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
