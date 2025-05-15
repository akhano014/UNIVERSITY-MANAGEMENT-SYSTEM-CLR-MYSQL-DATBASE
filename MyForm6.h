#pragma once
using namespace MySql::Data::MySqlClient;
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ courseID;

	private: System::Windows::Forms::Button^ RemoveCourse;
	private: System::Windows::Forms::TextBox^ RemoveC;
	protected:

	protected:





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
			this->courseID = (gcnew System::Windows::Forms::Label());
			this->RemoveCourse = (gcnew System::Windows::Forms::Button());
			this->RemoveC = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// courseID
			// 
			this->courseID->AutoSize = true;
			this->courseID->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseID->Location = System::Drawing::Point(34, 473);
			this->courseID->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->courseID->Name = L"courseID";
			this->courseID->Size = System::Drawing::Size(292, 48);
			this->courseID->TabIndex = 1;
			this->courseID->Text = L"Enter Course ID";
			// 
			// RemoveCourse
			// 
			this->RemoveCourse->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->RemoveCourse->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveCourse->Location = System::Drawing::Point(870, 646);
			this->RemoveCourse->Margin = System::Windows::Forms::Padding(6);
			this->RemoveCourse->Name = L"RemoveCourse";
			this->RemoveCourse->Size = System::Drawing::Size(180, 73);
			this->RemoveCourse->TabIndex = 3;
			this->RemoveCourse->Text = L"Remove";
			this->RemoveCourse->UseVisualStyleBackColor = false;
			this->RemoveCourse->Click += gcnew System::EventHandler(this, &MyForm6::RemoveCourse_Click);
			// 
			// RemoveC
			// 
			this->RemoveC->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RemoveC->Font = (gcnew System::Drawing::Font(L"Sitka Small", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveC->Location = System::Drawing::Point(375, 473);
			this->RemoveC->Margin = System::Windows::Forms::Padding(6);
			this->RemoveC->Name = L"RemoveC";
			this->RemoveC->Size = System::Drawing::Size(486, 45);
			this->RemoveC->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(264, 280);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(454, 66);
			this->label1->TabIndex = 6;
			this->label1->Text = L"REMOVE COURSE";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1085, 749);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->RemoveC);
			this->Controls->Add(this->RemoveCourse);
			this->Controls->Add(this->courseID);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm6";
			this->Text = L"REMOVE COURSE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RemoveCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(RemoveC->Text)) {
			MessageBox::Show("Please Enter Course ID", "Course ID", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		/*DialogResult result = MessageBox::Show("Are you sure you want to remove this course?", "Confirm Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == DialogResult::No) return;*/

		String^connectiontt = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
		MySqlConnection^ cobo = gcnew MySqlConnection(connectiontt);
		try {
			cobo->Open();
			String^ sakha = "DELETE FROM addcourse WHERE CourseID=@CourseID";
			MySqlCommand^ shera = gcnew MySqlCommand(sakha, cobo);
			shera->Parameters->AddWithValue("@CourseID", RemoveC->Text);

			int rubab = shera->ExecuteNonQuery();
			if (rubab > 0) {
				MessageBox::Show("Congratulations You have Deleted Course Successfully", "Delete Course", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Sorry Course Deletating Process Failed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		catch (MySqlException^cutt) {
			MessageBox::Show("Error" + cutt->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			cobo->Close();
		}
		
		
	}
};
}
