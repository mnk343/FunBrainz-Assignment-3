#pragma once
#include"Image_Quiz_Display.h"
#include<cmath>
#include<ctime>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FunBrainz {

	/// <summary>
	/// Summary for Arithmetic1
	/// </summary>
	public ref class Arithmetic1 : public System::Windows::Forms::UserControl
	{
		
	 public:
		String^ user;
	 public:
		Arithmetic1(void)
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
		~Arithmetic1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  Crgraphbtn;
	private: System::Windows::Forms::Button^  Pipelinegraphbtn;
	private: System::Windows::Forms::GroupBox^  pipeBox;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::GroupBox^  cricketBox;
	private: System::Windows::Forms::GroupBox^  vakulBox;
	private: System::Windows::Forms::Label^  NOTP;
	private: System::Windows::Forms::Label^  Max;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  vakul;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  OFBox;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  OF;
	private: System::Windows::Forms::Button^  OFbtn;
	private: System::Windows::Forms::Panel^  panel1;






	protected: 
		/*private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;*/
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Arithmetic1::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Crgraphbtn = (gcnew System::Windows::Forms::Button());
			this->Pipelinegraphbtn = (gcnew System::Windows::Forms::Button());
			this->pipeBox = (gcnew System::Windows::Forms::GroupBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->cricketBox = (gcnew System::Windows::Forms::GroupBox());
			this->vakulBox = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NOTP = (gcnew System::Windows::Forms::Label());
			this->Max = (gcnew System::Windows::Forms::Label());
			this->vakul = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->OFBox = (gcnew System::Windows::Forms::GroupBox());
			this->OF = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->OFbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->pipeBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->BeginInit();
			this->cricketBox->SuspendLayout();
			this->vakulBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->vakul))->BeginInit();
			this->OFBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->OF))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"Default";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(57, 22);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"Default";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series1->Legend = L"Legend1";
			series1->Name = L"perfomance";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(541, 369);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Arithmetic1::chart1_Click);
			// 
			// Crgraphbtn
			// 
			this->Crgraphbtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Crgraphbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Crgraphbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->Crgraphbtn->Location = System::Drawing::Point(18, 17);
			this->Crgraphbtn->Margin = System::Windows::Forms::Padding(4);
			this->Crgraphbtn->Name = L"Crgraphbtn";
			this->Crgraphbtn->Size = System::Drawing::Size(181, 55);
			this->Crgraphbtn->TabIndex = 1;
			this->Crgraphbtn->Text = L"Cricket ";
			this->Crgraphbtn->UseVisualStyleBackColor = false;
			this->Crgraphbtn->Click += gcnew System::EventHandler(this, &Arithmetic1::button1_Click);
			// 
			// Pipelinegraphbtn
			// 
			this->Pipelinegraphbtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Pipelinegraphbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Pipelinegraphbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->Pipelinegraphbtn->Location = System::Drawing::Point(233, 17);
			this->Pipelinegraphbtn->Name = L"Pipelinegraphbtn";
			this->Pipelinegraphbtn->Size = System::Drawing::Size(181, 55);
			this->Pipelinegraphbtn->TabIndex = 2;
			this->Pipelinegraphbtn->Text = L"Pipeline Graph";
			this->Pipelinegraphbtn->UseVisualStyleBackColor = false;
			this->Pipelinegraphbtn->Click += gcnew System::EventHandler(this, &Arithmetic1::Pipelinegraphbtn_Click);
			// 
			// pipeBox
			// 
			this->pipeBox->Controls->Add(this->chart2);
			this->pipeBox->Controls->Add(this->chart3);
			this->pipeBox->Location = System::Drawing::Point(15, 93);
			this->pipeBox->Name = L"pipeBox";
			this->pipeBox->Size = System::Drawing::Size(22, 16);
			this->pipeBox->TabIndex = 3;
			this->pipeBox->TabStop = false;
			this->pipeBox->Text = L"pipeline";
			// 
			// chart2
			// 
			chartArea2->Name = L"Levels";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(647, 22);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"Levels";
			series2->Legend = L"Legend1";
			series2->Name = L"Levelscompleted";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(440, 428);
			this->chart2->TabIndex = 12;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->Name = L"Easy";
			chartArea4->Name = L"Medium";
			chartArea5->Name = L"Hard";
			chartArea6->Name = L"Advance";
			chartArea7->Name = L"Expert";
			this->chart3->ChartAreas->Add(chartArea3);
			this->chart3->ChartAreas->Add(chartArea4);
			this->chart3->ChartAreas->Add(chartArea5);
			this->chart3->ChartAreas->Add(chartArea6);
			this->chart3->ChartAreas->Add(chartArea7);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(18, 22);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"Easy";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Easy";
			series4->ChartArea = L"Easy";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Hard";
			series5->ChartArea = L"Easy";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Medium";
			series6->ChartArea = L"Easy";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"Advance";
			series7->ChartArea = L"Easy";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Legend = L"Legend1";
			series7->Name = L"Expert";
			this->chart3->Series->Add(series3);
			this->chart3->Series->Add(series4);
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Size = System::Drawing::Size(589, 428);
			this->chart3->TabIndex = 11;
			this->chart3->Text = L"chart3";
			// 
			// cricketBox
			// 
			this->cricketBox->Controls->Add(this->chart1);
			this->cricketBox->Location = System::Drawing::Point(15, 115);
			this->cricketBox->Name = L"cricketBox";
			this->cricketBox->Size = System::Drawing::Size(22, 24);
			this->cricketBox->TabIndex = 4;
			this->cricketBox->TabStop = false;
			this->cricketBox->Text = L"Cricket ";
			// 
			// vakulBox
			// 
			this->vakulBox->Controls->Add(this->label2);
			this->vakulBox->Controls->Add(this->label1);
			this->vakulBox->Controls->Add(this->NOTP);
			this->vakulBox->Controls->Add(this->Max);
			this->vakulBox->Controls->Add(this->vakul);
			this->vakulBox->Location = System::Drawing::Point(15, 136);
			this->vakulBox->Name = L"vakulBox";
			this->vakulBox->Size = System::Drawing::Size(22, 24);
			this->vakulBox->TabIndex = 1;
			this->vakulBox->TabStop = false;
			this->vakulBox->Text = L"2048";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(767, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"No Of Times Played";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(767, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"MaxScore";
			// 
			// NOTP
			// 
			this->NOTP->AutoSize = true;
			this->NOTP->Location = System::Drawing::Point(969, 119);
			this->NOTP->Name = L"NOTP";
			this->NOTP->Size = System::Drawing::Size(46, 17);
			this->NOTP->TabIndex = 13;
			this->NOTP->Text = L"label1";
			// 
			// Max
			// 
			this->Max->AutoSize = true;
			this->Max->Location = System::Drawing::Point(969, 54);
			this->Max->Name = L"Max";
			this->Max->Size = System::Drawing::Size(70, 17);
			this->Max->TabIndex = 12;
			this->Max->Text = L"MaxScore";
			// 
			// vakul
			// 
			chartArea8->Name = L"Scores";
			this->vakul->ChartAreas->Add(chartArea8);
			legend4->Name = L"Legend1";
			this->vakul->Legends->Add(legend4);
			this->vakul->Location = System::Drawing::Point(57, 41);
			this->vakul->Name = L"vakul";
			series8->ChartArea = L"Scores";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->Name = L"Values";
			this->vakul->Series->Add(series8);
			this->vakul->Size = System::Drawing::Size(675, 357);
			this->vakul->TabIndex = 11;
			this->vakul->Text = L"vakul";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->button1->Location = System::Drawing::Point(455, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 55);
			this->button1->TabIndex = 14;
			this->button1->Text = L"2048";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Arithmetic1::button1_Click_1);
			// 
			// OFBox
			// 
			this->OFBox->Controls->Add(this->OF);
			this->OFBox->Location = System::Drawing::Point(15, 157);
			this->OFBox->Name = L"OFBox";
			this->OFBox->Size = System::Drawing::Size(22, 15);
			this->OFBox->TabIndex = 16;
			this->OFBox->TabStop = false;
			this->OFBox->Text = L"OFBox";
			// 
			// OF
			// 
			chartArea9->Name = L"Scores";
			this->OF->ChartAreas->Add(chartArea9);
			legend5->Name = L"Legend1";
			this->OF->Legends->Add(legend5);
			this->OF->Location = System::Drawing::Point(95, 21);
			this->OF->Name = L"OF";
			series9->ChartArea = L"Scores";
			series9->Legend = L"Legend1";
			series9->Name = L"Values";
			series10->ChartArea = L"Scores";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Candlestick;
			series10->Legend = L"Legend1";
			series10->Name = L"   ";
			series10->YValuesPerPoint = 4;
			this->OF->Series->Add(series9);
			this->OF->Series->Add(series10);
			this->OF->Size = System::Drawing::Size(675, 357);
			this->OF->TabIndex = 8;
			this->OF->Text = L"vakul";
			// 
			// OFbtn
			// 
			this->OFbtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->OFbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->OFbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->OFbtn->Location = System::Drawing::Point(696, 17);
			this->OFbtn->Name = L"OFbtn";
			this->OFbtn->Size = System::Drawing::Size(181, 55);
			this->OFbtn->TabIndex = 17;
			this->OFbtn->Text = L"Operation Filling";
			this->OFbtn->UseVisualStyleBackColor = false;
			this->OFbtn->Click += gcnew System::EventHandler(this, &Arithmetic1::OFbtn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Firebrick;
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1242, 87);
			this->panel1->TabIndex = 18;
			// 
			// Arithmetic1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->OFbtn);
			this->Controls->Add(this->OFBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->vakulBox);
			this->Controls->Add(this->cricketBox);
			this->Controls->Add(this->pipeBox);
			this->Controls->Add(this->Pipelinegraphbtn);
			this->Controls->Add(this->Crgraphbtn);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Arithmetic1";
			this->Size = System::Drawing::Size(1246, 681);
			this->Load += gcnew System::EventHandler(this, &Arithmetic1::Arithmetic1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->pipeBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->EndInit();
			this->cricketBox->ResumeLayout(false);
			this->vakulBox->ResumeLayout(false);
			this->vakulBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->vakul))->EndInit();
			this->OFBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->OF))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		static int id;
		void disable()
		{
			pipeBox->Visible=false;
			cricketBox->Visible=false;
			vakulBox->Visible=false;
			OFBox->Visible=false;
		}
	private: System::Void Arithmetic1_Load(System::Object^  sender, System::EventArgs^  e)
			 
			 {
                 disable();
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				 // searching for ID from username
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
                     String ^Sql = "Select [StudentID] from Students WHERE  UserName = '" + user + "' ";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 id = (int)command->ExecuteScalar();
					 con->Close();
			 }




			 int h(String ^ d)
			 {
				 String ^ dd = "";
				 String ^ mm= "";
				 String ^ yyyy="";


				    time_t now = time(0);
					tm *ltm = localtime(&now);
					int year =  1900 + ltm->tm_year;
					int month =  1 + ltm->tm_mon;
					int date = ltm->tm_mday ;

				    int prevmonth=month-1;
					int prevyear=year;
					if(prevmonth==0) prevyear--;
					if(prevmonth==0) prevmonth=12;
					int prevdate =date;

				 int j=0;
		
				 while(d[j]!='/') {dd+=d[j];j++;}
				 j++;
				 while(d[j]!='/') {mm+=d[j];j++;}
				 j++;
				
				 while(j<d->Length ) {yyyy+=d[j];j++;}
				
				 int  num1 = Convert::ToInt32(dd);
				 int num2 = Convert::ToInt32(mm);
				 int num3 = Convert::ToInt32(yyyy);
                 if(num3==year&&num2==month&&num1<=date) return num1;
				 if(num3==prevyear&&num2==prevmonth&&date<num1) return num1;
				 return 32;
			 }



			 private: System::Void msgx(String ^ x)
					  {
						 MessageBox::Show(x);
					  } 
            int noofdays(int m,int year)
			{
				if(m==1) return 31;
				if(m==2) 
				{
					if (year % 4)  return 28;
					else if (year % 100)  return 29;
					else if (year % 400) return 28;
					else return 29;
				}
				if(m==3) return 31;
				if(m==4) return 30;
				
				if(m==5) return 31;
				if(m==6) return 30;
				
				if(m==7) return 31;
				
				if(m==8) return 31;
				if(m==9) return 30;
				
				if(m==10) return 31;
				if(m==11) return 30;
				
				if(m==12) return 31;
				return 32;
			}


			 private: System::Void Showgraph(int day[])
			  {
				   this->chart1->ChartAreas["Default"]->AxisX->Interval = 1;
				   this->chart1->ChartAreas["Default"]->AxisY->Interval = 1;
				   this->chart1->ChartAreas["Default"]->AxisY->Minimum = 0;
				   
				   this->chart1->ChartAreas["Default"]->AxisX->MajorGrid->LineColor = Color();
				  // this->chart1->ChartAreas["Default"]->AxisY->MajorGrid->LineColor = Color();
				   this->chart1->Series["perfomance"]->Points->Clear();

				     time_t now = time(0);
					 tm *ltm = localtime(&now);
					int year =  1900 + ltm->tm_year;
					int month =  1 + ltm->tm_mon;
					int date = ltm->tm_mday ;

				    int prevmonth=month-1;
					int prevyear=year;
					if(prevmonth==0) prevyear--;
					if(prevmonth==0) prevmonth=12;
					int prevdate =date;
					for(int i=date;i<=noofdays(prevmonth,year);i++)
					{
						String ^  dd = Convert::ToString(i);
						String ^ mm =Convert::ToString(prevmonth);
						String ^ yyyy=Convert::ToString(prevyear);
						 this->chart1->Series["perfomance"]->Points->AddXY(dd+"-"+mm,day[i]);
					}
					for(int i=1;i<=date;i++)
					{
						String ^  dd = Convert::ToString(i);
						String ^ mm =Convert::ToString(month);
						String ^ yyyy=Convert::ToString(year);
						this->chart1->Series["perfomance"]->Points->AddXY(dd+"-"+mm,day[i]);
					}
					
			  }



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
       				 disable();
				     cricketBox->Visible=true;
                     cricketBox->Height=517;
                     cricketBox->Width=1219;
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 OleDb::OleDbDataReader ^ reader;
					 OleDb::OleDbCommand ^ command;
					 String ^Sql ;
					 int day[33];
				 try{
				     
				
                     for(int i=0;i<=32;i++) {day[i]=0;}
					// searching for dates
					 con->Open();
					 Sql = "Select [DatePlayed] from CricketGraph WHERE  [StudentID] =  " + id +" ";
					 command = gcnew OleDb::OleDbCommand(Sql, con);
					 reader = command->ExecuteReader();
					 while (reader->Read() == true)
					  {
						   String ^ datep= reader->GetString(0);
						   day[h(datep)]++;
					  }
					  reader->Close();
					  con->Close();
				  }
				 catch (Exception ^ ex)
			 {
					 
				 con->Close();
				 MessageBox::Show(ex->Message);
			 }
			 Showgraph(day);
			 }


	//private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e)
	//		 {
	//			 
	//		 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

		 private: System::Void draw(int values[],int no,int k)
	{
				 String ^ str;
				 if (k == 0) str = "Easy";
				 if (k == 1) str = "Medium";
				 if (k == 2) str = "Hard";
				 if (k == 3) str = "Advance";
				 if (k == 4) str = "Expert";
				 //MessageBox::Show(str);
				 this->chart3->ChartAreas[str]->AxisX->Title = str;
				 this->chart3->ChartAreas[str]->AxisY->Title = "";
				 this->chart3->ChartAreas[str]->AxisX->MajorGrid->LineColor = Color();
				 this->chart3->ChartAreas[str]->AxisY->Interval = 1;
				 this->chart3->Series[str]->ChartArea = str;
				 this->chart3->Series[str]->Points->Clear();
				 for (int i = 0; i < no; i++)
				 {
                      this->chart3->Series[str]->Points->AddXY(i+1, values[i]);
				 }
				 if (no == 0)  this->chart3->Series[str]->Points->AddXY(0, 0);

	}

