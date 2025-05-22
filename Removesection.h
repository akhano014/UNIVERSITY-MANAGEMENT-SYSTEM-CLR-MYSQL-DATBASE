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
	/// Summary for Removesection
	/// </summary>
	public ref class Removesection : public System::Windows::Forms::Form
	{
	public:
		Removesection(void)
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
		~Removesection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ SectionName;
	private: System::Windows::Forms::ComboBox^ RSectionComb;

	private: System::Windows::Forms::Button^ REMOVEButtton;

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
			this->SectionName = (gcnew System::Windows::Forms::Label());
			this->RSectionComb = (gcnew System::Windows::Forms::ComboBox());
			this->REMOVEButtton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(318, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REMOVE SECTION";
			// 
			// SectionName
			// 
			this->SectionName->AutoSize = true;
			this->SectionName->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionName->Location = System::Drawing::Point(22, 258);
			this->SectionName->Name = L"SectionName";
			this->SectionName->Size = System::Drawing::Size(258, 48);
			this->SectionName->TabIndex = 1;
			this->SectionName->Text = L"Select Section";
			// 
			// RSectionComb
			// 
			this->RSectionComb->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RSectionComb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RSectionComb->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RSectionComb->FormattingEnabled = true;
			this->RSectionComb->Location = System::Drawing::Point(307, 259);
			this->RSectionComb->Name = L"RSectionComb";
			this->RSectionComb->Size = System::Drawing::Size(624, 51);
			this->RSectionComb->TabIndex = 2;
			// 
			// REMOVEButtton
			// 
			this->REMOVEButtton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->REMOVEButtton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REMOVEButtton->Location = System::Drawing::Point(437, 403);
			this->REMOVEButtton->Name = L"REMOVEButtton";
			this->REMOVEButtton->Size = System::Drawing::Size(203, 62);
			this->REMOVEButtton->TabIndex = 3;
			this->REMOVEButtton->Text = L"REMOVE";
			this->REMOVEButtton->UseVisualStyleBackColor = false;
			this->REMOVEButtton->Click += gcnew System::EventHandler(this, &Removesection::REMOVEButtton_Click);
			// 
			// Removesection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1029, 564);
			this->Controls->Add(this->REMOVEButtton);
			this->Controls->Add(this->RSectionComb);
			this->Controls->Add(this->SectionName);
			this->Controls->Add(this->label1);
			this->Name = L"Removesection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Removesection";
			this->Load += gcnew System::EventHandler(this, &Removesection::Removesection_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Removesection_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ sectionconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
		MySqlConnection^ section = gcnew MySqlConnection(sectionconnection);
		try {
			section->Open();
			String^ burger = "SELECT DISTINCT SectionName FROM addsection";
			MySqlCommand^ sectioncmd = gcnew MySqlCommand(burger, section);
			MySqlDataReader^ erado = sectioncmd->ExecuteReader();
			while (erado->Read()) {
				RSectionComb->Items->Add(erado["SectionName"]->ToString());
			}
			erado->Close();
		}
		catch (Exception^ sou) {
			MessageBox::Show("Error: " + sou->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (MySqlException^ suba) {
			MessageBox::Show("Error: " + suba->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (section->State != ConnectionState::Closed) {
				section->Close();
			}
		}
	}
private: System::Void REMOVEButtton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ RComb = RSectionComb->SelectedItem ? RSectionComb->SelectedItem->ToString() : nullptr;
	if (String::IsNullOrEmpty(RComb)) {
		MessageBox::Show("Please select section", "Select Section!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ removeconnection = "server = 127.0.0.1;port = 3306;user id = root;password = 8787;database = ums;AllowPublicKeyRetrieval = true;SslMode = None;";
	MySqlConnection^ studentR = gcnew MySqlConnection(removeconnection);
	try {
		studentR->Open();
		String^ geog = "DELETE FROM addsection WHERE SectionName=@SectionName";
		MySqlCommand^ sindhi = gcnew MySqlCommand(geog, studentR);
		sindhi->Parameters->AddWithValue("SectionName",RComb);

		int done = sindhi->ExecuteNonQuery();
		if (done > 0) {
			MessageBox::Show("Section Removed!", "Congratulations!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Please Check Section Name", "Section Name!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (MySqlException^ dodo) {
		MessageBox::Show("Error! " + dodo->Message, " Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		studentR->Close();
	}
}
};
}
