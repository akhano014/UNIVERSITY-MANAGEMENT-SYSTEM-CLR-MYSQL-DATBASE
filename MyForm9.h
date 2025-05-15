#pragma once
using namespace MySql::Data::MySqlClient;
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ StudentEnroll;
	private: System::Windows::Forms::TextBox^ EnrollTxt;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ IdTxt;
	private: System::Windows::Forms::Label^ StudentEmail;
	private: System::Windows::Forms::TextBox^ SEmailTxt;
	private: System::Windows::Forms::Label^ SSemester;
	private: System::Windows::Forms::ComboBox^ SemesterCombo;
	private: System::Windows::Forms::Label^ SDEpartment;
	private: System::Windows::Forms::TextBox^ DepartmentTxt;
	private: System::Windows::Forms::Button^ SubmitButton;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StudentEnroll = (gcnew System::Windows::Forms::Label());
			this->EnrollTxt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IdTxt = (gcnew System::Windows::Forms::TextBox());
			this->StudentEmail = (gcnew System::Windows::Forms::Label());
			this->SEmailTxt = (gcnew System::Windows::Forms::TextBox());
			this->SSemester = (gcnew System::Windows::Forms::Label());
			this->SemesterCombo = (gcnew System::Windows::Forms::ComboBox());
			this->SDEpartment = (gcnew System::Windows::Forms::Label());
			this->DepartmentTxt = (gcnew System::Windows::Forms::TextBox());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(336, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADD STUDENT";
			// 
			// StudentEnroll
			// 
			this->StudentEnroll->AutoSize = true;
			this->StudentEnroll->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentEnroll->Location = System::Drawing::Point(92, 332);
			this->StudentEnroll->Name = L"StudentEnroll";
			this->StudentEnroll->Size = System::Drawing::Size(356, 48);
			this->StudentEnroll->TabIndex = 1;
			this->StudentEnroll->Text = L"Student Enrollment";
			// 
			// EnrollTxt
			// 
			this->EnrollTxt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EnrollTxt->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnrollTxt->Location = System::Drawing::Point(484, 333);
			this->EnrollTxt->Name = L"EnrollTxt";
			this->EnrollTxt->Size = System::Drawing::Size(558, 44);
			this->EnrollTxt->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(92, 423);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 48);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Student ID";
			// 
			// IdTxt
			// 
			this->IdTxt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->IdTxt->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IdTxt->Location = System::Drawing::Point(484, 427);
			this->IdTxt->Name = L"IdTxt";
			this->IdTxt->Size = System::Drawing::Size(558, 44);
			this->IdTxt->TabIndex = 4;
			// 
			// StudentEmail
			// 
			this->StudentEmail->AutoSize = true;
			this->StudentEmail->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentEmail->Location = System::Drawing::Point(92, 519);
			this->StudentEmail->Name = L"StudentEmail";
			this->StudentEmail->Size = System::Drawing::Size(263, 48);
			this->StudentEmail->TabIndex = 5;
			this->StudentEmail->Text = L"Student Email";
			// 
			// SEmailTxt
			// 
			this->SEmailTxt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SEmailTxt->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SEmailTxt->Location = System::Drawing::Point(484, 523);
			this->SEmailTxt->Name = L"SEmailTxt";
			this->SEmailTxt->Size = System::Drawing::Size(558, 44);
			this->SEmailTxt->TabIndex = 6;
			// 
			// SSemester
			// 
			this->SSemester->AutoSize = true;
			this->SSemester->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SSemester->Location = System::Drawing::Point(92, 624);
			this->SSemester->Name = L"SSemester";
			this->SSemester->Size = System::Drawing::Size(322, 48);
			this->SSemester->TabIndex = 7;
			this->SSemester->Text = L"Student Semester";
			// 
			// SemesterCombo
			// 
			this->SemesterCombo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SemesterCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SemesterCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SemesterCombo->FormattingEnabled = true;
			this->SemesterCombo->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8" });
			this->SemesterCombo->Location = System::Drawing::Point(484, 621);
			this->SemesterCombo->Name = L"SemesterCombo";
			this->SemesterCombo->Size = System::Drawing::Size(558, 51);
			this->SemesterCombo->TabIndex = 8;
			// 
			// SDEpartment
			// 
			this->SDEpartment->AutoSize = true;
			this->SDEpartment->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SDEpartment->Location = System::Drawing::Point(92, 722);
			this->SDEpartment->Name = L"SDEpartment";
			this->SDEpartment->Size = System::Drawing::Size(366, 48);
			this->SDEpartment->TabIndex = 9;
			this->SDEpartment->Text = L"Student Department";
			// 
			// DepartmentTxt
			// 
			this->DepartmentTxt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->DepartmentTxt->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DepartmentTxt->Location = System::Drawing::Point(484, 722);
			this->DepartmentTxt->Name = L"DepartmentTxt";
			this->DepartmentTxt->Size = System::Drawing::Size(558, 44);
			this->DepartmentTxt->TabIndex = 10;
			// 
			// SubmitButton
			// 
			this->SubmitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubmitButton->Location = System::Drawing::Point(1078, 845);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(171, 72);
			this->SubmitButton->TabIndex = 11;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = false;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &MyForm9::SubmitButton_Click);
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1278, 976);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->DepartmentTxt);
			this->Controls->Add(this->SDEpartment);
			this->Controls->Add(this->SemesterCombo);
			this->Controls->Add(this->SSemester);
			this->Controls->Add(this->SEmailTxt);
			this->Controls->Add(this->StudentEmail);
			this->Controls->Add(this->IdTxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->EnrollTxt);
			this->Controls->Add(this->StudentEnroll);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADD STUDENT";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(EnrollTxt->Text)) {
		MessageBox::Show("Please Enter Student Enrollment ", "Student Enrollment!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(IdTxt->Text)) {
		MessageBox::Show("Please Enter Student ID ", "Student ID!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(SEmailTxt->Text)) {
		MessageBox::Show("Please Enter Student Email ", "Student Email!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ sem = SemesterCombo->SelectedItem ? SemesterCombo->SelectedItem->ToString() : nullptr;
	if (String::IsNullOrEmpty(sem)) {
		MessageBox::Show("Please Select Student Semester ", "Student Semester!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(DepartmentTxt->Text)) {
		MessageBox::Show("Please Enter Student Department ", "Student Department!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^studentconnection= "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
	MySqlConnection^ student = gcnew MySqlConnection(studentconnection);
	try {
		student->Open();
		String^ studentData = "INSERT INTO addstudent(StudentEnroll,StudentID,StudentEmail,StudentSemester,StudentDepartment) VALUES(@StudentEnrollment,@StudentID,@StudentEmail,@StudentSemester,@StudentDEpartment)";
		MySqlCommand^ fail = gcnew MySqlCommand(studentData, student);
		fail->Parameters->AddWithValue("@StudentEnrollment", EnrollTxt->Text);
		fail->Parameters->AddWithValue("@StudentID", IdTxt->Text);
		fail->Parameters->AddWithValue("@StudentEmail", SEmailTxt->Text);
		fail->Parameters->AddWithValue("@StudentSemester", sem);
		fail->Parameters->AddWithValue("@StudentDepartment", DepartmentTxt->Text);
		int studentfill = fail->ExecuteNonQuery();
		if (studentfill > 0) {
			MessageBox::Show("Congratulations You have Successfully Added Student", "Congratulations Message", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Student Addition Process Failed", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (MySqlException^ dodo) {
		MessageBox::Show("Error! " + dodo->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		student->Close();
	}
}
};
}
