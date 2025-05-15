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
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(366, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Teacher Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(308, 48);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Teacher ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 464);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(369, 48);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Teacher Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 573);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(387, 48);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Enter Teacher Course";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 681);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(472, 48);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Enter Teacher Department";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1159, 883);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 65);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(585, 248);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(575, 44);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(585, 355);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(575, 44);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(585, 468);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(575, 44);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(585, 577);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(575, 44);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(585, 685);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(575, 44);
			this->textBox5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(385, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(388, 66);
			this->label6->TabIndex = 11;
			this->label6->Text = L"ADD TEACHER";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1352, 983);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADD TEACHER";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox1->Text)) {
		MessageBox::Show("Please Enter Teacher Name", " Teacher Name", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(textBox2->Text)) {
		MessageBox::Show("Please Enter Teacher ID", " Teacher ID", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(textBox3->Text)) {
		MessageBox::Show("Please Enter Teacher Email", " Teacher Email", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(textBox4->Text)) {
		MessageBox::Show("Please Enter Teacher Course", " Teacher Course", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrEmpty(textBox5->Text)) {
		MessageBox::Show("Please Enter Teacher Department", " Teacher Department", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ teacherconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
	MySqlConnection^ coder = gcnew MySqlConnection(teacherconnection);
	try {
		coder->Open();
		String^ setdata = "INSERT INTO addteacher(TeacherName,TeacherID,TeacherEmail,TeacherCourse,TeacherDepartment) VALUES(@EnterTeacherName,@EnterTeacherID,@EnterTeacherEmail,@EnterTeacherCourse,@EnterTeacherDepartment)";
		MySqlCommand^ cop = gcnew MySqlCommand(setdata, coder);
		cop->Parameters->AddWithValue("@EnterTeacherName", textBox1->Text);
		cop->Parameters->AddWithValue("@EnterTeacherID", textBox2->Text);
		cop->Parameters->AddWithValue("@EnterTeacherEmail", textBox3->Text);
		cop->Parameters->AddWithValue("@EnterTeacherCourse", textBox4->Text);
		cop->Parameters->AddWithValue("@EnterTeacherDepartment", textBox5->Text);

		int dodo = cop->ExecuteNonQuery();
		if (dodo > 0) {
			MessageBox::Show("Congratulations! You Have Added Teacher Successfully", "Congratulations",MessageBoxButtons::OK);

		}
		else {
			MessageBox::Show("Please Try Again Some Where Error!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (MySqlException^ cof) {
		MessageBox::Show("Error" + cof->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		coder->Close();
	}
}
};
}
