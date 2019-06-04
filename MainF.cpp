#include "MainF.h"
using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MainF MBoard;

	Application::Run(%MBoard);


	return 0;
}


