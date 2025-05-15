#pragma once
#include"MyForm3.h"
using namespace MySql::Data::MySqlClient;
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ user;
	private: System::Windows::Forms::Label^ email;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ role;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
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
			this->user = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->role = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// user
			// 
			this->user->AutoSize = true;
			this->user->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->user->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->Location = System::Drawing::Point(54, 245);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(196, 48);
			this->user->TabIndex = 0;
			this->user->Text = L"UserName";
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(54, 360);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(120, 48);
			this->email->TabIndex = 1;
			this->email->Text = L"Email";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(54, 476);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(184, 48);
			this->password->TabIndex = 2;
			this->password->Text = L"Password";
			// 
			// role
			// 
			this->role->AutoSize = true;
			this->role->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->role->Location = System::Drawing::Point(63, 599);
			this->role->Name = L"role";
			this->role->Size = System::Drawing::Size(95, 48);
			this->role->TabIndex = 3;
			this->role->Text = L"Role";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(273, 252);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(368, 41);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(273, 367);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(368, 41);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(273, 483);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(368, 41);
			this->textBox3->TabIndex = 6;
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->submit->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->Location = System::Drawing::Point(745, 711);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(172, 55);
			this->submit->TabIndex = 7;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &MyForm2::submit_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Advisor", L"HOD" });
			this->comboBox1->Location = System::Drawing::Point(273, 599);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(368, 48);
			this->comboBox1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(851, 66);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ADMINISTRATOR REGISTRATION";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1031, 812);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->role);
			this->Controls->Add(this->password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->user);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADMIN REGISTRATION";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
	}*/
private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox1->Text)) {
		MessageBox::Show("Pleasse Enter Username!","UserName!",MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(textBox2->Text)) {
		MessageBox::Show("Pleasse Enter Email!", "Email!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(textBox3->Text)) {
		MessageBox::Show("Pleasse Enter Password!", "Password!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	/*if (comboBox1->SelectedItem == 0) {
		MessageBox::Show("Pleasse Select Valid Role!", "Validation Error");
		return;
	}*/
	String^ Role = comboBox1->SelectedItem ? comboBox1->SelectedItem->ToString() : nullptr;
	if (String::IsNullOrEmpty(Role)) {
		MessageBox::Show("Please Enter Valid Role", "Role!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ adminconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
	MySqlConnection^ admin = gcnew MySqlConnection(adminconnection);
	try {
		admin->Open();

		String^ data = "INSERT INTO admin(UserName,Email,Password,Role) VALUES(@UserName,@Email,@Password,@Role)";
		MySqlCommand^ cod = gcnew MySqlCommand(data, admin);
		cod->Parameters->AddWithValue("@UserName", textBox1->Text);
		cod->Parameters->AddWithValue("@Email", textBox2->Text);
		cod->Parameters->AddWithValue("@Password", textBox3->Text);
		cod->Parameters->AddWithValue("@Role", Role);

		int isrowfill = cod->ExecuteNonQuery();
		if (isrowfill > 0) {
			MessageBox::Show("Congratulations Administrator Registered Successfully","Congratulations");
			this->Hide();
			MyForm3^ sign = gcnew MyForm3();
			sign->ShowDialog();
		
		}
		else {
			MessageBox::Show("Administrator Registration Failed!","Registration!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch(MySqlException^err){
		MessageBox::Show("Error! " + err->Message,"Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		admin->Close();
	}
}
};
}
