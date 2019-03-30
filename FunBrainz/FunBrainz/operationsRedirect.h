#pragma once
#include "Cricket.h"
#include "operatorFilling.h"
#include "cloud.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FunBrainz {

	/// <summary>
	/// Summary for operationsRedirect
	/// </summary>
	public ref class operationsRedirect : public System::Windows::Forms::UserControl
	{
	public:
		operationsRedirect(void)
		{
			InitializeComponent();
			stuId = 1;
			//
			//TODO: Add the constructor code here
			//
		}
		operationsRedirect(int x)
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
		~operationsRedirect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_cloud;
	protected: 
	private: System::Windows::Forms::Button^  btn_Fill;
	private: System::Windows::Forms::Button^  btn_Cricket;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(operationsRedirect::typeid));
			this->btn_cloud = (gcnew System::Windows::Forms::Button());
			this->btn_Fill = (gcnew System::Windows::Forms::Button());
			this->btn_Cricket = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_cloud
			// 
			this->btn_cloud->BackColor = System::Drawing::Color::Firebrick;
			this->btn_cloud->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cloud->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_cloud->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_cloud->Location = System::Drawing::Point(521, 251);
			this->btn_cloud->Name = L"btn_cloud";
			this->btn_cloud->Size = System::Drawing::Size(160, 44);
			this->btn_cloud->TabIndex = 5;
			this->btn_cloud->Text = L"Clouds";
			this->btn_cloud->UseVisualStyleBackColor = false;
			this->btn_cloud->Click += gcnew System::EventHandler(this, &operationsRedirect::btn_cloud_Click);
			// 
			// btn_Fill
			// 
			this->btn_Fill->BackColor = System::Drawing::Color::Firebrick;
			this->btn_Fill->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Fill->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Fill->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Fill->Location = System::Drawing::Point(334, 251);
			this->btn_Fill->Name = L"btn_Fill";
			this->btn_Fill->Size = System::Drawing::Size(160, 44);
			this->btn_Fill->TabIndex = 4;
			this->btn_Fill->Text = L"Fill Operators";
			this->btn_Fill->UseVisualStyleBackColor = false;
			this->btn_Fill->Click += gcnew System::EventHandler(this, &operationsRedirect::btn_Fill_Click);
			// 
			// btn_Cricket
			// 
			this->btn_Cricket->BackColor = System::Drawing::Color::Firebrick;
			this->btn_Cricket->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Cricket->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Cricket->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Cricket->Location = System::Drawing::Point(148, 251);
			this->btn_Cricket->Name = L"btn_Cricket";
			this->btn_Cricket->Size = System::Drawing::Size(160, 44);
			this->btn_Cricket->TabIndex = 3;
			this->btn_Cricket->Text = L"Cricket";
			this->btn_Cricket->UseVisualStyleBackColor = false;
			this->btn_Cricket->Click += gcnew System::EventHandler(this, &operationsRedirect::btn_Cricket_Click);
			// 
			// operationsRedirect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->btn_cloud);
			this->Controls->Add(this->btn_Fill);
			this->Controls->Add(this->btn_Cricket);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"operationsRedirect";
			this->Size = System::Drawing::Size(842, 539);
			this->ResumeLayout(false);

		}
#pragma endregion
	int stuId;
	private: System::Void btn_Cricket_Click(System::Object^  sender, System::EventArgs^  e) {
				 Cricket ^form =gcnew Cricket(stuId);
				 form->ShowDialog();
			 }
	private: System::Void btn_cloud_Click(System::Object^  sender, System::EventArgs^  e) {
				 cloud ^form =gcnew cloud();
				 form->ShowDialog();
			 }
	private: System::Void btn_Fill_Click(System::Object^  sender, System::EventArgs^  e) {
				 operatorFilling ^form =gcnew operatorFilling(stuId);
				 form->ShowDialog();
			 }
};
}