private: System::Void Pipelinegraphbtn_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
        			 disable();
              pipeBox->Visible=true;
             pipeBox->Width=1213;
			 pipeBox->Height=517;
             OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
			 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
			 int valuesEasy[30];
			 int valuesMedium[30];
			 int valuesHard[30];
			 int valuesAdvance[30];
			 int valuesExpert[30];
			 String ^ scoreEasy;
			 String ^ scoreMedium;
			 String ^ scoreHard;
			 String ^ scoreAdvance;
			 String ^ scoreExpert;
			 String ^SqlEasy = "Select [Score_Easy] from Pipeline_Scoring WHERE  StudentID = " +  id + " ";
			 String ^SqlMedium = "Select [Score_Medium] from Pipeline_Scoring WHERE  StudentID = " + id + " ";
			 String ^SqlHard = "Select [Score_Hard] from Pipeline_Scoring WHERE  StudentID = " + id + " ";
             String ^SqlAdvance = "Select [Score_Adavnced] from Pipeline_Scoring WHERE  StudentID = " + id + " ";
			 String ^SqlExpert = "Select [Score_Expert] from Pipeline_Scoring WHERE  StudentID = " + id + " ";
			 
			 try{
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(SqlEasy, con);
				 con->Open();
				 scoreEasy = (String ^)command->ExecuteScalar();
				 con->Close();
				 
				  command = gcnew OleDb::OleDbCommand(SqlMedium, con);
				 con->Open();
				 scoreMedium = (String ^)command->ExecuteScalar();
				 con->Close();

				  command = gcnew OleDb::OleDbCommand(SqlHard, con);
				 con->Open();
				 scoreHard = (String ^)command->ExecuteScalar();
				 con->Close();

				 command = gcnew OleDb::OleDbCommand(SqlAdvance, con);
				 con->Open();
				 scoreAdvance = (String ^)command->ExecuteScalar();
				 con->Close();


				 command = gcnew OleDb::OleDbCommand(SqlExpert, con);
				 con->Open();
				 scoreExpert = (String ^)command->ExecuteScalar();
				 con->Close();


			     }
			 catch (Exception ^ ex)
			 {
				 con->Close();
				 MessageBox::Show(ex->Message);
			 }
			// score = "," + score+",";
			 int i = 0;
			 int no = 0;
			 while (i < scoreMedium->Length -1 )
			 {
				 i++;
				 String ^ k = "";
				 while (scoreMedium[i]!=',')
				 {
					 k += scoreMedium[i];
					 i++;
				 }
				 valuesMedium[no] = Convert::ToInt32(k);
				 no++;
			 }

			 draw(valuesMedium, no,1);
			 //
			  i = 0;
			 no = 0;
			 while (i < scoreHard->Length - 1)
			 {
				 i++;
				 String ^ k = "";
				 while (scoreHard[i] != ',')
				 {
					 k += scoreHard[i];
					 i++;
				 }
				 valuesHard[no] = Convert::ToInt32(k);
				 no++;
			 }

			 draw(valuesHard, no,2);
			 //
			  i = 0;
			  no = 0;
			 while (i < scoreAdvance->Length - 1)
			 {
				 i++;
				 String ^ k = "";
				 while (scoreAdvance[i] != ',')
				 {
					 k += scoreAdvance[i];
					 i++;
				 }
				 valuesAdvance[no] = Convert::ToInt32(k);
				 no++;
			 }

			 draw(valuesAdvance, no,3);
			 //
			  i = 0;
			  no = 0;
			 while (i < scoreEasy->Length - 1)
			 {
				 i++;
				 String ^ k = "";
				 while (scoreEasy[i] != ',')
				 {
					 k += scoreEasy[i];
					 i++;
				 }
				 valuesEasy[no] = Convert::ToInt32(k);
				 no++;
			 }


			 draw(valuesEasy,no,0);

			 //
			 
			  i = 0;
			  no = 0;
			 while (i < scoreExpert->Length - 1)
			 {
				 i++;
				 String ^ k = "";
				 while (scoreExpert[i] != ',')
				 {
					 k += scoreExpert[i];
					 i++;
				 }
				 valuesExpert[no] = Convert::ToInt32(k);
				 no++;
			 }


			 draw(valuesExpert,no,4);





			 int values[11] = { 0 };
			 int current =0;

			 this->chart2->ChartAreas["Levels"]->AxisX->Title = "";
			 this->chart2->ChartAreas["Levels"]->AxisY->Title = "No of Levels Completed";
			 this->chart2->ChartAreas["Levels"]->AxisY->Interval = 1;
			 this->chart2->ChartAreas["Levels"]->AxisX->MajorGrid->LineColor = Color();
			 this->chart2->Series["Levelscompleted"]->Points->Clear();
			 try{

				 String ^ Sql = "Select [Levels_Completed_Easy] from Pipeline_Scoring Where  StudentID = " + id + " ";
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				 con->Open();
				 current = (int)command->ExecuteScalar();
				 con->Close();
				 this->chart2->Series["Levelscompleted"]->Points->AddXY("Easy", current);


				 Sql = "Select [Levels_Completed_Medium] from Pipeline_Scoring Where  StudentID = " + id + " ";
				 command = gcnew OleDb::OleDbCommand(Sql, con);
				 con->Open();
				 current = (int)command->ExecuteScalar();
				 con->Close();
				 this->chart2->Series["Levelscompleted"]->Points->AddXY("Medium", current);


				 Sql = "Select [Levels_Completed_Hard] from Pipeline_Scoring Where  StudentID = " + id + " ";
				 command = gcnew OleDb::OleDbCommand(Sql, con);
				 con->Open();
				 current = (int)command->ExecuteScalar();
				 con->Close();
				 this->chart2->Series["Levelscompleted"]->Points->AddXY("Hard", current);


				 Sql = "Select [Levels_Completed_Advanced] from Pipeline_Scoring Where  StudentID = " + id + " ";
				 command = gcnew OleDb::OleDbCommand(Sql, con);
				 con->Open();
				 current = (int)command->ExecuteScalar();
				 con->Close();
				 this->chart2->Series["Levelscompleted"]->Points->AddXY("Advance", current);


				 Sql = "Select [Levels_Completed_Expert] from Pipeline_Scoring Where  StudentID = " + id + " ";
				 command = gcnew OleDb::OleDbCommand(Sql, con);
				 con->Open();
				 current = (int)command->ExecuteScalar();
				 con->Close();
				 this->chart2->Series["Levelscompleted"]->Points->AddXY("Expert", current);
			 }
			 catch (Exception ^ ex)
			 {
				 
				 con->Close();
				 MessageBox::Show(ex->Message);
			 }

		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 disable();
			 vakulBox->Visible=true;
			vakulBox->Width=1219;
            vakulBox->Height=517;
             OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
			 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
			 int values[1000] = { 0 };
			 String ^ score;
			 String ^Sql = "Select [Scores] from 2048_Game WHERE  StudentID = " +  id + " ";
			 

				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
			try{
				 con->Open();
				 score = (String ^)command->ExecuteScalar();
				 con->Close();

			     }
			 catch (Exception ^ ex)
			 {
				 con->Close();
				 MessageBox::Show(ex->Message);
			 }
			

			 int i = 0;
			 int no = 0;
			 while (i < score->Length -1 )
			 {
				 i++;
				 String ^ k = "";
				 while (score[i]!=',')
				 {
					 k += score[i];
					 i++;
				 }
				 values[no] = Convert::ToInt32(k);
				 no++;
			 }
			
			 this->vakul->ChartAreas["Scores"]->AxisX->Title = "Days ";
			 this->vakul->ChartAreas["Scores"]->AxisY->Title = "Scores ";
			 this->vakul->ChartAreas["Scores"]->AxisX->Interval = 1;
			 this->vakul->ChartAreas["Scores"]->AxisX->MajorGrid->LineColor = Color();
			 this->vakul->Series["Values"]->Points->Clear();
			 for (int i = 0; i < no; i++)
			 {
				 this->vakul->Series["Values"]->Points->AddXY(i+1,values[i]);
				 
			 }

			
			 Sql = "Select [Max_Score] from 2048_Game WHERE  StudentID = " + id + " ";
			 command = gcnew OleDb::OleDbCommand(Sql, con);
			 con->Open();
			  Max->Text =Convert::ToString( (int )command->ExecuteScalar());
			 con->Close();
			 

			 Sql = "Select [Number_of_Times_Played] from 2048_Game WHERE  StudentID = " + id + " ";
			 command = gcnew OleDb::OleDbCommand(Sql, con);
			 con->Open();
			 NOTP->Text = Convert::ToString((int)command->ExecuteScalar());
			 con->Close();
			 
		 }
