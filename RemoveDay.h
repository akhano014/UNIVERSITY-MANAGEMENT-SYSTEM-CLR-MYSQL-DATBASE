#pragma once
#include"RemoveDay.h"
using namespace MySql::Data::MySqlClient;
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RemoveDay
	/// </summary>
	public ref class RemoveDay : public System::Windows::Forms::Form
	{
	public:
		RemoveDay(void)
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
		~RemoveDay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Heading;
	private: System::Windows::Forms::Label^ SelectDay;
	private: System::Windows::Forms::ComboBox^ RemoveDayCombo;
	private: System::Windows::Forms::Button^ RemoveButton;
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
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->SelectDay = (gcnew System::Windows::Forms::Label());
			this->RemoveDayCombo = (gcnew System::Windows::Forms::ComboBox());
			this->RemoveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(298, 123);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(364, 66);
			this->Heading->TabIndex = 0;
			this->Heading->Text = L"REMOVE DAY";
			// 
			// SelectDay
			// 
			this->SelectDay->AutoSize = true;
			this->SelectDay->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectDay->Location = System::Drawing::Point(38, 295);
			this->SelectDay->Name = L"SelectDay";
			this->SelectDay->Size = System::Drawing::Size(197, 48);
			this->SelectDay->TabIndex = 1;
			this->SelectDay->Text = L"Select Day";
			// 
			// RemoveDayCombo
			// 
			this->RemoveDayCombo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RemoveDayCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RemoveDayCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveDayCombo->FormattingEnabled = true;
			this->RemoveDayCombo->Location = System::Drawing::Point(253, 296);
			this->RemoveDayCombo->Name = L"RemoveDayCombo";
			this->RemoveDayCombo->Size = System::Drawing::Size(538, 51);
			this->RemoveDayCombo->TabIndex = 2;
			// 
			// RemoveButton
			// 
			this->RemoveButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->RemoveButton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveButton->Location = System::Drawing::Point(382, 447);
			this->RemoveButton->Name = L"RemoveButton";
			this->RemoveButton->Size = System::Drawing::Size(210, 69);
			this->RemoveButton->TabIndex = 3;
			this->RemoveButton->Text = L"Remove";
			this->RemoveButton->UseVisualStyleBackColor = false;
			this->RemoveButton->Click += gcnew System::EventHandler(this, &RemoveDay::RemoveButton_Click);
			// 
			// RemoveDay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(977, 648);
			this->Controls->Add(this->RemoveButton);
			this->Controls->Add(this->RemoveDayCombo);
			this->Controls->Add(this->SelectDay);
			this->Controls->Add(this->Heading);
			this->Name = L"RemoveDay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RemoveDay";
			this->Load += gcnew System::EventHandler(this, &RemoveDay::RemoveDay_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void RemoveDay_Load(System::Object^ sender, System::EventArgs^ e) {
	}*/
	private: System::Void RemoveDay_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionremove = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
		MySqlConnection ^ dayremove = gcnew MySqlConnection(connectionremove);
		try {
			dayremove->Open();
			String^ remove = "SELECT DISTINCT DayName FROM addday";
			MySqlCommand^ roomg = gcnew MySqlCommand(remove, dayremove);
			MySqlDataReader^ readoo = roomg->ExecuteReader();
			while (readoo->Read()) {
				RemoveDayCombo->Items->Add(readoo["DayName"]->ToString());
			}
			readoo->Close();
		}
		catch (MySqlException^ eree) {
			MessageBox::Show("Error: " + eree->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ deo) {
			MessageBox::Show("Error: " + deo->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (dayremove->State != ConnectionState::Closed) {
				dayremove->Close();
			}
		}
	}
private: System::Void RemoveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ReDay = RemoveDayCombo->SelectedItem ? RemoveDayCombo->SelectedItem->ToString() : nullptr;
	if (String::IsNullOrEmpty(ReDay)) {
		MessageBox::Show("Please select Room", "Select Room!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ removedayconnection = "server = 127.0.0.1;port = 3306;user id = root;password = 8787;database = ums;AllowPublicKeyRetrieval = true;SslMode = None;";
	MySqlConnection^ removedayy = gcnew MySqlConnection(removedayconnection);
	try {
		removedayy->Open();
		String^ dayq = "DELETE FROM addday WHERE DayName=@DayName";
		MySqlCommand^ reeday = gcnew MySqlCommand(dayq, removedayy);
		reeday->Parameters->AddWithValue("DayName", ReDay);

		int doneday = reeday->ExecuteNonQuery();
		if (doneday > 0) {
			MessageBox::Show("Section Removed!", "Congratulations!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Please Check Section Name", "Section Name!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (MySqlException^ dododay) {
		MessageBox::Show("Error! " + dododay->Message, " Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ dday) {
		MessageBox::Show("Error! " + dday->Message, " Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		removedayy->Close();
	}
}
};
}
