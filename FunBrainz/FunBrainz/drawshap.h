#pragma once

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for drawshap
	/// </summary>
	public ref class drawshap : public System::Windows::Forms::Form
	{
	public:
		drawshap(void)
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
		~drawshap()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// drawshape
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"drawshap";
			this->Text = L"drawshap";
			this->Load += gcnew System::EventHandler(this, &drawshap::drawshap_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void drawshap_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