private: System::Void OFbtn_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			disable();
			OFBox->Visible=true;
			OFBox->Width=1219;
            OFBox->Height=517;
			  int ofvalues[30] = { 0 };
			  int ze=0;
			 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
			 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

			 int x = 0;
				 int ma = 0;
			 String ^Sql = "Select [Score] from operatorFilling WHERE  Student_ID = " +  id + " ";
			 try{
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				 con->Open();
				 x = (int)command->ExecuteScalar();
				 con->Close();

				 Sql = "Select [Score] from operatorFilling ";
				 command = gcnew OleDb::OleDbCommand(Sql, con);
				
				 con->Open();
				 OleDb::OleDbDataReader ^ reader = command->ExecuteReader();
				 this->OF->ChartAreas["Scores"]->AxisX->Title = "Score Ranges";
				 this->OF->ChartAreas["Scores"]->AxisY->Title = "No Of Students";
				 this->OF->ChartAreas["Scores"]->AxisX->Interval = 1;
				 this->OF->ChartAreas["Scores"]->AxisY->Interval = 1;
				 this->OF->ChartAreas["Scores"]->AxisX->MajorGrid->LineColor = Color();
				 while (reader->Read() == true)
				 {
					 int a = reader->GetInt32(0);
					 if(a==0) {ze++;ma++;continue;} 
					 ofvalues[a / 100]++;
					 ma++;
				 }
				 reader->Close();
				 con->Close();
			 }
			 catch (Exception ^ ex)
			 {

				 con->Close();
				 MessageBox::Show(ex->Message);
			 }

				 this->OF->Series["Values"]->Points->Clear();
				 this->OF->Series["   "]->Points->Clear();
				 this->OF->Series["Values"]->Points->AddXY("0",ze);
				 if(x==0) {this->OF->Series["   "]->Points->AddXY(" ",ma);}
				  else {this->OF->Series["   "]->Points->AddXY(" ",0);}

				 for (int i = 0; i < 10; i++)
				 {
					 if(i==0) ze=1;
					 String ^ a = Convert::ToString(i*100+ze);
					 String ^ b = Convert::ToString((i+1)*100);
					 this->OF->Series["Values"]->Points->AddXY(a + "-" + b, ofvalues[i]);
					 if ( (x/100)==i&&x!=0) {this->OF->Series["   "]->Points->AddXY(" ", ma);}
					 else   {this->OF->Series["   "]->Points->AddXY(" ", 0);}
				 }

		 }
};

}
