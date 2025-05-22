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
	/// Summary for AddSection
	/// </summary>
	public ref class AddSection : public System::Windows::Forms::Form
	{
	public:
		AddSection(void)
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
		~AddSection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ SectionL;
	private: System::Windows::Forms::Label^ SNameL;
	private: System::Windows::Forms::TextBox^ SNameTxt;


	private: System::Windows::Forms::Button^ SubmitButton;
	protected:

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
			this->SectionL = (gcnew System::Windows::Forms::Label());
			this->SNameL = (gcnew System::Windows::Forms::Label());
			this->SNameTxt = (gcnew System::Windows::Forms::TextBox());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SectionL
			// 
			this->SectionL->AutoSize = true;
			this->SectionL->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionL->Location = System::Drawing::Point(472, 106);
			this->SectionL->Name = L"SectionL";
			this->SectionL->Size = System::Drawing::Size(364, 66);
			this->SectionL->TabIndex = 0;
			this->SectionL->Text = L"ADD SECTION";
			// 
			// SNameL
			// 
			this->SNameL->AutoSize = true;
			this->SNameL->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SNameL->Location = System::Drawing::Point(86, 257);
			this->SNameL->Name = L"SNameL";
			this->SNameL->Size = System::Drawing::Size(253, 48);
			this->SNameL->TabIndex = 1;
			this->SNameL->Text = L"Section Name";
			// 
			// SNameTxt
			// 
			this->SNameTxt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SNameTxt->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SNameTxt->Location = System::Drawing::Point(382, 261);
			this->SNameTxt->Name = L"SNameTxt";
			this->SNameTxt->Size = System::Drawing::Size(653, 44);
			this->SNameTxt->TabIndex = 2;
			// 
			// SubmitButton
			// 
			this->SubmitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubmitButton->Location = System::Drawing::Point(1041, 388);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(163, 61);
			this->SubmitButton->TabIndex = 3;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = false;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &AddSection::SubmitButton_Click);
			// 
			// AddSection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1307, 497);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->SNameTxt);
			this->Controls->Add(this->SNameL);
			this->Controls->Add(this->SectionL);
			this->Name = L"AddSection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddSection";
			//this->Load += gcnew System::EventHandler(this, &AddSection::AddSection_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*private: System::Void AddSection_Load(System::Object^ sender, System::EventArgs^ e) {
		}*/

	private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(SNameTxt->Text)) {
			MessageBox::Show("Please Enter Section Name", "Section Name!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ sectionconnection = "server = 127.0.0.1;port = 3306;user id = root;password = 8787;database = ums;AllowPublicKeyRetrieval = true;SslMode = None;";
		MySqlConnection^ section = gcnew MySqlConnection(sectionconnection);
		try {
			section->Open();
			String^ sec = "INSERT INTO addsection(SectionName) VALUES(@SectionName)";
			MySqlCommand^ gussa = gcnew MySqlCommand(sec, section);
			gussa->Parameters->AddWithValue("@SectionName", SNameTxt->Text);
		     
			int check = gussa->ExecuteNonQuery();
			if (check > 0) {
				MessageBox::Show("You Have Successfuuly Add Section", "Congratulations Message!", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Sorry Section Addition Process is Failed!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (MySqlException^ dd) {
			if (dd->Number == 1062) {
				MessageBox::Show("Error: Section with This Name is Already Exist", "Scheduling Conflicts!", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			else {
				MessageBox::Show("Error " + dd->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ee) {
			MessageBox::Show("Error " + ee->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			section->Close();
		}
	}

	};
}
