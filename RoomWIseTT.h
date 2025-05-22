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
    /// Summary for RoomWIseTT
    /// </summary>
    public ref class RoomWIseTT : public System::Windows::Forms::Form
    {
    public:
        RoomWIseTT(void)
        {
            InitializeComponent();
            this->ClientSize = System::Drawing::Size(1050,650);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->WindowState = System::Windows::Forms::FormWindowState::Normal;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            //MessageBox::Show("RoomWIseTT constructor called", "Debug", MessageBoxButtons::OK, MessageBoxIcon::Information);
            // Rest of your initialization code
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~RoomWIseTT()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ Heading;
    protected:
    private: System::Windows::Forms::Label^ SelectRoom;
    private: System::Windows::Forms::ComboBox^ RoomCombo;
    private: System::Windows::Forms::Button^ SearchButton;
    private: System::Windows::Forms::DataGridView^ dataGridView1;

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
            this->Heading = (gcnew System::Windows::Forms::Label());
            this->SelectRoom = (gcnew System::Windows::Forms::Label());
            this->RoomCombo = (gcnew System::Windows::Forms::ComboBox());
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
            this->Heading->Location = System::Drawing::Point(677, 130);
            this->Heading->Name = L"Heading";
            this->Heading->Size = System::Drawing::Size(641, 66);
            this->Heading->TabIndex = 0;
            this->Heading->Text = L"ROOM WISE TIME TABLE";
            // 
            // SelectRoom
            // 
            this->SelectRoom->AutoSize = true;
            this->SelectRoom->Font = (gcnew System::Drawing::Font(L"Sitka Small", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SelectRoom->Location = System::Drawing::Point(104, 255);
            this->SelectRoom->Name = L"SelectRoom";
            this->SelectRoom->Size = System::Drawing::Size(265, 54);
            this->SelectRoom->TabIndex = 1;
            this->SelectRoom->Text = L"Select Room";
            // 
            // RoomCombo
            // 
            this->RoomCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->RoomCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RoomCombo->FormattingEnabled = true;
            this->RoomCombo->Location = System::Drawing::Point(375, 261);
            this->RoomCombo->Name = L"RoomCombo";
            this->RoomCombo->Size = System::Drawing::Size(1356, 51);
            this->RoomCombo->TabIndex = 2;
            // 
            // SearchButton
            // 
            this->SearchButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->SearchButton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SearchButton->Location = System::Drawing::Point(1768, 255);
            this->SearchButton->Name = L"SearchButton";
            this->SearchButton->Size = System::Drawing::Size(211, 63);
            this->SearchButton->TabIndex = 3;
            this->SearchButton->Text = L"SEARCH";
            this->SearchButton->UseVisualStyleBackColor = false;
            this->SearchButton->Click += gcnew System::EventHandler(this, &RoomWIseTT::SearchButton_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AllowUserToResizeColumns = false;
            this->dataGridView1->AllowUserToResizeRows = false;
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(375, 350);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 82;
            this->dataGridView1->RowTemplate->Height = 33;
            this->dataGridView1->ShowCellErrors = false;
            this->dataGridView1->ShowCellToolTips = false;
            this->dataGridView1->ShowEditingIcon = false;
            this->dataGridView1->ShowRowErrors = false;
            this->dataGridView1->Size = System::Drawing::Size(1356, 823);
            this->dataGridView1->TabIndex = 4;
            // 
            // RoomWIseTT
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDark;
            this->ClientSize = System::Drawing::Size(2096, 1236);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->SearchButton);
            this->Controls->Add(this->RoomCombo);
            this->Controls->Add(this->SelectRoom);
            this->Controls->Add(this->Heading);
            this->Name = L"RoomWIseTT";
            this->Text = L"RoomWIseTT";
            this->Load += gcnew System::EventHandler(this, &RoomWIseTT::RoomWIseTT_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void RoomWIseTT_Load(System::Object^ sender, System::EventArgs^ e) {
        String^ rooomwiseconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ roomwise = gcnew MySqlConnection(rooomwiseconnection);
        try {
            roomwise->Open();
            String^ addroom = "SELECT DISTINCT RoomNumber FROM addroom";
            MySqlCommand^ roomg = gcnew MySqlCommand(addroom, roomwise);
            MySqlDataReader^ readoo = roomg->ExecuteReader();
            while (readoo->Read()) {
                RoomCombo->Items->Add(readoo["RoomNumber"]->ToString());
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
    private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ Combog = RoomCombo->SelectedItem ? RoomCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(Combog) || String::IsNullOrWhiteSpace(Combog)) {
            MessageBox::Show("Please select room number", "Room Number!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ roomconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ roomc = gcnew MySqlConnection(roomconnection);
        try {
            roomc->Open();
            String^ roomaa = "SELECT CourseTitle, CourseID,TeacherName, Timing, Day, CourseType, ClassType,SectionName FROM addcourse WHERE Room_No = @RoomNo";
            MySqlCommand^ roomcd = gcnew MySqlCommand(roomaa, roomc);
            roomcd->Parameters->AddWithValue("@RoomNo", Combog);

            MySqlDataAdapter^ roomadp = gcnew MySqlDataAdapter(roomcd);
            DataTable^ roomdata = gcnew DataTable();
            roomadp->Fill(roomdata);

            if (roomdata->Rows->Count == 0) {
                MessageBox::Show("No course found for that selected Room.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            dataGridView1->DataSource = roomdata;
        }
        catch (MySqlException^ ed) {
            MessageBox::Show("Error: " + ed->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ eo) {
            MessageBox::Show("Error: " + eo->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            roomc->Close();
        }
    }
    };
}