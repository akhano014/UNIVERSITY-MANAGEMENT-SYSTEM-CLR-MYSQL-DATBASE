#pragma once
#include"MyForm4.h"
using namespace MySql::Data::MySqlClient;
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ role;
	private: System::Windows::Forms::Button^ sigin;
	protected:

	protected:



	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;

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
			this->username = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->role = (gcnew System::Windows::Forms::Label());
			this->sigin = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(67, 282);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(196, 48);
			this->username->TabIndex = 0;
			this->username->Text = L"UserName";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(67, 381);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(184, 48);
			this->password->TabIndex = 1;
			this->password->Text = L"Password";
			// 
			// role
			// 
			this->role->AutoSize = true;
			this->role->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->role->Location = System::Drawing::Point(67, 483);
			this->role->Name = L"role";
			this->role->Size = System::Drawing::Size(95, 48);
			this->role->TabIndex = 2;
			this->role->Text = L"Role";
			// 
			// sigin
			// 
			this->sigin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->sigin->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sigin->Location = System::Drawing::Point(749, 676);
			this->sigin->Name = L"sigin";
			this->sigin->Size = System::Drawing::Size(123, 60);
			this->sigin->TabIndex = 3;
			this->sigin->Text = L"OK";
			this->sigin->UseVisualStyleBackColor = false;
			this->sigin->Click += gcnew System::EventHandler(this, &MyForm3::sigin_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Advisor", L"HOD" });
			this->comboBox1->Location = System::Drawing::Point(319, 486);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(461, 48);
			this->comboBox1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(319, 289);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(461, 41);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(319, 388);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(461, 41);
			this->textBox2->TabIndex = 6;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(124, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(656, 66);
			this->label1->TabIndex = 7;
			this->label1->Text = L"ADMINISTRATOR SIGN IN";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(911, 789);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->sigin);
			this->Controls->Add(this->role);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADMIN SIGN IN";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sigin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(textBox1->Text)) {
			MessageBox::Show("Please Enter UserName!", "User Name!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (String::IsNullOrEmpty(textBox2->Text)) {
			MessageBox::Show("Please Enter Password!", "Password!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		/*if (comboBox1->SelectedItem == 0) {
			MessageBox::Show("Please Select Valid Role!", "Validation Error");
			return;
		}*/
		String^ role = comboBox1->SelectedItem ? comboBox1->SelectedItem->ToString() : nullptr;
		if (String::IsNullOrEmpty(role)) {
			MessageBox::Show("Please Enter Valid Role", "Role!!",MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ signcoonection = "server = 127.0.0.1;port = 3306;user id = root;password = 8787;database = ums;AllowPublicKeyRetrieval = true;SslMode = None;";
		MySqlConnection^ signin = gcnew MySqlConnection(signcoonection);
		try {
			signin->Open();
			
			String^ select = "SELECT COUNT(*) FROM admin WHERE UserName =@UserName AND Password =@Password AND Role=@Role";
			MySqlCommand^ cdd = gcnew MySqlCommand(select, signin);
			cdd->Parameters->AddWithValue("@UserName", textBox1->Text);
			cdd->Parameters->AddWithValue("@Password", textBox2->Text);
			cdd->Parameters->AddWithValue("@Role", role);
			int done = Convert::ToInt32(cdd->ExecuteScalar());
			if (done > 0) {
				MessageBox::Show("Administrator Log-in Successfully","Log in");
				this->Hide();
				MyForm4^ main = gcnew MyForm4();
				main->ShowDialog();
			}
			else {
				MessageBox::Show("Error Please Enter or Select Valid Value","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (MySqlException^ edd) {
			MessageBox::Show("Error " + edd->Message);
		}
		finally {
			signin->Close();
		}
	}
};
}
