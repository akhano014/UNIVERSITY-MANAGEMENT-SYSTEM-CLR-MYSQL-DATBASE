#pragma once

namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddSection
	/// </summary>
	public ref class AddSection : public System::Windows::Forms::Form
	{
	public:
		AddSection(void)
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
		~AddSection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ SectionL;
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
			this->SectionL = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SectionL
			// 
			this->SectionL->AutoSize = true;
			this->SectionL->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionL->Location = System::Drawing::Point(424, 133);
			this->SectionL->Name = L"SectionL";
			this->SectionL->Size = System::Drawing::Size(700, 66);
			this->SectionL->TabIndex = 0;
			this->SectionL->Text = L"SECTION WISE TIME TABLE";
			// 
			// AddSection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1615, 1020);
			this->Controls->Add(this->SectionL);
			this->Name = L"AddSection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddSection";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
