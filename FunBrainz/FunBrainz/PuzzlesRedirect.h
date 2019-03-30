#pragma once
#include "Game_2048.h"
#include "Level_pipeline.h"
#include "Image_Quiz.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FunBrainz {

	/// <summary>
	/// Summary for PuzzlesRedirect
	/// </summary>
	public ref class PuzzlesRedirect : public System::Windows::Forms::UserControl
	{
	public:
		PuzzlesRedirect(void)
		{
			InitializeComponent();
			stuId = 1;
			//
			//TODO: Add the constructor code here
			//
		}
		PuzzlesRedirect(int x)
		{
			InitializeComponent();
			stuId = x;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PuzzlesRedirect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_quiz;
	protected: 
	private: System::Windows::Forms::Button^  btn_pipeline;
	private: System::Windows::Forms::Button^  btn_2048;

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
			this->btn_quiz = (gcnew System::Windows::Forms::Button());
			this->btn_pipeline = (gcnew System::Windows::Forms::Button());
			this->btn_2048 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_quiz
			// 
			this->btn_quiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_quiz->Location = System::Drawing::Point(62, 216);
			this->btn_quiz->Margin = System::Windows::Forms::Padding(4);
			this->btn_quiz->Name = L"btn_quiz";
			this->btn_quiz->Size = System::Drawing::Size(176, 69);
			this->btn_quiz->TabIndex = 5;
			this->btn_quiz->Text = L"Image Quiz";
			this->btn_quiz->UseVisualStyleBackColor = true;
			this->btn_quiz->Click += gcnew System::EventHandler(this, &PuzzlesRedirect::btn_quiz_Click);
			// 
			// btn_pipeline
			// 
			this->btn_pipeline->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_pipeline->Location = System::Drawing::Point(62, 111);
			this->btn_pipeline->Margin = System::Windows::Forms::Padding(4);
			this->btn_pipeline->Name = L"btn_pipeline";
			this->btn_pipeline->Size = System::Drawing::Size(176, 69);
			this->btn_pipeline->TabIndex = 4;
			this->btn_pipeline->Text = L"Pipeline";
			this->btn_pipeline->UseVisualStyleBackColor = true;
			this->btn_pipeline->Click += gcnew System::EventHandler(this, &PuzzlesRedirect::btn_pipeline_Click);
			// 
			// btn_2048
			// 
			this->btn_2048->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_2048->Location = System::Drawing::Point(62, 21);
			this->btn_2048->Margin = System::Windows::Forms::Padding(4);
			this->btn_2048->Name = L"btn_2048";
			this->btn_2048->Size = System::Drawing::Size(176, 69);
			this->btn_2048->TabIndex = 3;
			this->btn_2048->Text = L"2048";
			this->btn_2048->UseVisualStyleBackColor = true;
			this->btn_2048->Click += gcnew System::EventHandler(this, &PuzzlesRedirect::btn_2048_Click);
			// 
			// PuzzlesRedirect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_quiz);
			this->Controls->Add(this->btn_pipeline);
			this->Controls->Add(this->btn_2048);
			this->Name = L"PuzzlesRedirect";
			this->Size = System::Drawing::Size(300, 306);
			this->ResumeLayout(false);

		}
#pragma endregion
		int stuId;
	private: System::Void btn_2048_Click(System::Object^  sender, System::EventArgs^  e) {

				 Game_2048 ^form =gcnew Game_2048(stuId);
				 form->ShowDialog();
			 }
	private: System::Void btn_pipeline_Click(System::Object^  sender, System::EventArgs^  e) {

				 Level_pipeline ^form =gcnew Level_pipeline(stuId);
				 form->ShowDialog();

			 }
	private: System::Void btn_quiz_Click(System::Object^  sender, System::EventArgs^  e) {
				 Image_Quiz ^form =gcnew Image_Quiz();
				 form->ShowDialog();

			 }
	};
}
