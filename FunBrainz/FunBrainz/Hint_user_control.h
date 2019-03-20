#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FunBrainz {

	/// <summary>
	/// Summary for Hint_User_Control
	/// </summary>
	public ref class Hint_User_Control : public System::Windows::Forms::UserControl
	{
	public:
		Hint_User_Control(void)
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
		~Hint_User_Control()
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
			this->btn_solve = (gcnew System::Windows::Forms::Button());
			this->btn_extra = (gcnew System::Windows::Forms::Button());
			this->btn_selected = (gcnew System::Windows::Forms::Button());
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_solve
			// 
			this->btn_solve->Location = System::Drawing::Point(22, 244);
			this->btn_solve->Margin = System::Windows::Forms::Padding(4);
			this->btn_solve->Name = L"btn_solve";
			this->btn_solve->Size = System::Drawing::Size(291, 55);
			this->btn_solve->TabIndex = 7;
			this->btn_solve->Text = L"Solve";
			this->btn_solve->UseVisualStyleBackColor = true;
			// 
			// btn_extra
			// 
			this->btn_extra->Location = System::Drawing::Point(22, 182);
			this->btn_extra->Margin = System::Windows::Forms::Padding(4);
			this->btn_extra->Name = L"btn_extra";
			this->btn_extra->Size = System::Drawing::Size(291, 55);
			this->btn_extra->TabIndex = 6;
			this->btn_extra->Text = L"Remove Extra Letter";
			this->btn_extra->UseVisualStyleBackColor = true;
			// 
			// btn_selected
			// 
			this->btn_selected->Location = System::Drawing::Point(22, 119);
			this->btn_selected->Margin = System::Windows::Forms::Padding(4);
			this->btn_selected->Name = L"btn_selected";
			this->btn_selected->Size = System::Drawing::Size(291, 55);
			this->btn_selected->TabIndex = 5;
			this->btn_selected->Text = L"Selected Letter";
			this->btn_selected->UseVisualStyleBackColor = true;
			// 
			// btn_random
			// 
			this->btn_random->Location = System::Drawing::Point(22, 56);
			this->btn_random->Margin = System::Windows::Forms::Padding(4);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(291, 55);
			this->btn_random->TabIndex = 4;
			this->btn_random->Text = L"Random Letter";
			this->btn_random->UseVisualStyleBackColor = true;
			this->btn_random->Click += gcnew System::EventHandler(this, &Hint_User_Control::btn_random_Click);
			// 
			// Hint_User_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_solve);
			this->Controls->Add(this->btn_extra);
			this->Controls->Add(this->btn_selected);
			this->Controls->Add(this->btn_random);
			this->Name = L"Hint_User_Control";
			this->Size = System::Drawing::Size(359, 342);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_random_Click(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
};
}
