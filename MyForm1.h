#pragma once
#include"MyForm2.h"
#include"MyForm3.h"
namespace UMSPROJECT1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ signin;
	private: System::Windows::Forms::Button^ reg;


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
			this->signin = (gcnew System::Windows::Forms::Button());
			this->reg = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// signin
			// 
			this->signin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->signin->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signin->Location = System::Drawing::Point(331, 729);
			this->signin->Name = L"signin";
			this->signin->Size = System::Drawing::Size(164, 64);
			this->signin->TabIndex = 0;
			this->signin->Text = L"Sign-in";
			this->signin->UseVisualStyleBackColor = false;
			this->signin->Click += gcnew System::EventHandler(this, &MyForm1::signin_Click);
			// 
			// reg
			// 
			this->reg->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->reg->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reg->Location = System::Drawing::Point(598, 729);
			this->reg->Name = L"reg";
			this->reg->Size = System::Drawing::Size(210, 64);
			this->reg->TabIndex = 1;
			this->reg->Text = L"Register";
			this->reg->UseVisualStyleBackColor = false;
			this->reg->Click += gcnew System::EventHandler(this, &MyForm1::reg_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(924, 858);
			this->Controls->Add(this->reg);
			this->Controls->Add(this->signin);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void reg_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		try
		{
			MyForm2^ registe = gcnew MyForm2();
			registe->ShowDialog();
			this->Show();
		}
		catch (Exception^ exoa) {
			MessageBox::Show("Error: " + exoa->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	private: System::Void signin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		try
		{
			MyForm3^ sign = gcnew MyForm3();
			sign->ShowDialog();
			this->Show();
		}
		catch (Exception^ exoa) {
			MessageBox::Show("Error: " + exoa->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
