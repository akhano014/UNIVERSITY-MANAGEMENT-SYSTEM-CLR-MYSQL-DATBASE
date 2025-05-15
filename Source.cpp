#include"MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UMSPROJECT1::MyForm^ form = gcnew UMSPROJECT1::MyForm();
	Application::Run(form);
	return 0;
}