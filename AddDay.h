#pragma once
#include"AddDay.h"
using namespace MySql::Data::MySqlClient;
namespace UMSPROJECT1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for AddDay
    /// </summary>
    public ref class AddDay : public System::Windows::Forms::Form
    {
    public:
        AddDay(void)
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
        ~AddDay()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ Heading;
    private: System::Windows::Forms::Label^ DayNameL;
    private: System::Windows::Forms::TextBox^ DayNametxt;
    private: System::Windows::Forms::Button^ SubmitdayButton;
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
            this->Heading = (gcnew System::Windows::Forms::Label());
            this->DayNameL = (gcnew System::Windows::Forms::Label());
            this->DayNametxt = (gcnew System::Windows::Forms::TextBox());
            this->SubmitdayButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // Heading
            // 
            this->Heading->AutoSize = true;
            this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Heading->Location = System::Drawing::Point(334, 114);
            this->Heading->Name = L"Heading";
            this->Heading->Size = System::Drawing::Size(261, 66);
            this->Heading->TabIndex = 0;
            this->Heading->Text = L"ADD DAY";
            // 
            // DayNameL
            // 
            this->DayNameL->AutoSize = true;
            this->DayNameL->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DayNameL->Location = System::Drawing::Point(36, 290);
            this->DayNameL->Name = L"DayNameL";
            this->DayNameL->Size = System::Drawing::Size(192, 48);
            this->DayNameL->TabIndex = 1;
            this->DayNameL->Text = L"Day Name";
            // 
            // DayNametxt
            // 
            this->DayNametxt->BackColor = System::Drawing::SystemColors::ControlLight;
            this->DayNametxt->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DayNametxt->Location = System::Drawing::Point(234, 294);
            this->DayNametxt->Name = L"DayNametxt";
            this->DayNametxt->Size = System::Drawing::Size(614, 44);
            this->DayNametxt->TabIndex = 2;
            // 
            // SubmitdayButton
            // 
            this->SubmitdayButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->SubmitdayButton->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SubmitdayButton->Location = System::Drawing::Point(345, 435);
            this->SubmitdayButton->Name = L"SubmitdayButton";
            this->SubmitdayButton->Size = System::Drawing::Size(240, 56);
            this->SubmitdayButton->TabIndex = 3;
            this->SubmitdayButton->Text = L"Submit";
            this->SubmitdayButton->UseVisualStyleBackColor = false;
            this->SubmitdayButton->Click += gcnew System::EventHandler(this, &AddDay::SubmitdayButton_Click);
            // 
            // AddDay
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->ClientSize = System::Drawing::Size(1000, 557);
            this->Controls->Add(this->SubmitdayButton);
            this->Controls->Add(this->DayNametxt);
            this->Controls->Add(this->DayNameL);
            this->Controls->Add(this->Heading);
            this->Name = L"AddDay";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"AddDay";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void SubmitdayButton_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(DayNametxt->Text) || String::IsNullOrWhiteSpace(DayNametxt->Text)) {
            MessageBox::Show("Please enter Day", "Day!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        String^ daycoonection = "server=127.0.0.1;port=3306;user id=root;password=8787;database=ums;AllowPublicKeyRetrieval=true;SslMode=None;";
        MySqlConnection^ day = gcnew MySqlConnection(daycoonection);
        try {
            day->Open();
            String^ insertday = "INSERT INTO addday(DayName) VALUES(@DayName)";
            MySqlCommand^ dayn = gcnew MySqlCommand(insertday, day);
            dayn->Parameters->AddWithValue("@DayName", DayNametxt->Text);
            int daydone = dayn->ExecuteNonQuery();
            if (daydone > 0) {
                MessageBox::Show("Day Added Successfully", "Congratulation!", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                MessageBox::Show("Check Your Entries", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (MySqlException^ dayd) {
            if (dayd->Number == 1062) {
                MessageBox::Show("Error: A Class is already scheduled at that Day", "Scheduling Conflict!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                MessageBox::Show("Error: " + dayd->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ dayee) {
            MessageBox::Show("Error: " + dayee->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        finally {
            day->Close();
        }
    }
    };
}