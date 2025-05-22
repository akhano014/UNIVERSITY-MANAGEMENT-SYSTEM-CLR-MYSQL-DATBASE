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
    /// Summary for SectionWiseTT
    /// </summary>
    public ref class SectionWiseTT : public System::Windows::Forms::Form
    {
    public:
        SectionWiseTT(void)
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
        ~SectionWiseTT()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Button^ button1;
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
            this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(764, 97);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(700, 66);
            this->label1->TabIndex = 0;
            this->label1->Text = L"SECTION WISE TIME TABLE";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(55, 219);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(292, 54);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Section Name";
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::SystemColors::ControlLight;
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(371, 225);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(1532, 51);
            this->comboBox1->TabIndex = 2;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(1949, 225);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(180, 59);
            this->button1->TabIndex = 3;
            this->button1->Text = L"SEARCH";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &SectionWiseTT::button1_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AllowUserToResizeColumns = false;
            this->dataGridView1->AllowUserToResizeRows = false;
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLight;
            this->dataGridView1->Location = System::Drawing::Point(371, 313);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 82;
            this->dataGridView1->RowTemplate->Height = 33;
            this->dataGridView1->ShowCellErrors = false;
            this->dataGridView1->ShowEditingIcon = false;
            this->dataGridView1->ShowRowErrors = false;
            this->dataGridView1->Size = System::Drawing::Size(1532, 857);
            this->dataGridView1->TabIndex = 4;
            // 
            // SectionWiseTT
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->ClientSize = System::Drawing::Size(2211, 1257);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"SectionWiseTT";
            this->Text = L"SectionWiseTT";
            this->Load += gcnew System::EventHandler(this, &SectionWiseTT::SectionWiseTT_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private: System::Void SectionWiseTT_Load(System::Object^ sender, System::EventArgs^ e) {
        String^ sectionconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ section = gcnew MySqlConnection(sectionconnection);
        try {
            section->Open();
            String^ burger = "SELECT DISTINCT SectionName FROM addsection";
            MySqlCommand^ sectioncmd = gcnew MySqlCommand(burger, section);
            MySqlDataReader^ erado = sectioncmd->ExecuteReader();
            while (erado->Read()) {
                comboBox1->Items->Add(erado["SectionName"]->ToString());
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

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ sectionCombo = comboBox1->Text;
        if (String::IsNullOrEmpty(sectionCombo) || String::IsNullOrWhiteSpace(sectionCombo)) {
            MessageBox::Show("Please select section ", "Section!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ sectconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ sectiontt = gcnew MySqlConnection(sectconnection);
        try {
            sectiontt->Open();
            String^ sectiontime = "SELECT CourseTitle,TeacherName, CourseID, Timing, Day, CourseType, ClassType, Room_No FROM addcourse WHERE SectionName = @SectionName";
            MySqlCommand^ cmdsection = gcnew MySqlCommand(sectiontime, sectiontt);
            cmdsection->Parameters->AddWithValue("@SectionName", sectionCombo);

            MySqlDataAdapter^ adpt = gcnew MySqlDataAdapter(cmdsection);
            DataTable^ sectdata = gcnew DataTable();
            adpt->Fill(sectdata);
            if (sectdata->Rows->Count == 0) {
                MessageBox::Show("No courses found for the selected Section.", "No Course!", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            dataGridView1->DataSource = sectdata;
        }
        catch (MySqlException^ secto) {
            MessageBox::Show("Error: " + secto->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ seto) {
            MessageBox::Show("Error: " + seto->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            sectiontt->Close();
        }
    }
    };
}