#pragma once
//#include "Image_Quiz_Display.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HintForm
	/// </summary>
	public ref class HintForm : public System::Windows::Forms::Form
	{
	public:
		HintForm(void)
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
		~HintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_random;
	protected: 
	private: System::Windows::Forms::Button^  btn_selected;
	private: System::Windows::Forms::Button^  btn_extra;
	private: System::Windows::Forms::Button^  btn_solve;

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
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->btn_selected = (gcnew System::Windows::Forms::Button());
			this->btn_extra = (gcnew System::Windows::Forms::Button());
			this->btn_solve = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_random
			// 
			this->btn_random->Location = System::Drawing::Point(42, 31);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(218, 45);
			this->btn_random->TabIndex = 0;
			this->btn_random->Text = L"Random Letter";
			this->btn_random->UseVisualStyleBackColor = true;
			this->btn_random->Click += gcnew System::EventHandler(this, &HintForm::btn_random_Click);
			// 
			// btn_selected
			// 
			this->btn_selected->Location = System::Drawing::Point(42, 82);
			this->btn_selected->Name = L"btn_selected";
			this->btn_selected->Size = System::Drawing::Size(218, 45);
			this->btn_selected->TabIndex = 1;
			this->btn_selected->Text = L"Selected Letter";
			this->btn_selected->UseVisualStyleBackColor = true;
			// 
			// btn_extra
			// 
			this->btn_extra->Location = System::Drawing::Point(42, 133);
			this->btn_extra->Name = L"btn_extra";
			this->btn_extra->Size = System::Drawing::Size(218, 45);
			this->btn_extra->TabIndex = 2;
			this->btn_extra->Text = L"Remove Extra Letter";
			this->btn_extra->UseVisualStyleBackColor = true;
			// 
			// btn_solve
			// 
			this->btn_solve->Location = System::Drawing::Point(42, 184);
			this->btn_solve->Name = L"btn_solve";
			this->btn_solve->Size = System::Drawing::Size(218, 45);
			this->btn_solve->TabIndex = 3;
			this->btn_solve->Text = L"Solve";
			this->btn_solve->UseVisualStyleBackColor = true;
			// 
			// HintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 247);
			this->Controls->Add(this->btn_solve);
			this->Controls->Add(this->btn_extra);
			this->Controls->Add(this->btn_selected);
			this->Controls->Add(this->btn_random);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"HintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HintForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_random_Click(System::Object^  sender, System::EventArgs^  e) {
				//Image_Quiz_Display^ form = gcnew Image_Quiz_Display;
				//Image_Quiz_Display::Hide();
				HintForm::Hide();
			 }
	};
}
