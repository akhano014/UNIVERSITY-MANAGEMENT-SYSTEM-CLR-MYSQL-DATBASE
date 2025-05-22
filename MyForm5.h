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
    /// Summary for MyForm5
    /// </summary>
    public ref class MyForm5 : public System::Windows::Forms::Form
    {
    public:
        MyForm5(void)
        {
            InitializeComponent();
            this->ClientSize = System::Drawing::Size(800,750);
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
        ~MyForm5()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ TN;
    private: System::Windows::Forms::Label^ CT;
    private: System::Windows::Forms::Label^ CR;
    private: System::Windows::Forms::Label^ Time;
    private: System::Windows::Forms::Label^ Day;

    private: System::Windows::Forms::ComboBox^ CreditCombo;
    private: System::Windows::Forms::ComboBox^ TimingCombo;

    private: System::Windows::Forms::ComboBox^ DayCombo;

    private: System::Windows::Forms::Label^ Ctype;
    private: System::Windows::Forms::ComboBox^ CourseTCombo;
    private: System::Windows::Forms::Label^ ClassType;
    private: System::Windows::Forms::ComboBox^ ClassCombo;
    private: System::Windows::Forms::Label^ Romm;
    private: System::Windows::Forms::ComboBox^ RoomCombo;
    private: System::Windows::Forms::Label^ Temail;

    private: System::Windows::Forms::Button^ CourseSubmit;
    private: System::Windows::Forms::Label^ section;
    private: System::Windows::Forms::ComboBox^ sectionCombo;
    private: System::Windows::Forms::Label^ courseID;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label1;

    protected:

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
            this->TN = (gcnew System::Windows::Forms::Label());
            this->CT = (gcnew System::Windows::Forms::Label());
            this->CR = (gcnew System::Windows::Forms::Label());
            this->Time = (gcnew System::Windows::Forms::Label());
            this->Day = (gcnew System::Windows::Forms::Label());
            this->CreditCombo = (gcnew System::Windows::Forms::ComboBox());
            this->TimingCombo = (gcnew System::Windows::Forms::ComboBox());
            this->DayCombo = (gcnew System::Windows::Forms::ComboBox());
            this->Ctype = (gcnew System::Windows::Forms::Label());
            this->CourseTCombo = (gcnew System::Windows::Forms::ComboBox());
            this->ClassType = (gcnew System::Windows::Forms::Label());
            this->ClassCombo = (gcnew System::Windows::Forms::ComboBox());
            this->Romm = (gcnew System::Windows::Forms::Label());
            this->RoomCombo = (gcnew System::Windows::Forms::ComboBox());
            this->Temail = (gcnew System::Windows::Forms::Label());
            this->CourseSubmit = (gcnew System::Windows::Forms::Button());
            this->section = (gcnew System::Windows::Forms::Label());
            this->sectionCombo = (gcnew System::Windows::Forms::ComboBox());
            this->courseID = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // TN
            // 
            this->TN->AutoSize = true;
            this->TN->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TN->Location = System::Drawing::Point(64, 408);
            this->TN->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->TN->Name = L"TN";
            this->TN->Size = System::Drawing::Size(261, 48);
            this->TN->TabIndex = 0;
            this->TN->Text = L"Teacher Name";
            // 
            // CT
            // 
            this->CT->AutoSize = true;
            this->CT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CT->Location = System::Drawing::Point(70, 213);
            this->CT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->CT->Name = L"CT";
            this->CT->Size = System::Drawing::Size(228, 48);
            this->CT->TabIndex = 1;
            this->CT->Text = L"Course Title";
            // 
            // CR
            // 
            this->CR->AutoSize = true;
            this->CR->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CR->Location = System::Drawing::Point(64, 594);
            this->CR->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->CR->Name = L"CR";
            this->CR->Size = System::Drawing::Size(241, 48);
            this->CR->TabIndex = 2;
            this->CR->Text = L"Credit Hours";
            // 
            // Time
            // 
            this->Time->AutoSize = true;
            this->Time->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Time->Location = System::Drawing::Point(64, 706);
            this->Time->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->Time->Name = L"Time";
            this->Time->Size = System::Drawing::Size(142, 48);
            this->Time->TabIndex = 3;
            this->Time->Text = L"Timing";
            // 
            // Day
            // 
            this->Day->AutoSize = true;
            this->Day->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Day->Location = System::Drawing::Point(70, 802);
            this->Day->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->Day->Name = L"Day";
            this->Day->Size = System::Drawing::Size(85, 48);
            this->Day->TabIndex = 4;
            this->Day->Text = L"Day";
            // 
            // CreditCombo
            // 
            this->CreditCombo->BackColor = System::Drawing::SystemColors::ControlLight;
            this->CreditCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->CreditCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CreditCombo->FormattingEnabled = true;
            this->CreditCombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
            this->CreditCombo->Location = System::Drawing::Point(392, 590);
            this->CreditCombo->Margin = System::Windows::Forms::Padding(4);
            this->CreditCombo->Name = L"CreditCombo";
            this->CreditCombo->Size = System::Drawing::Size(940, 51);
            this->CreditCombo->TabIndex = 7;
            // 
            // TimingCombo
            // 
            this->TimingCombo->BackColor = System::Drawing::SystemColors::ControlLight;
            this->TimingCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->TimingCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TimingCombo->FormattingEnabled = true;
            this->TimingCombo->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
                L"08:30-09:30", L"09:30-10:30", L"10:30-11:30",
                    L"11:30-12:30", L"12:30-01:25", L"01:30-02:30", L"02:30-03:30", L"03:30-04:30", L"04:30-05:30"
            });
            this->TimingCombo->Location = System::Drawing::Point(392, 703);
            this->TimingCombo->Margin = System::Windows::Forms::Padding(4);
            this->TimingCombo->Name = L"TimingCombo";
            this->TimingCombo->Size = System::Drawing::Size(940, 51);
            this->TimingCombo->TabIndex = 8;
            // 
            // DayCombo
            // 
            this->DayCombo->BackColor = System::Drawing::SystemColors::ControlLight;
            this->DayCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->DayCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DayCombo->FormattingEnabled = true;
            this->DayCombo->Location = System::Drawing::Point(392, 804);
            this->DayCombo->Margin = System::Windows::Forms::Padding(4);
            this->DayCombo->Name = L"DayCombo";
            this->DayCombo->Size = System::Drawing::Size(940, 51);
            this->DayCombo->TabIndex = 9;
            // 
            // Ctype
            // 
            this->Ctype->AutoSize = true;
            this->Ctype->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Ctype->Location = System::Drawing::Point(64, 912);
            this->Ctype->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->Ctype->Name = L"Ctype";
            this->Ctype->Size = System::Drawing::Size(222, 48);
            this->Ctype->TabIndex = 10;
            this->Ctype->Text = L"Course type";
            // 
            // CourseTCombo
            // 
            this->CourseTCombo->BackColor = System::Drawing::SystemColors::ControlLight;
            this->CourseTCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->CourseTCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CourseTCombo->FormattingEnabled = true;
            this->CourseTCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Theory", L"Lab" });
            this->CourseTCombo->Location = System::Drawing::Point(392, 909);
            this->CourseTCombo->Margin = System::Windows::Forms::Padding(4);
            this->CourseTCombo->Name = L"CourseTCombo";
            this->CourseTCombo->Size = System::Drawing::Size(940, 51);
            this->CourseTCombo->TabIndex = 11;
            // 
            // ClassType
            // 
            this->ClassType->AutoSize = true;
            this->ClassType->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClassType->Location = System::Drawing::Point(64, 1013);
            this->ClassType->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->ClassType->Name = L"ClassType";
            this->ClassType->Size = System::Drawing::Size(201, 48);
            this->ClassType->TabIndex = 12;
            this->ClassType->Text = L"Class Type";
            // 
            // ClassCombo
            // 
            this->ClassCombo->BackColor = System::Drawing::SystemColors::ControlLight;
            this->ClassCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->ClassCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClassCombo->FormattingEnabled = true;
            this->ClassCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Regular", L"Make Up" });
            this->ClassCombo->Location = System::Drawing::Point(392, 1015);
            this->ClassCombo->Margin = System::Windows::Forms::Padding(4);
            this->ClassCombo->Name = L"ClassCombo";
            this->ClassCombo->Size = System::Drawing::Size(940, 51);
            this->ClassCombo->TabIndex = 13;
            // 
            // Romm
            // 
            this->Romm->AutoSize = true;
            this->Romm->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Romm->Location = System::Drawing::Point(64, 1117);
            this->Romm->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->Romm->Name = L"Romm";
            this->Romm->Size = System::Drawing::Size(126, 48);
            this->Romm->TabIndex = 14;
            this->Romm->Text = L"Room ";
            // 
            // RoomCombo
            // 
            this->RoomCombo->BackColor = System::Drawing::SystemColors::ControlLight;
            this->RoomCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->RoomCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RoomCombo->FormattingEnabled = true;
            this->RoomCombo->Location = System::Drawing::Point(392, 1115);
            this->RoomCombo->Margin = System::Windows::Forms::Padding(4);
            this->RoomCombo->Name = L"RoomCombo";
            this->RoomCombo->Size = System::Drawing::Size(940, 51);
            this->RoomCombo->TabIndex = 15;
            // 
            // Temail
            // 
            this->Temail->AutoSize = true;
            this->Temail->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Temail->Location = System::Drawing::Point(70, 494);
            this->Temail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->Temail->Name = L"Temail";
            this->Temail->Size = System::Drawing::Size(264, 48);
            this->Temail->TabIndex = 16;
            this->Temail->Text = L"Teacher Email";
            // 
            // CourseSubmit
            // 
            this->CourseSubmit->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->CourseSubmit->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CourseSubmit->Location = System::Drawing::Point(1334, 1313);
            this->CourseSubmit->Margin = System::Windows::Forms::Padding(4);
            this->CourseSubmit->Name = L"CourseSubmit";
            this->CourseSubmit->Size = System::Drawing::Size(200, 62);
            this->CourseSubmit->TabIndex = 18;
            this->CourseSubmit->Text = L"Submit";
            this->CourseSubmit->UseVisualStyleBackColor = false;
            this->CourseSubmit->Click += gcnew System::EventHandler(this, &MyForm5::CourseSubmit_Click);
            // 
            // section
            // 
            this->section->AutoSize = true;
            this->section->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->section->Location = System::Drawing::Point(64, 1217);
            this->section->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->section->Name = L"section";
            this->section->Size = System::Drawing::Size(253, 48);
            this->section->TabIndex = 19;
            this->section->Text = L"Section Name";
            // 
            // sectionCombo
            // 
            this->sectionCombo->BackColor = System::Drawing::SystemColors::ControlLight;
            this->sectionCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->sectionCombo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->sectionCombo->FormattingEnabled = true;
            this->sectionCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BSE-2A", L"BSE-2B" });
            this->sectionCombo->Location = System::Drawing::Point(392, 1219);
            this->sectionCombo->Margin = System::Windows::Forms::Padding(4);
            this->sectionCombo->Name = L"sectionCombo";
            this->sectionCombo->Size = System::Drawing::Size(940, 51);
            this->sectionCombo->TabIndex = 20;
            // 
            // courseID
            // 
            this->courseID->AutoSize = true;
            this->courseID->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->courseID->Location = System::Drawing::Point(64, 312);
            this->courseID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->courseID->Name = L"courseID";
            this->courseID->Size = System::Drawing::Size(187, 48);
            this->courseID->TabIndex = 21;
            this->courseID->Text = L"Course ID";
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(392, 213);
            this->textBox1->Margin = System::Windows::Forms::Padding(4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(940, 44);
            this->textBox1->TabIndex = 22;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(392, 316);
            this->textBox2->Margin = System::Windows::Forms::Padding(4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(940, 44);
            this->textBox2->TabIndex = 23;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(392, 412);
            this->textBox3->Margin = System::Windows::Forms::Padding(4);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(940, 44);
            this->textBox3->TabIndex = 24;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(392, 498);
            this->textBox4->Margin = System::Windows::Forms::Padding(4);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(940, 44);
            this->textBox4->TabIndex = 25;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(594, 96);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(351, 66);
            this->label1->TabIndex = 26;
            this->label1->Text = L"ADD COURSE";
            // 
            // MyForm5
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->ClientSize = System::Drawing::Size(1728, 1456);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->courseID);
            this->Controls->Add(this->sectionCombo);
            this->Controls->Add(this->section);
            this->Controls->Add(this->CourseSubmit);
            this->Controls->Add(this->Temail);
            this->Controls->Add(this->RoomCombo);
            this->Controls->Add(this->Romm);
            this->Controls->Add(this->ClassCombo);
            this->Controls->Add(this->ClassType);
            this->Controls->Add(this->CourseTCombo);
            this->Controls->Add(this->Ctype);
            this->Controls->Add(this->DayCombo);
            this->Controls->Add(this->TimingCombo);
            this->Controls->Add(this->CreditCombo);
            this->Controls->Add(this->Day);
            this->Controls->Add(this->Time);
            this->Controls->Add(this->CR);
            this->Controls->Add(this->CT);
            this->Controls->Add(this->TN);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm5";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"ADD COURSE";
            this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void CourseSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Please Enter Course Title", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox2->Text)) {
            MessageBox::Show("Please Enter Course ID", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox3->Text)) {
            MessageBox::Show("Please Enter Teacher Name", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox4->Text)) {
            MessageBox::Show("Please Enter Teacher Email", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ credit = CreditCombo->SelectedItem ? CreditCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(credit)) {
            MessageBox::Show("Please Select Course Credit Hours", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ time = TimingCombo->SelectedItem ? TimingCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(time)) {
            MessageBox::Show("Please Select Timing for Course", "Validation Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
            return;
        }
        String^ day = DayCombo->SelectedItem ? DayCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(day)) {
            MessageBox::Show("Please Select Day for Course", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ coursetype = CourseTCombo->SelectedItem ? CourseTCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(coursetype)) {
            MessageBox::Show("Please Select Course Type", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ classtype = ClassCombo->SelectedItem ? ClassCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(classtype)) {
            MessageBox::Show("Please Select Class Type", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ room = RoomCombo->SelectedItem ? RoomCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(room)) {
            MessageBox::Show("Please Select Room Number", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ section = sectionCombo->SelectedItem ? sectionCombo->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(section)) {
            MessageBox::Show("Please Select Course Section", "Validation Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
      /*  String^ TeacherN = textBox3->Text;
        String^ CourseT = textBox1->Text;
        String^ Timingg = TimingCombo->Text;
        String^ daya = DayCombo->Text;
        String^ Roomnoo = RoomCombo->Text;
        String^ SectionN = sectionCombo->Text;*/

       
        //MySql connection
        String^ courseconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ course = gcnew MySqlConnection(courseconnection);
        try {
            course->Open();


           /* String^ recheck = "SELECT COUNT(*) FROM addcourse WHERE CourseTitle=@CourseTitle AND TeacherName=@TeacherName AND Timing=@Timing AND Day=@Day AND Room_No=@RoomNo AND SectionName=@SectionName";
            MySqlCommand^ checko = gcnew MySqlCommand(recheck, course);
            checko->Parameters->AddWithValue("@CourseTitle",CourseT);
            checko->Parameters->AddWithValue("@TeacherName", TeacherN);
            checko->Parameters->AddWithValue("@Timing",Timingg);
            checko->Parameters->AddWithValue("@Day",daya);
            checko->Parameters->AddWithValue("@RoomNo",Roomnoo);
            checko->Parameters->AddWithValue("@SectionName",SectionN);

            int paf =Convert::ToInt32 (checko->ExecuteScalar());
            if (paf > 0) {
                MessageBox::Show("Error: These AddCourse Entities Course Title, Teacher Name,Timing,Day,Room Number and Section Name Already Exists", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
                course->Close();
                return;
            }*/
 
            String^ coursedata = "INSERT INTO addcourse(CourseTitle,CourseID,TeacherName,TeacherEmail,CreditHours,Timing,Day,CourseType,ClassType,Room_No,SectionName) VALUES(@CourseTitle,@CourseID,@TeacherName,@TeacherEmail,@CreditHours,@Timing,@Day,@CourseType,@ClassType,@RoomNo,@SectionName)";
            MySqlCommand^ cos = gcnew MySqlCommand(coursedata, course);
            cos->Parameters->AddWithValue("@CourseTitle", textBox1->Text);
            cos->Parameters->AddWithValue("@CourseID", textBox2->Text);
            cos->Parameters->AddWithValue("@TeacherName", textBox3->Text);
            cos->Parameters->AddWithValue("@TeacherEmail", textBox4->Text);
            cos->Parameters->AddWithValue("@CreditHours", credit);
            cos->Parameters->AddWithValue("@Timing", time);
            cos->Parameters->AddWithValue("@Day", day);
            cos->Parameters->AddWithValue("@CourseType", coursetype);
            cos->Parameters->AddWithValue("@ClassType", classtype);
            cos->Parameters->AddWithValue("@RoomNo", room);
            cos->Parameters->AddWithValue("@SectionName", section);

          
            /*String^ checkMessage = "Parameters:\n" +
                "CourseTitle: " + textBox1->Text + "\n" +
                "CourseID: " + textBox2->Text + "\n" +
                "TeacherName: " + textBox3->Text + "\n" +
                "TeacherEmail: " + textBox4->Text + "\n" +
                "CreditHours: " + credit + "\n" +
                "Timing: " + time + "\n" +
                "Day: " + day + "\n" +
                "CourseType: " + coursetype + "\n" +
                "ClassType: " + classtype + "\n" +
                "RoomNo: " + room + "\n" +
                "SectionName: " + section;
            MessageBox::Show(checkMessage, "Check Parameters list");*/

            int coursefill = cos->ExecuteNonQuery();
            if (coursefill > 0) {
                MessageBox::Show("Congratulations! You have added Course Successfully","Congratulations Message");
            }
            else {
                MessageBox::Show("Sorry, Your Course Addition Process Failed. No rows affected.","Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (MySqlException^ ss) {
            if (ss->Number == 1062) {
                MessageBox::Show("Error: A course is already scheduled at this Timing, Room Number, and Section Name.", "Scheduling Conflict!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else
            {
                MessageBox::Show("Error: " + ss->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ deo) {
            MessageBox::Show("Error: " + deo->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            course->Close();
        }
    }
    private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
        String^ roomconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ roomc = gcnew MySqlConnection(roomconnection);
        try {
            roomc->Open();
            String^ addroom = "SELECT DISTINCT RoomNumber FROM addroom";
            MySqlCommand^ geog = gcnew MySqlCommand(addroom, roomc);
            MySqlDataReader^ readog = geog->ExecuteReader();
            while (readog->Read()) {
                RoomCombo->Items->Add(readog["RoomNumber"]->ToString());
            }
        }
        catch (MySqlException^ eree) {
            MessageBox::Show("Error: " + eree->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ deo) {
            MessageBox::Show("Error: " + deo->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            if (roomc->State != ConnectionState::Closed) {
                roomc->Close();
            }
        }

        String^ dayaconnection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ dayc = gcnew MySqlConnection(dayaconnection);
        try {
            dayc->Open();
            String^ adddayc = "SELECT DISTINCT DayName FROM addday";
            MySqlCommand^dayC = gcnew MySqlCommand(adddayc,dayc);
            MySqlDataReader^ readday = dayC->ExecuteReader();
            while (readday->Read()) {
                DayCombo->Items->Add(readday["DayName"]->ToString());
            }
        }
        catch (MySqlException^ erdayd) {
            MessageBox::Show("Error: " + erdayd->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ deoday) {
            MessageBox::Show("Error: " + deoday->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            if (dayc->State != ConnectionState::Closed) {
                dayc->Close();
            }
        }
    }
          
};
}