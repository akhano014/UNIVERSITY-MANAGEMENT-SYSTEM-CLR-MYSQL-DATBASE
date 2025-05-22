#pragma once
#include"MyForm5.h"
#include"MyForm6.h"
#include"MyForm71.h"
#include"MyForm8.h"
#include"MyForm11.h"
#include"MyForm9.h"
#include"MyForm10.h"
#include"AddSection.h"
#include"Removesection.h"
#include"SectionWiseTT.h"
#include"AddRoom.h"
#include"Removeroom.h"
#include"RoomWIseTT.h"
#include"AddDay.h"
#include"RemoveDay.h"
#include"RoomWiseTT1.h"
namespace UMSPROJECT1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm4
    /// </summary>
    public ref class MyForm4 : public System::Windows::Forms::Form
    {
    public:
        MyForm4(void)
        {
            InitializeComponent();
            this->ClientSize = System::Drawing::Size(900, 850);
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
        ~MyForm4()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ acourse;
    private: System::Windows::Forms::Label^ removecoruse;
    private: System::Windows::Forms::Label^ ateacher;
    private: System::Windows::Forms::Label^ removeteacher;
    private: System::Windows::Forms::Label^ astudent;
    private: System::Windows::Forms::Label^ removestudent;
    private: System::Windows::Forms::Label^ TWT;
    private: System::Windows::Forms::Label^ SWT;
    private: System::Windows::Forms::Label^ RWT;
    private: System::Windows::Forms::Label^ DWT;
    private: System::Windows::Forms::Label^ choice;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Label^ ROOM;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Button^ SearchButton;

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
            this->acourse = (gcnew System::Windows::Forms::Label());
            this->removecoruse = (gcnew System::Windows::Forms::Label());
            this->ateacher = (gcnew System::Windows::Forms::Label());
            this->removeteacher = (gcnew System::Windows::Forms::Label());
            this->astudent = (gcnew System::Windows::Forms::Label());
            this->removestudent = (gcnew System::Windows::Forms::Label());
            this->TWT = (gcnew System::Windows::Forms::Label());
            this->SWT = (gcnew System::Windows::Forms::Label());
            this->RWT = (gcnew System::Windows::Forms::Label());
            this->DWT = (gcnew System::Windows::Forms::Label());
            this->choice = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->ROOM = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->SearchButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // acourse
            // 
            this->acourse->AutoSize = true;
            this->acourse->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->acourse->Location = System::Drawing::Point(82, 72);
            this->acourse->Name = L"acourse";
            this->acourse->Size = System::Drawing::Size(281, 48);
            this->acourse->TabIndex = 0;
            this->acourse->Text = L"1. ADD COURSE";
            // 
            // removecoruse
            // 
            this->removecoruse->AutoSize = true;
            this->removecoruse->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->removecoruse->Location = System::Drawing::Point(82, 137);
            this->removecoruse->Name = L"removecoruse";
            this->removecoruse->Size = System::Drawing::Size(363, 48);
            this->removecoruse->TabIndex = 1;
            this->removecoruse->Text = L"2. REMOVE COURSE";
            // 
            // ateacher
            // 
            this->ateacher->AutoSize = true;
            this->ateacher->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ateacher->Location = System::Drawing::Point(82, 207);
            this->ateacher->Name = L"ateacher";
            this->ateacher->Size = System::Drawing::Size(309, 48);
            this->ateacher->TabIndex = 2;
            this->ateacher->Text = L"3. ADD TEACHER";
            // 
            // removeteacher
            // 
            this->removeteacher->AutoSize = true;
            this->removeteacher->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->removeteacher->Location = System::Drawing::Point(82, 276);
            this->removeteacher->Name = L"removeteacher";
            this->removeteacher->Size = System::Drawing::Size(388, 48);
            this->removeteacher->TabIndex = 3;
            this->removeteacher->Text = L"4. REMOVE TEACHER";
            // 
            // astudent
            // 
            this->astudent->AutoSize = true;
            this->astudent->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->astudent->Location = System::Drawing::Point(82, 420);
            this->astudent->Name = L"astudent";
            this->astudent->Size = System::Drawing::Size(311, 48);
            this->astudent->TabIndex = 4;
            this->astudent->Text = L"6. ADD STUDENT";
            // 
            // removestudent
            // 
            this->removestudent->AutoSize = true;
            this->removestudent->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->removestudent->Location = System::Drawing::Point(82, 491);
            this->removestudent->Name = L"removestudent";
            this->removestudent->Size = System::Drawing::Size(387, 48);
            this->removestudent->TabIndex = 5;
            this->removestudent->Text = L"7. REMOVE STUDENT";
            // 
            // TWT
            // 
            this->TWT->AutoSize = true;
            this->TWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TWT->Location = System::Drawing::Point(82, 344);
            this->TWT->Name = L"TWT";
            this->TWT->Size = System::Drawing::Size(550, 48);
            this->TWT->TabIndex = 6;
            this->TWT->Text = L"5. TEACHER WISE TIME TABLE";
            // 
            // SWT
            // 
            this->SWT->AutoSize = true;
            this->SWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SWT->Location = System::Drawing::Point(82, 721);
            this->SWT->Name = L"SWT";
            this->SWT->Size = System::Drawing::Size(557, 48);
            this->SWT->TabIndex = 7;
            this->SWT->Text = L"10. SECTION WISE TIME TABLE";
            // 
            // RWT
            // 
            this->RWT->AutoSize = true;
            this->RWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->RWT->Location = System::Drawing::Point(82, 949);
            this->RWT->Name = L"RWT";
            this->RWT->Size = System::Drawing::Size(508, 48);
            this->RWT->TabIndex = 8;
            this->RWT->Text = L"13. ROOM WISE TIME TABLE";
            // 
            // DWT
            // 
            this->DWT->AutoSize = true;
            this->DWT->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DWT->Location = System::Drawing::Point(82, 1168);
            this->DWT->Name = L"DWT";
            this->DWT->Size = System::Drawing::Size(470, 48);
            this->DWT->TabIndex = 9;
            this->DWT->Text = L"16. DAY WISE TIME TABLE";
            // 
            // choice
            // 
            this->choice->AutoSize = true;
            this->choice->Font = (gcnew System::Drawing::Font(L"Sitka Small", 14, System::Drawing::FontStyle::Bold));
            this->choice->Location = System::Drawing::Point(161, 1496);
            this->choice->Name = L"choice";
            this->choice->Size = System::Drawing::Size(398, 57);
            this->choice->TabIndex = 10;
            this->choice->Text = L"Select Your Choice";
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(19) {
                L"1.ADD COURSE", L"2.REMOVE COURSE", L"3.ADD TEACHER",
                    L"4.REMOVE TEACHER", L"5.TEACHER WISE TIME TABLE", L"6.ADD STUDENT", L"7.REMOVE STUDENT", L"8.ADD SECTION", L"9.REMOVE SECTION",
                    L"10.SECTION WISE TIME TABLE", L"11.ADD ROOM", L"12.REMOVE ROOM", L"13.ROOM WISE TIME TABLE", L"14.ADD DAY", L"15.REMOVE DAY",
                    L"16.DAY WISE TIME TABLE", L"17.VIEW ALL COURSES", L"18.VIEW ALL TEACHERS", L"19.VIEW ALL STUDENTS"
            });
            this->comboBox1->Location = System::Drawing::Point(565, 1507);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(854, 56);
            this->comboBox1->TabIndex = 11;
            // 
            // ROOM
            // 
            this->ROOM->AutoSize = true;
            this->ROOM->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ROOM->Location = System::Drawing::Point(82, 795);
            this->ROOM->Name = L"ROOM";
            this->ROOM->Size = System::Drawing::Size(263, 48);
            this->ROOM->TabIndex = 13;
            this->ROOM->Text = L"11. ADD ROOM";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(82, 568);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(300, 48);
            this->label1->TabIndex = 14;
            this->label1->Text = L"8. ADD SECTION";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(82, 1247);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(417, 48);
            this->label2->TabIndex = 15;
            this->label2->Text = L"17. VIEW ALL COURSES";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(82, 1325);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(444, 48);
            this->label3->TabIndex = 16;
            this->label3->Text = L"18. VIEW ALL TEACHERS";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(82, 1397);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(444, 48);
            this->label4->TabIndex = 17;
            this->label4->Text = L"19. VIEW ALL STUDENTS";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(82, 640);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(377, 48);
            this->label5->TabIndex = 18;
            this->label5->Text = L"9. REMOVE SECTION";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(82, 873);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(345, 48);
            this->label6->TabIndex = 19;
            this->label6->Text = L"12. REMOVE ROOM";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(82, 1025);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(229, 48);
            this->label7->TabIndex = 20;
            this->label7->Text = L"14. ADD DAY";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(82, 1102);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(306, 48);
            this->label8->TabIndex = 21;
            this->label8->Text = L"15. REMOVE DAY";
            // 
            // SearchButton
            // 
            this->SearchButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->SearchButton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SearchButton->Location = System::Drawing::Point(1469, 1503);
            this->SearchButton->Name = L"SearchButton";
            this->SearchButton->Size = System::Drawing::Size(192, 60);
            this->SearchButton->TabIndex = 22;
            this->SearchButton->Text = L"SEARCH";
            this->SearchButton->UseVisualStyleBackColor = false;
            this->SearchButton->Click += gcnew System::EventHandler(this, &MyForm4::SearchButton_Click);
            // 
            // MyForm4
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->ClientSize = System::Drawing::Size(1728, 1597);
            this->Controls->Add(this->SearchButton);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->ROOM);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->choice);
            this->Controls->Add(this->DWT);
            this->Controls->Add(this->RWT);
            this->Controls->Add(this->SWT);
            this->Controls->Add(this->TWT);
            this->Controls->Add(this->removestudent);
            this->Controls->Add(this->astudent);
            this->Controls->Add(this->removeteacher);
            this->Controls->Add(this->ateacher);
            this->Controls->Add(this->removecoruse);
            this->Controls->Add(this->acourse);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"MyForm4";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"ADMIN CHOICES";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ combo = comboBox1->SelectedItem ? comboBox1->SelectedItem->ToString() : nullptr;
        if (String::IsNullOrEmpty(combo)) {
            MessageBox::Show("Please select option", "Choice Selection!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (combo == "1.ADD COURSE") {
            this->Hide();
            try {
                MyForm5^ course = gcnew MyForm5();
                course->ShowDialog();
                this->Show();
            }
            catch (Exception^ ede) {
                MessageBox::Show("Error: " + ede->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "2.REMOVE COURSE") {
            this->Hide();
            try {
                MyForm6^ remove = gcnew MyForm6();
                remove->ShowDialog();
                this->Show();
            }
            catch (Exception^ exo) {
                MessageBox::Show("Error: " + exo->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "3.ADD TEACHER") {
            this->Hide();
            try {
                MyForm7^ removea = gcnew MyForm7();
                removea->ShowDialog();
                this->Show();
            }
            catch (Exception^ exoa) {
                MessageBox::Show("Error: " + exoa->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "4.REMOVE TEACHER") {
            this->Hide();
            try {
                MyForm8^ removet = gcnew MyForm8();
                removet->ShowDialog();
                this->Show();
            }
            catch (Exception^ exoat) {
                MessageBox::Show("Error: " + exoat->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "5.TEACHER WISE TIME TABLE") {
            this->Hide();
            try {
                MyForm11^ teacherw = gcnew MyForm11();
                teacherw->ShowDialog();
                this->Show();
            }
            catch (Exception^ twise) {
                MessageBox::Show("Error: " + twise->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "6.ADD STUDENT") {
            this->Hide();
            try {
                MyForm9^ student = gcnew MyForm9();
                student->ShowDialog();
                this->Show();
            }
            catch (Exception^ studentError) {
                MessageBox::Show("Error: " + studentError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "7.REMOVE STUDENT") {
            this->Hide();
            try {
                MyForm10^ removeStudent = gcnew MyForm10();
                removeStudent->ShowDialog();
                this->Show();
            }
            catch (Exception^ removeStudentError) {
                MessageBox::Show("Error: " + removeStudentError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "8.ADD SECTION") {
            this->Hide();
            try {
                AddSection^ section = gcnew AddSection();
                section->ShowDialog();
                this->Show();
            }
            catch (Exception^ sectionError) {
                MessageBox::Show("Error: " + sectionError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "9.REMOVE SECTION") {
            this->Hide();
            try {
                Removesection^ removesection = gcnew Removesection();
                removesection->ShowDialog();
                this->Show();
            }
            catch (Exception^ removeSectionError) {
                MessageBox::Show("Error: " + removeSectionError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "10.SECTION WISE TIME TABLE") {
            this->Hide();
            try {
                SectionWiseTT^ sectionTT = gcnew SectionWiseTT();
                sectionTT->ShowDialog();
                this->Show();
            }
            catch (Exception^ sectionTTError) {
                MessageBox::Show("Error: " + sectionTTError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "11.ADD ROOM") {
            this->Hide();
            try {
                AddRoom^ room = gcnew AddRoom();
                room->ShowDialog();
                this->Show();
            }
            catch (Exception^ roomError) {
                MessageBox::Show("Error: " + roomError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "12.REMOVE ROOM") {
            this->Hide();
            try {
                Removeroom^ removeroo = gcnew Removeroom();
                removeroo->ShowDialog();
                this->Show();
            }
            catch (Exception^ removeRoomError) {
                MessageBox::Show("Error: " + removeRoomError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "13.ROOM WISE TIME TABLE") {
            this->Hide();
            try {
                RoomWIseTT^ roomTT = gcnew RoomWIseTT();
                roomTT->ShowDialog();
                this->Show();
            }
            catch (Exception^ roomTTError) {
                MessageBox::Show("Error: " + roomTTError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "14.ADD DAY") {
            this->Hide();
            try {
                AddDay^ day = gcnew AddDay();
                day->ShowDialog();
                this->Show();
            }
            catch (Exception^ addDayError) {
                MessageBox::Show("Error: " + addDayError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "15.REMOVE DAY") {
            this->Hide();
            try {
                RemoveDay^ removeday = gcnew RemoveDay();
                removeday->ShowDialog();
                this->Show();
            }
            catch (Exception^ removeDayError) {
                MessageBox::Show("Error: " + removeDayError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        if (combo == "16.DAY WISE TIME TABLE") {
            this->Hide();
            try {
                RoomWiseTT^ daywise = gcnew RoomWiseTT();
                daywise->ShowDialog();
                this->Show();
            }
            catch (Exception^ dayTTError) {
                MessageBox::Show("Error: " + dayTTError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        //if (combo == "17.VIEW ALL COURSES") {
        //    this->Hide();
        //    try {
        //        // Assuming a form for VIEW ALL COURSES (not provided, placeholder)
        //        // You need to create or include the appropriate form
        //        MessageBox::Show("VIEW ALL COURSES functionality not implemented yet.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
        //        this->Show();
        //    }
        //    catch (Exception^ viewCoursesError) {
        //        MessageBox::Show("Error: " + viewCoursesError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        //    }
        //}
        //if (combo == "18.VIEW ALL TEACHERS") {
        //    this->Hide();
        //    try {
        //        // Assuming a form for VIEW ALL TEACHERS (not provided, placeholder)
        //        // You need to create or include the appropriate form
        //        MessageBox::Show("VIEW ALL TEACHERS functionality not implemented yet.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
        //        this->Show();
        //    }
        //    catch (Exception^ viewTeachersError) {
        //        MessageBox::Show("Error: " + viewTeachersError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        //    }
        //}
        //if (combo == "19.VIEW ALL STUDENTS") {
        //    this->Hide();
        //    try {
        //        // Assuming a form for VIEW ALL STUDENTS (not provided, placeholder)
        //        // You need to create or include the appropriate form
        //        MessageBox::Show("VIEW ALL STUDENTS functionality not implemented yet.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
        //        this->Show();
        //    }
        //    catch (Exception^ viewStudentsError) {
        //        MessageBox::Show("Error: " + viewStudentsError->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        //    }
        //}
    }
    };
}