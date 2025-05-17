#pragma once
#include"MyForm5.h"
#include"MyForm6.h"
#include"MyForm71.h"
#include"MyForm8.h"
#include"MyForm9.h"
#include"MyForm10.h"
#include"MyForm11.h"
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			this->ClientSize = System::Drawing::Size(850,800);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->WindowState = System::Windows::Forms::FormWindowState::Normal;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ acourse;
	private: System::Windows::Forms::Label^ removecoruse;
	private: System::Windows::Forms::Label^ ateacher;
	private: System::Windows::Forms::Label^ removeteacher;
	private: System::Windows::Forms::Label^ astudent;
	private: System::Windows::Forms::Label^ removestudent;
	private: System::Windows::Forms::Label^ TWT;
	private: System::Windows::Forms::Label^ SWT;
	protected:







	private: System::Windows::Forms::Label^ RWT;
	private: System::Windows::Forms::Label^ DWT;
	private: System::Windows::Forms::Label^ choice;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Label^ ROOM;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



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
			this->acourse = (gcnew System::Windows::Forms::Label());
			this->removecoruse = (gcnew System::Windows::Forms::Label());
			this->ateacher = (gcnew System::Windows::Forms::Label());
			this->removeteacher = (gcnew System::Windows::Forms::Label());
			this->astudent = (gcnew System::Windows::Forms::Label());
			this->removestudent = (gcnew System::Windows::Forms::Label());
			this->TWT = (gcnew System::Windows::Forms::Label());
			this->SWT = (gcnew System::Windows::Forms::Label());
			this->RWT = (gcnew System::Windows::Forms::Label());
			this->DWT = (gcnew System::Windows::Forms::Label());
			this->choice = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->ROOM = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// acourse
			// 
			this->acourse->AutoSize = true;
			this->acourse->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acourse->Location = System::Drawing::Point(87, 165);
			this->acourse->Name = L"acourse";
			this->acourse->Size = System::Drawing::Size(281, 48);
			this->acourse->TabIndex = 0;
			this->acourse->Text = L"1. ADD COURSE";
			// 
			// removecoruse
			// 
			this->removecoruse->AutoSize = true;
			this->removecoruse->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removecoruse->Location = System::Drawing::Point(87, 239);
			this->removecoruse->Name = L"removecoruse";
			this->removecoruse->Size = System::Drawing::Size(363, 48);
			this->removecoruse->TabIndex = 1;
			this->removecoruse->Text = L"2. REMOVE COURSE";
			// 
			// ateacher
			// 
			this->ateacher->AutoSize = true;
			this->ateacher->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ateacher->Location = System::Drawing::Point(87, 318);
			this->ateacher->Name = L"ateacher";
			this->ateacher->Size = System::Drawing::Size(309, 48);
			this->ateacher->TabIndex = 2;
			this->ateacher->Text = L"3. ADD TEACHER";
			// 
			// removeteacher
			// 
			this->removeteacher->AutoSize = true;
			this->removeteacher->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeteacher->Location = System::Drawing::Point(87, 395);
			this->removeteacher->Name = L"removeteacher";
			this->removeteacher->Size = System::Drawing::Size(388, 48);
			this->removeteacher->TabIndex = 3;
			this->removeteacher->Text = L"4. REMOVE TEACHER";
			// 
			// astudent
			// 
			this->astudent->AutoSize = true;
			this->astudent->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->astudent->Location = System::Drawing::Point(87, 475);
			this->astudent->Name = L"astudent";
			this->astudent->Size = System::Drawing::Size(310, 48);
			this->astudent->TabIndex = 4;
			this->astudent->Text = L"5. ADD STUDENT";
			// 
			// removestudent
			// 
			this->removestudent->AutoSize = true;
			this->removestudent->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removestudent->Location = System::Drawing::Point(86, 551);
			this->removestudent->Name = L"removestudent";
			this->removestudent->Size = System::Drawing::Size(389, 48);
			this->removestudent->TabIndex = 5;
			this->removestudent->Text = L"6. REMOVE STUDENT";
			// 
			// TWT
			// 
			this->TWT->AutoSize = true;
			this->TWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TWT->Location = System::Drawing::Point(86, 626);
			this->TWT->Name = L"TWT";
			this->TWT->Size = System::Drawing::Size(549, 48);
			this->TWT->TabIndex = 6;
			this->TWT->Text = L"7. TEACHER WISE TIME TABLE";
			// 
			// SWT
			// 
			this->SWT->AutoSize = true;
			this->SWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SWT->Location = System::Drawing::Point(87, 714);
			this->SWT->Name = L"SWT";
			this->SWT->Size = System::Drawing::Size(541, 48);
			this->SWT->TabIndex = 7;
			this->SWT->Text = L"8. SECTION WISE TIME TABLE";
			// 
			// RWT
			// 
			this->RWT->AutoSize = true;
			this->RWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RWT->Location = System::Drawing::Point(86, 793);
			this->RWT->Name = L"RWT";
			this->RWT->Size = System::Drawing::Size(493, 48);
			this->RWT->TabIndex = 8;
			this->RWT->Text = L"9. ROOM WISE TIME TABLE";
			// 
			// DWT
			// 
			this->DWT->AutoSize = true;
			this->DWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DWT->Location = System::Drawing::Point(87, 889);
			this->DWT->Name = L"DWT";
			this->DWT->Size = System::Drawing::Size(471, 48);
			this->DWT->TabIndex = 9;
			this->DWT->Text = L"10. DAY WISE TIME TABLE";
			// 
			// choice
			// 
			this->choice->AutoSize = true;
			this->choice->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14, System::Drawing::FontStyle::Bold));
			this->choice->Location = System::Drawing::Point(182, 1409);
			this->choice->Name = L"choice";
			this->choice->Size = System::Drawing::Size(398, 57);
			this->choice->TabIndex = 10;
			this->choice->Text = L"Select Your Choice";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"ADD COURSE", L"REMOVE COURSE", L"ADD TEACHER",
					L"REMOVE TEACHER", L"ADD STUDENT ", L"REMOVE STUDENT", L"TEACHER WISE TIME TABLE", L"SECTION WISE TIME TABLE", L"ROOM WISE TIME TABLE",
					L"DAY WISE TIME TABLE", L"ADD ROOM", L"ADD SECTION", L"VIEW ALL COURSES", L"VIEW ALL TEACHERS", L"VIEW ALL STUDENTS"
			});
			this->comboBox1->Location = System::Drawing::Point(586, 1409);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(854, 56);
			this->comboBox1->TabIndex = 11;
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Search->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->Location = System::Drawing::Point(1463, 1409);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(207, 65);
			this->Search->TabIndex = 12;
			this->Search->Text = L"SEARCH";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &MyForm4::Search_Click);
			// 
			// ROOM
			// 
			this->ROOM->AutoSize = true;
			this->ROOM->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ROOM->Location = System::Drawing::Point(87, 972);
			this->ROOM->Name = L"ROOM";
			this->ROOM->Size = System::Drawing::Size(263, 48);
			this->ROOM->TabIndex = 13;
			this->ROOM->Text = L"11. ADD ROOM";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 1048);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 48);
			this->label1->TabIndex = 14;
			this->label1->Text = L"12. ADD SECTION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(87, 1128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(418, 48);
			this->label2->TabIndex = 15;
			this->label2->Text = L"13. VIEW ALL COURSES";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(86, 1209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(443, 48);
			this->label3->TabIndex = 16;
			this->label3->Text = L"14. VIEW ALL TEACHERS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(87, 1294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(443, 48);
			this->label4->TabIndex = 17;
			this->label4->Text = L"15. VIEW ALL STUDENTS";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1728, 1500);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ROOM);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->choice);
			this->Controls->Add(this->DWT);
			this->Controls->Add(this->RWT);
			this->Controls->Add(this->SWT);
			this->Controls->Add(this->TWT);
			this->Controls->Add(this->removestudent);
			this->Controls->Add(this->astudent);
			this->Controls->Add(this->removeteacher);
			this->Controls->Add(this->ateacher);
			this->Controls->Add(this->removecoruse);
			this->Controls->Add(this->acourse);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADMIN CHOICES";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ lol = comboBox1->SelectedItem ? comboBox1->SelectedItem->ToString() : nullptr;
		if (String::IsNullOrEmpty(lol)) {
			MessageBox::Show("Please Select Valid Value", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (lol == "ADD COURSE") {
			this->Hide();
			MyForm5^ addcourse = gcnew MyForm5();
			addcourse->ShowDialog();
		}
		if (lol == "REMOVE COURSE") {
			this->Hide();
			MyForm6^sherag = gcnew MyForm6();
			sherag->ShowDialog();

		}
		if (lol == "ADD TEACHER") {
			this->Hide();
			MyForm7^ addt = gcnew MyForm7();
			addt->ShowDialog();
		}
		if (lol == "REMOVE TEACHER") {
			this->Hide();
			MyForm8^ geoba = gcnew MyForm8();
			geoba->ShowDialog();
			
			
		}
		if (lol == "ADD STUDENT") {
			this->Hide();
			MyForm9^ paf = gcnew MyForm9();
			paf->ShowDialog();

		}
		if (lol == "REMOVE STUDENT") {
			this->Hide();
			MyForm10^ suto = gcnew MyForm10();
			suto->ShowDialog();
			//this->Show();
		}
		if (lol == "TEACHER WISE TIME TABLE") {
			this->Hide();
			MyForm11^ dhuwan = gcnew MyForm11();
			dhuwan->ShowDialog();
		}
	    
	}
};
}
