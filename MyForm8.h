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
	/// Summary for MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
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
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TID;
	protected:


	private: System::Windows::Forms::Button^ RemoveT;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TID = (gcnew System::Windows::Forms::Label());
			this->RemoveT = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TID
			// 
			this->TID->AutoSize = true;
			this->TID->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TID->Location = System::Drawing::Point(56, 465);
			this->TID->Name = L"TID";
			this->TID->Size = System::Drawing::Size(308, 48);
			this->TID->TabIndex = 0;
			this->TID->Text = L"Enter Teacher ID";
			// 
			// RemoveT
			// 
			this->RemoveT->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->RemoveT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveT->Location = System::Drawing::Point(940, 644);
			this->RemoveT->Name = L"RemoveT";
			this->RemoveT->Size = System::Drawing::Size(173, 64);
			this->RemoveT->TabIndex = 3;
			this->RemoveT->Text = L"Remove";
			this->RemoveT->UseVisualStyleBackColor = false;
			this->RemoveT->Click += gcnew System::EventHandler(this, &MyForm8::RemoveT_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(418, 466);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(526, 47);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(267, 293);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(491, 66);
			this->label1->TabIndex = 5;
			this->label1->Text = L"REMOVE TEACHER";
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1142, 760);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->RemoveT);
			this->Controls->Add(this->TID);
			this->Name = L"MyForm8";
			this->Text = L"REMOVE TEACHER";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void RemoveT_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(textBox1->Text)) {
			MessageBox::Show("Please Enter Teacher ID", "Teacher ID", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ connectionTE = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
		MySqlConnection^ tokyo = gcnew MySqlConnection(connectionTE);
		try {
			tokyo->Open();
			String^ remova = "DELETE FROM addteacher WHERE TeacherID=@TeacherID";
			MySqlCommand^ ctpo = gcnew MySqlCommand(remova, tokyo);
			ctpo->Parameters->AddWithValue("@TeacherID", textBox1->Text);

			int geo = ctpo->ExecuteNonQuery();
			if (geo > 0) {
				MessageBox::Show("Congratulations! You Have Remove Teacher Successfully", "Remove Teacher", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Sorry Try Again Your Teacher Removing Process is Failed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (MySqlException^ toto) {
			MessageBox::Show("Error " + toto->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			tokyo->Close();
		}
	}
	};
}
