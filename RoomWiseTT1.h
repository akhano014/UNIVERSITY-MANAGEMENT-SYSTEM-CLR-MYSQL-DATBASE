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
	/// Summary for RoomWiseTT
	/// </summary>
	public ref class RoomWiseTT : public System::Windows::Forms::Form
	{
	public:
		RoomWiseTT(void)
		{
			InitializeComponent();
			this->ClientSize = System::Drawing::Size(1100, 650);
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
		~RoomWiseTT()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Heading;
	protected:
	private: System::Windows::Forms::Label^ SelectDayL;
	private: System::Windows::Forms::ComboBox^ DayTTCombo;

	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


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
			this->SelectDayL = (gcnew System::Windows::Forms::Label());
			this->DayTTCombo = (gcnew System::Windows::Forms::ComboBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(784, 113);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(597, 66);
			this->Heading->TabIndex = 0;
			this->Heading->Text = L"DAY WISE TIME TABLE";
			// 
			// SelectDayL
			// 
			this->SelectDayL->AutoSize = true;
			this->SelectDayL->Font = (gcnew System::Drawing::Font(L"Sitka Small", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectDayL->Location = System::Drawing::Point(93, 238);
			this->SelectDayL->Name = L"SelectDayL";
			this->SelectDayL->Size = System::Drawing::Size(227, 54);
			this->SelectDayL->TabIndex = 1;
			this->SelectDayL->Text = L"Select Day";
			// 
			// DayTTCombo
			// 
			this->DayTTCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DayTTCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DayTTCombo->FormattingEnabled = true;
			this->DayTTCombo->Location = System::Drawing::Point(340, 241);
			this->DayTTCombo->Name = L"DayTTCombo";
			this->DayTTCombo->Size = System::Drawing::Size(1568, 51);
			this->DayTTCombo->TabIndex = 2;
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->Location = System::Drawing::Point(1949, 238);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(169, 63);
			this->SearchButton->TabIndex = 3;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &RoomWiseTT::SearchButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(340, 316);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->ShowCellToolTips = false;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->ShowRowErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(1568, 846);
			this->dataGridView1->TabIndex = 4;
			// 
			// RoomWiseTT
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(2246, 1216);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->DayTTCombo);
			this->Controls->Add(this->SelectDayL);
			this->Controls->Add(this->Heading);
			this->Name = L"RoomWiseTT";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DayWiseTT";
			this->Load += gcnew System::EventHandler(this, &RoomWiseTT::RoomWiseTT_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RoomWiseTT_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ daywiseconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
		MySqlConnection^ daywise = gcnew MySqlConnection(daywiseconnection);
		try {
			daywise->Open();
			String^ adddays = "SELECT DISTINCT DayName FROM addday";
			MySqlCommand^ dayg = gcnew MySqlCommand(adddays,daywise);
			MySqlDataReader^ readoody = dayg->ExecuteReader();
			while (readoody->Read()) {
				DayTTCombo->Items->Add(readoody["DayName"]->ToString());
			}
			readoody->Close();
		}
		catch (MySqlException^ eday) {
			MessageBox::Show("Error: " + eday->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ edd) {
			MessageBox::Show("Error: " + edd->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (daywise->State != ConnectionState::Closed) {
				daywise->Close();
			}
		}
	}
private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dayw = DayTTCombo->SelectedItem ? DayTTCombo->SelectedItem->ToString() : nullptr;
	if (String::IsNullOrEmpty(dayw) || String::IsNullOrWhiteSpace(dayw)) {
		MessageBox::Show("Please Select Day", "Select Day!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ daywiseTTconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
	MySqlConnection^ daycx = gcnew MySqlConnection(daywiseTTconnection);
	try {
		daycx->Open();
		String^ dayquery = "SELECT CourseTitle, CourseID,TeacherName, Timing,CourseType, ClassType,SectionName FROM addcourse WHERE Day= @DayName";
		MySqlCommand^ dayx = gcnew MySqlCommand(dayquery, daycx);
		dayx->Parameters->AddWithValue("@DayName", dayw);
		MySqlDataAdapter^ dayadpt = gcnew MySqlDataAdapter(dayx);
		DataTable^ dadt = gcnew DataTable();
		dayadpt->Fill(dadt);
		if (dadt->Rows->Count == 0) {
			MessageBox::Show("No Course found for that selected Day", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		dataGridView1->DataSource = dadt;
	}
	catch (MySqlException^ edday) {
		MessageBox::Show("Error: " + edday->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ eoday) {
		MessageBox::Show("Error: " + eoday->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		daycx->Close();
	}
}
};
}
