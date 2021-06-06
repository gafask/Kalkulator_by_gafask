#pragma execution_character_set("utf-8")
#include "CalculationMainForm.h"
#include <iostream>
#include <conio.h> // для _getch()
#include <clocale> // для погдключения русской локали 

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