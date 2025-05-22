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
	/// Summary for AddRoom
	/// </summary>
	public ref class AddRoom : public System::Windows::Forms::Form
	{
	public:
		AddRoom(void)
		{
			InitializeComponent();
			this->ClientSize = System::Drawing::Size(650,300);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->WindowState = System::Windows::Forms::FormWindowState::Normal;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ RoomL;
	protected:

	private: System::Windows::Forms::TextBox^ RoomTxt;

	private: System::Windows::Forms::Button^ Submitbutton;

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
			this->RoomL = (gcnew System::Windows::Forms::Label());
			this->RoomTxt = (gcnew System::Windows::Forms::TextBox());
			this->Submitbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(425, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADD ROOM";
			// 
			// RoomL
			// 
			this->RoomL->AutoSize = true;
			this->RoomL->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomL->Location = System::Drawing::Point(44, 282);
			this->RoomL->Name = L"RoomL";
			this->RoomL->Size = System::Drawing::Size(264, 48);
			this->RoomL->TabIndex = 1;
			this->RoomL->Text = L"Room Number";
			// 
			// RoomTxt
			// 
			this->RoomTxt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->RoomTxt->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomTxt->Location = System::Drawing::Point(332, 283);
			this->RoomTxt->Name = L"RoomTxt";
			this->RoomTxt->Size = System::Drawing::Size(591, 44);
			this->RoomTxt->TabIndex = 2;
			// 
			// Submitbutton
			// 
			this->Submitbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Submitbutton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Submitbutton->Location = System::Drawing::Point(917, 415);
			this->Submitbutton->Name = L"Submitbutton";
			this->Submitbutton->Size = System::Drawing::Size(169, 63);
			this->Submitbutton->TabIndex = 17;
			this->Submitbutton->Text = L"Submit";
			this->Submitbutton->UseVisualStyleBackColor = false;
			this->Submitbutton->Click += gcnew System::EventHandler(this, &AddRoom::Submitbutton_Click);
			// 
			// AddRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1157, 545);
			this->Controls->Add(this->Submitbutton);
			this->Controls->Add(this->RoomTxt);
			this->Controls->Add(this->RoomL);
			this->Controls->Add(this->label1);
			this->Name = L"AddRoom";
			this->Text = L"AddRoom";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void Submitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(RoomTxt->Text)) {
		MessageBox::Show("Please Enter Room Number", "Room Number!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	String^ roomconnection = "server = 127.0.0.1;port = 3306;user id = root;password = 8787;database = ums;AllowPublicKeyRetrieval = true;SslMode = None;";
	MySqlConnection^ room = gcnew MySqlConnection(roomconnection);

	try {
		room->Open();
		String^ roomentry = "INSERT INTO addroom(RoomNumber) VALUES(@RoomNumber)";
		MySqlCommand^ jano = gcnew MySqlCommand(roomentry, room);
		jano->Parameters->AddWithValue("@RoomNumber", RoomTxt->Text);

		int codu = jano->ExecuteNonQuery();
		if (codu > 0) {
			MessageBox::Show("You Have Successfully Add Room.", "Congratulations Message",MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Sorry Your Course Addition Process is failed Try Again", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (MySqlException^ dod) {
		if (dod->Number == 1062) {
			MessageBox::Show("Error: A Class is Already Scheduled at that RoomNumber", "Scheduling Conflict!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Error: " + dod->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ero) {
		MessageBox::Show("Error: " + ero->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		if (room->State != System::Data::ConnectionState::Closed) {
			room->Close();
		}
	}
}
};
}
