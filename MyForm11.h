#pragma once

using namespace MySql::Data::MySqlClient;

namespace UMSPROJECT1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm11 : public System::Windows::Forms::Form
    {
    public:
        MyForm11(void)
        {
            InitializeComponent();
            this->ClientSize = System::Drawing::Size(1230, 750);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->WindowState = System::Windows::Forms::FormWindowState::Normal;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        }

    protected:
        ~MyForm11()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold));
               this->label1->Location = System::Drawing::Point(919, 122);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(724, 66);
               this->label1->TabIndex = 0;
               this->label1->Text = L"TEACHER WISE TIME TABLE";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(65, 281);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(306, 54);
               this->label2->TabIndex = 1;
               this->label2->Text = L"Select Teacher";
               // 
               // comboBox1
               // 
               this->comboBox1->BackColor = System::Drawing::SystemColors::ControlLight;
               this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
               this->comboBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F));
               this->comboBox1->FormattingEnabled = true;
               this->comboBox1->Location = System::Drawing::Point(419, 279);
               this->comboBox1->Name = L"comboBox1";
               this->comboBox1->Size = System::Drawing::Size(1740, 51);
               this->comboBox1->TabIndex = 2;
               // 
               // button1
               // 
               this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
               this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold));
               this->button1->Location = System::Drawing::Point(2185, 270);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(184, 65);
               this->button1->TabIndex = 3;
               this->button1->Text = L"SEARCH";
               this->button1->UseVisualStyleBackColor = false;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
               // 
               // dataGridView1
               // 
               this->dataGridView1->AllowUserToAddRows = false;
               this->dataGridView1->AllowUserToDeleteRows = false;
               this->dataGridView1->AllowUserToResizeColumns = false;
               this->dataGridView1->AllowUserToResizeRows = false;
               this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Location = System::Drawing::Point(419, 363);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->ReadOnly = true;
               this->dataGridView1->RowHeadersWidth = 82;
               this->dataGridView1->RowTemplate->Height = 33;
               this->dataGridView1->Size = System::Drawing::Size(1740, 809);
               this->dataGridView1->TabIndex = 6;
               // 
               // MyForm11
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::SystemColors::ActiveBorder;
               this->ClientSize = System::Drawing::Size(2554, 1220);
               this->Controls->Add(this->dataGridView1);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->comboBox1);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Name = L"MyForm11";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"TEACHER WISE TIME TABLE";
               this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();
           }
#pragma endregion

    private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) {
        String^ connStr = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ codo = gcnew MySqlConnection(connStr);

        try {
            codo->Open();
            String^ geo = "SELECT DISTINCT TeacherName FROM addcourse";
            MySqlCommand^ cmd = gcnew MySqlCommand(geo, codo);
            MySqlDataReader^ reader = cmd->ExecuteReader();

            while (reader->Read()) {
                comboBox1->Items->Add(reader["TeacherName"]->ToString());
            }
            reader->Close();
        }
        catch (MySqlException^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            if (codo != nullptr && codo->State != ConnectionState::Closed) {
                codo->Close();
            }
        }
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ selectedTeacher = comboBox1->Text;
        if (String::IsNullOrEmpty(selectedTeacher)) {
            MessageBox::Show("Please Select Teacher Name", "Teacher Name!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        String^ connStr = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ conn = gcnew MySqlConnection(connStr);

        try {
            conn->Open();
            String^ qaqa = "SELECT CourseTitle, CourseID, Timing, Day, CourseType, ClassType, Room_No, SectionName FROM addcourse WHERE TeacherName=@teacher";
            MySqlCommand^ cmd = gcnew MySqlCommand(qaqa, conn);
            cmd->Parameters->AddWithValue("@teacher", selectedTeacher);

            MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
            DataTable^ dt = gcnew DataTable();
            adapter->Fill(dt);

            if (dt->Rows->Count == 0) {
                MessageBox::Show("No timetable found for the selected teacher.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            dataGridView1->DataSource = dt;
        }
        catch (MySqlException^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            if (conn != nullptr && conn->State != ConnectionState::Closed) {
                conn->Close();
            }
        }
    }
    };
}