#include "home.h"

using namespace game;
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<System::String^>^ args)
{

	// Enabling Windows visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew home());
	return 0;
}

