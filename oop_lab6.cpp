#include "oop_lab6.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ooplab6prog::oop_lab6 form;
	Application::Run(% form);
}