#pragma once
#include"MyForm5.h"
#include"MyForm6.h"
#include"MyForm71.h"
#include"MyForm8.h"
#include"MyForm9.h"
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
			this->SuspendLayout();
			// 
			// acourse
			// 
			this->acourse->AutoSize = true;
			this->acourse->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acourse->Location = System::Drawing::Point(87, 165);
			this->acourse->Name = L"acourse";
			this->acourse->Size = System::Drawing::Size(213, 48);
			this->acourse->TabIndex = 0;
			this->acourse->Text = L"Add Course";
			// 
			// removecoruse
			// 
			this->removecoruse->AutoSize = true;
			this->removecoruse->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removecoruse->Location = System::Drawing::Point(87, 238);
			this->removecoruse->Name = L"removecoruse";
			this->removecoruse->Size = System::Drawing::Size(282, 48);
			this->removecoruse->TabIndex = 1;
			this->removecoruse->Text = L"Remove Course";
			// 
			// ateacher
			// 
			this->ateacher->AutoSize = true;
			this->ateacher->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ateacher->Location = System::Drawing::Point(87, 318);
			this->ateacher->Name = L"ateacher";
			this->ateacher->Size = System::Drawing::Size(229, 48);
			this->ateacher->TabIndex = 2;
			this->ateacher->Text = L"Add Teacher";
			// 
			// removeteacher
			// 
			this->removeteacher->AutoSize = true;
			this->removeteacher->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeteacher->Location = System::Drawing::Point(87, 403);
			this->removeteacher->Name = L"removeteacher";
			this->removeteacher->Size = System::Drawing::Size(298, 48);
			this->removeteacher->TabIndex = 3;
			this->removeteacher->Text = L"Remove Teacher";
			// 
			// astudent
			// 
			this->astudent->AutoSize = true;
			this->astudent->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->astudent->Location = System::Drawing::Point(87, 476);
			this->astudent->Name = L"astudent";
			this->astudent->Size = System::Drawing::Size(228, 48);
			this->astudent->TabIndex = 4;
			this->astudent->Text = L"Add Student";
			// 
			// removestudent
			// 
			this->removestudent->AutoSize = true;
			this->removestudent->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removestudent->Location = System::Drawing::Point(87, 559);
			this->removestudent->Name = L"removestudent";
			this->removestudent->Size = System::Drawing::Size(297, 48);
			this->removestudent->TabIndex = 5;
			this->removestudent->Text = L"Remove Student";
			// 
			// TWT
			// 
			this->TWT->AutoSize = true;
			this->TWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TWT->Location = System::Drawing::Point(87, 649);
			this->TWT->Name = L"TWT";
			this->TWT->Size = System::Drawing::Size(446, 48);
			this->TWT->TabIndex = 6;
			this->TWT->Text = L"Teacher Wise Time Table";
			// 
			// SWT
			// 
			this->SWT->AutoSize = true;
			this->SWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SWT->Location = System::Drawing::Point(87, 744);
			this->SWT->Name = L"SWT";
			this->SWT->Size = System::Drawing::Size(438, 48);
			this->SWT->TabIndex = 7;
			this->SWT->Text = L"Section Wise Time Table";
			// 
			// RWT
			// 
			this->RWT->AutoSize = true;
			this->RWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RWT->Location = System::Drawing::Point(87, 835);
			this->RWT->Name = L"RWT";
			this->RWT->Size = System::Drawing::Size(408, 48);
			this->RWT->TabIndex = 8;
			this->RWT->Text = L"Room Wise Time Table";
			// 
			// DWT
			// 
			this->DWT->AutoSize = true;
			this->DWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DWT->Location = System::Drawing::Point(87, 920);
			this->DWT->Name = L"DWT";
			this->DWT->Size = System::Drawing::Size(377, 48);
			this->DWT->TabIndex = 9;
			this->DWT->Text = L"Day Wise Time Table";
			// 
			// choice
			// 
			this->choice->AutoSize = true;
			this->choice->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14, System::Drawing::FontStyle::Bold));
			this->choice->Location = System::Drawing::Point(200, 1067);
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Add Course", L"Remove Course", L"Add Teacher",
					L"Remove Teacher", L"Add Student", L"Remove Student", L"Teacher Wise Time Table", L"Section Wise Time Table", L"Room Wise Time Table",
					L"Day Wise Time Table"
			});
			this->comboBox1->Location = System::Drawing::Point(608, 1069);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(689, 56);
			this->comboBox1->TabIndex = 11;
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Search->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->Location = System::Drawing::Point(1371, 1067);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(207, 65);
			this->Search->TabIndex = 12;
			this->Search->Text = L"SEARCH";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &MyForm4::Search_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1728, 1456);
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
		if (lol == "Add Course") {
			this->Hide();
			MyForm5^ addcourse = gcnew MyForm5();
			addcourse->ShowDialog();
		}
		if (lol == "Remove Course") {
			this->Hide();
			MyForm6^sherag = gcnew MyForm6();
			sherag->ShowDialog();

		}
		if (lol == "Add Teacher") {
			this->Hide();
			MyForm7^ addt = gcnew MyForm7();
			addt->ShowDialog();
		}
		if (lol == "Remove Teacher") {
			this->Hide();
			MyForm8^ geoba = gcnew MyForm8();
			geoba->ShowDialog();
			
		}
		if (lol == "Add Student") {
			this->Hide();
			MyForm9^ paf = gcnew MyForm9();
			paf->ShowDialog();
		}
	    
	}
};
}
