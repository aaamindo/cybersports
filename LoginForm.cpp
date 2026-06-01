#include "LoginForm.h"
#include <Windows.h>
#include "Structs.h"
using namespace kurs;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew LoginForm());
    return 0;
}