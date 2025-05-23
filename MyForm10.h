#pragma once
//#include"MyForm4.h"
using namespace MySql::Data::MySqlClient;
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	public:
		MyForm10(void)
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
		~MyForm10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Sid;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;


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
			this->Sid = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(286, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(486, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REMOVE STUDENT";
			// 
			// Sid
			// 
			this->Sid->AutoSize = true;
			this->Sid->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sid->Location = System::Drawing::Point(40, 385);
			this->Sid->Name = L"Sid";
			this->Sid->Size = System::Drawing::Size(202, 48);
			this->Sid->TabIndex = 1;
			this->Sid->Text = L"Student ID";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(294, 386);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(478, 44);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(774, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 69);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm10::button1_Click);
			// 
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1014, 657);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Sid);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm10";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"REMOVE STUDENT";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(textBox1->Text)) {
			MessageBox::Show("Please Enter Student ID", "Student ID!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^removeconnection="server = 127.0.0.1;port = 3306;user id = root;password = 8787;database = ums;AllowPublicKeyRetrieval = true;SslMode = None;";
		MySqlConnection^ studentR = gcnew MySqlConnection(removeconnection);
		try {
			studentR->Open();
			String^ geog = "DELETE FROM addstudent WHERE StudentID=@StudentID";
			MySqlCommand^ sindhi = gcnew MySqlCommand(geog, studentR);
			sindhi->Parameters->AddWithValue("@StudentID",textBox1->Text);

			int done = sindhi->ExecuteNonQuery();
			if (done > 0) {
				MessageBox::Show("Congratulations you have successfully remove student", "Congratulations Message", MessageBoxButtons::OK,MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Please Check Student ID", "Student ID!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch(MySqlException^dodo){
			MessageBox::Show("Error! " + dodo->Message, " Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			studentR->Close();
		}
	}

};
}
