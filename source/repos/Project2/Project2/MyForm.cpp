#include "MyForm.h"
#include "Windows.h"
using namespace System;
using namespace System::Windows::Forms;
// Add the STA attribute before main
[STAThreadAttribute]
int main(array<String^>^ args) {
    // Enable visual styles for modern look
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create and run your form
    
    Project2::MyForm form; // Replace MyNamespace with your actual namespace
    System::Windows::Forms::Application::Run(%form);

    return 0;
}

