#include "MyForm.h"
#include <iostream>
#include <conio.h> // ��� _getch()
#include <clocale> // ��� ������������ ������� ������ 

#include <stdio.h>  //strcat
#include <iostream>
#include <string>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main ( array<String^>^ arg )
     {

     Application::EnableVisualStyles ( );
     Application::SetCompatibleTextRenderingDefault ( false );

     test::MyForm form; 
     Application::Run ( % form );
     }