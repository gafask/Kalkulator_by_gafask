#pragma execution_character_set("utf-8")
#include "CalculationMainForm.h"
#include <iostream>
#include <conio.h> // ��� _getch()
#include <clocale> // ��� ������������ ������� ������ 

#include <stdio.h>  //strcat
#include <iostream>
#include <string>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main ()
     {

     Application::EnableVisualStyles ( );
     Application::SetCompatibleTextRenderingDefault ( true );

     test::CalculationMainForm form;
     Application::Run ( % form );
     }