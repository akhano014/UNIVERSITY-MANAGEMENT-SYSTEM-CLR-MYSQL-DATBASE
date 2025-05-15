#pragma once
#include"MyForm1.h"
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Administrator;
	private: System::Windows::Forms::Button^ Teacher;
	private: System::Windows::Forms::Button^ Student;
	protected:

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
			this->Administrator = (gcnew System::Windows::Forms::Button());
			this->Teacher = (gcnew System::Windows::Forms::Button());
			this->Student = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Administrator
			// 
			this->Administrator->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Administrator->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Administrator->Location = System::Drawing::Point(147, 654);
			this->Administrator->Name = L"Administrator";
			this->Administrator->Size = System::Drawing::Size(297, 58);
			this->Administrator->TabIndex = 0;
			this->Administrator->Text = L"Administrator";
			this->Administrator->UseVisualStyleBackColor = false;
			this->Administrator->Click += gcnew System::EventHandler(this, &MyForm::Administrator_Click);
			// 
			// Teacher
			// 
			this->Teacher->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Teacher->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Teacher->Location = System::Drawing::Point(528, 654);
			this->Teacher->Name = L"Teacher";
			this->Teacher->Size = System::Drawing::Size(226, 58);
			this->Teacher->TabIndex = 1;
			this->Teacher->Text = L"Teacher";
			this->Teacher->UseVisualStyleBackColor = false;
			// 
			// Student
			// 
			this->Student->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Student->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Student->Location = System::Drawing::Point(827, 654);
			this->Student->Name = L"Student";
			this->Student->Size = System::Drawing::Size(228, 58);
			this->Student->TabIndex = 2;
			this->Student->Text = L"Student";
			this->Student->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1240, 806);
			this->Controls->Add(this->Student);
			this->Controls->Add(this->Teacher);
			this->Controls->Add(this->Administrator);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main FORM";
			this->ResumeLayout(false);

		}
#pragma endregion
	/*private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}*/
private: System::Void Administrator_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm1^ admin = gcnew MyForm1();
	admin->ShowDialog();
}
};
}
