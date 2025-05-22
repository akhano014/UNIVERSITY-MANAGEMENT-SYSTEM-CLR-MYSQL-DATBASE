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
	/// Summary for Removeroom
	/// </summary>
	public ref class Removeroom : public System::Windows::Forms::Form
	{
	public:
		Removeroom(void)
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
		~Removeroom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ SelectRoom;
	private: System::Windows::Forms::ComboBox^ RemoveRoomCombo;

	private: System::Windows::Forms::Button^ button1;

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
			this->SelectRoom = (gcnew System::Windows::Forms::Label());
			this->RemoveRoomCombo = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(245, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(408, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REMOVE ROOM";
			// 
			// SelectRoom
			// 
			this->SelectRoom->AutoSize = true;
			this->SelectRoom->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectRoom->Location = System::Drawing::Point(25, 244);
			this->SelectRoom->Name = L"SelectRoom";
			this->SelectRoom->Size = System::Drawing::Size(228, 48);
			this->SelectRoom->TabIndex = 1;
			this->SelectRoom->Text = L"Select Room";
			// 
			// RemoveRoomCombo
			// 
			this->RemoveRoomCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RemoveRoomCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveRoomCombo->FormattingEnabled = true;
			this->RemoveRoomCombo->Location = System::Drawing::Point(277, 245);
			this->RemoveRoomCombo->Name = L"RemoveRoomCombo";
			this->RemoveRoomCombo->Size = System::Drawing::Size(589, 51);
			this->RemoveRoomCombo->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(357, 388);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Remove ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Removeroom::button1_Click);
			// 
			// Removeroom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(930, 524);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->RemoveRoomCombo);
			this->Controls->Add(this->SelectRoom);
			this->Controls->Add(this->label1);
			this->Name = L"Removeroom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Removeroom";
			this->Load += gcnew System::EventHandler(this, &Removeroom::Removeroom_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Removeroom_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ rooomwiseconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
		MySqlConnection^ roomwise = gcnew MySqlConnection(rooomwiseconnection);
		try {
			roomwise->Open();
			String^ addroom = "SELECT DISTINCT RoomNumber FROM addroom";
			MySqlCommand^ roomg = gcnew MySqlCommand(addroom, roomwise);
			MySqlDataReader^ readoo = roomg->ExecuteReader();
			while (readoo->Read()) {
				RemoveRoomCombo->Items->Add(readoo["RoomNumber"]->ToString());
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
			if (roomwise->State != ConnectionState::Closed) {
				roomwise->Close();
			}
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ReComb = RemoveRoomCombo->SelectedItem ? RemoveRoomCombo->SelectedItem->ToString() : nullptr;
	if (String::IsNullOrEmpty(ReComb)) {
		MessageBox::Show("Please select Room", "Select Room!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ removeconnection = "server = 127.0.0.1;port = 3306;user id = root;password = 8787;database = ums;AllowPublicKeyRetrieval = true;SslMode = None;";
	MySqlConnection^ removeroom = gcnew MySqlConnection(removeconnection);
	try {
		removeroom->Open();
		String^ geog = "DELETE FROM addroom WHERE RoomNumber=@RoomNumber";
		MySqlCommand^ sindhi = gcnew MySqlCommand(geog, removeroom);
		sindhi->Parameters->AddWithValue("RoomNumber", ReComb);

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
		removeroom->Close();
	}
}
};
}
