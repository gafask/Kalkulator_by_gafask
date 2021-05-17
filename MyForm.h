#pragma once
#include <iostream>
#include <conio.h> // для _getch()
#include <clocale> // для погдключения русской локали 
#include <stdio.h>  //strcat
#include <iostream>
#include <string>
#include <windows.h>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <atlstr.h>
#include <vcclr.h>
namespace test
	 {
	 using namespace msclr::interop;
	 using namespace System;
	 using namespace System::ComponentModel;
	 using namespace System::Collections;
	 using namespace System::Windows::Forms;
	 using namespace System::Data;
	 using namespace System::Drawing;

	 using namespace System::Runtime::InteropServices;

	 
	 /// <summary>
	 /// Сводка для MyForm
	 /// </summary>
	 public ref class MyForm : public System::Windows::Forms::Form
		  {
			   public:
			   MyForm ( void )
					{
					InitializeComponent ( );
					//
					//TODO: добавьте код конструктора
					//
					}

			   protected:
				   /// <summary>
				   /// Освободить все используемые ресурсы.
				   /// </summary>
			   ~MyForm ( )
					{
					if ( components )
						 {
						 delete components;
						 }
					}
			   public: System::Windows::Forms::Button^ Ymnogit;
			   public: System::Windows::Forms::Button^ Rasdelit;
			   protected:

			   public: System::Windows::Forms::Button^ Minys;
			   public: System::Windows::Forms::Button^ Plus;
			   public: System::Windows::Forms::Button^ Nol;
			   public: System::Windows::Forms::TextBox^ Otvet;

			   public: System::Windows::Forms::Button^ Devat;
			   public: System::Windows::Forms::Button^ Vosem;
			   public: System::Windows::Forms::Button^ Sem;
			   public: System::Windows::Forms::Button^ Shest;
			   public: System::Windows::Forms::Button^ Piat;
			   public: System::Windows::Forms::Button^ Chetiri;
			   public: System::Windows::Forms::Button^ Tri;
			   public: System::Windows::Forms::Button^ Dva;
			   public: System::Windows::Forms::Button^ Odin;
			   public: System::Windows::Forms::PictureBox^ pictureBox1;
			   public: System::Windows::Forms::Button^ Ravno;
			   public: System::Windows::Forms::TextBox^ Primer1;
			   public: System::Windows::Forms::Button^ Steret1;


			   public: System::Windows::Forms::PictureBox^ pictureBox2;
			   public: System::Windows::Forms::TextBox^ Deistvie;
			   public: System::Windows::Forms::TextBox^ Primer2;
			   public: System::Windows::Forms::Button^ Steret2;
			   public: System::Windows::Forms::Button^ Steret3;








			   public:


			   protected:
















			   private:
				   /// <summary>
				   /// Обязательная переменная конструктора.
				   /// </summary>
			   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
			   void InitializeComponent ( void )
					{
					System::ComponentModel::ComponentResourceManager^ resources = ( gcnew System::ComponentModel::ComponentResourceManager ( MyForm::typeid ) );
					this->Ymnogit = ( gcnew System::Windows::Forms::Button ( ) );
					this->Rasdelit = ( gcnew System::Windows::Forms::Button ( ) );
					this->Minys = ( gcnew System::Windows::Forms::Button ( ) );
					this->Plus = ( gcnew System::Windows::Forms::Button ( ) );
					this->Nol = ( gcnew System::Windows::Forms::Button ( ) );
					this->Otvet = ( gcnew System::Windows::Forms::TextBox ( ) );
					this->Devat = ( gcnew System::Windows::Forms::Button ( ) );
					this->Vosem = ( gcnew System::Windows::Forms::Button ( ) );
					this->Sem = ( gcnew System::Windows::Forms::Button ( ) );
					this->Shest = ( gcnew System::Windows::Forms::Button ( ) );
					this->Piat = ( gcnew System::Windows::Forms::Button ( ) );
					this->Chetiri = ( gcnew System::Windows::Forms::Button ( ) );
					this->Tri = ( gcnew System::Windows::Forms::Button ( ) );
					this->Dva = ( gcnew System::Windows::Forms::Button ( ) );
					this->Odin = ( gcnew System::Windows::Forms::Button ( ) );
					this->pictureBox1 = ( gcnew System::Windows::Forms::PictureBox ( ) );
					this->Ravno = ( gcnew System::Windows::Forms::Button ( ) );
					this->Primer1 = ( gcnew System::Windows::Forms::TextBox ( ) );
					this->Steret1 = ( gcnew System::Windows::Forms::Button ( ) );
					this->pictureBox2 = ( gcnew System::Windows::Forms::PictureBox ( ) );
					this->Deistvie = ( gcnew System::Windows::Forms::TextBox ( ) );
					this->Primer2 = ( gcnew System::Windows::Forms::TextBox ( ) );
					this->Steret2 = ( gcnew System::Windows::Forms::Button ( ) );
					this->Steret3 = ( gcnew System::Windows::Forms::Button ( ) );
					( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox1 ) )->BeginInit ( );
					( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox2 ) )->BeginInit ( );
					this->SuspendLayout ( );
					// 
					// Ymnogit
					// 
					this->Ymnogit->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
					this->Ymnogit->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Ymnogit.BackgroundImage" ) ) );
					this->Ymnogit->Font = ( gcnew System::Drawing::Font ( L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		  static_cast< System::Byte >( 204 ) ) );
					this->Ymnogit->ForeColor = System::Drawing::Color::Maroon;
					this->Ymnogit->Location = System::Drawing::Point ( 223, 117 );
					this->Ymnogit->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Ymnogit->Name = L"Ymnogit";
					this->Ymnogit->Size = System::Drawing::Size ( 63, 59 );
					this->Ymnogit->TabIndex = 35;
					this->Ymnogit->Text = L"*";
					this->Ymnogit->UseVisualStyleBackColor = false;
					this->Ymnogit->Click += gcnew System::EventHandler ( this, &MyForm::Ymnogit_Click );
					// 
					// Rasdelit
					// 
					this->Rasdelit->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Rasdelit.BackgroundImage" ) ) );
					this->Rasdelit->Font = ( gcnew System::Drawing::Font ( L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		   static_cast< System::Byte >( 204 ) ) );
					this->Rasdelit->ForeColor = System::Drawing::SystemColors::WindowText;
					this->Rasdelit->Location = System::Drawing::Point ( 152, 117 );
					this->Rasdelit->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Rasdelit->Name = L"Rasdelit";
					this->Rasdelit->Size = System::Drawing::Size ( 63, 59 );
					this->Rasdelit->TabIndex = 34;
					this->Rasdelit->Text = L"/";
					this->Rasdelit->UseVisualStyleBackColor = true;
					this->Rasdelit->Click += gcnew System::EventHandler ( this, &MyForm::Rasdelit_Click );
					// 
					// Minys
					// 
					this->Minys->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Minys.BackgroundImage" ) ) );
					this->Minys->Font = ( gcnew System::Drawing::Font ( L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast< System::Byte >( 204 ) ) );
					this->Minys->ForeColor = System::Drawing::SystemColors::WindowText;
					this->Minys->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Minys.Image" ) ) );
					this->Minys->Location = System::Drawing::Point ( 81, 117 );
					this->Minys->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Minys->Name = L"Minys";
					this->Minys->Size = System::Drawing::Size ( 63, 59 );
					this->Minys->TabIndex = 33;
					this->Minys->UseVisualStyleBackColor = true;
					this->Minys->Click += gcnew System::EventHandler ( this, &MyForm::Minys_Click );
					// 
					// Plus
					// 
					this->Plus->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Plus.BackgroundImage" ) ) );
					this->Plus->Font = ( gcnew System::Drawing::Font ( L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	   static_cast< System::Byte >( 204 ) ) );
					this->Plus->ForeColor = System::Drawing::SystemColors::WindowText;
					this->Plus->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Plus.Image" ) ) );
					this->Plus->Location = System::Drawing::Point ( 9, 117 );
					this->Plus->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Plus->Name = L"Plus";
					this->Plus->Size = System::Drawing::Size ( 63, 59 );
					this->Plus->TabIndex = 32;
					this->Plus->UseVisualStyleBackColor = true;
					this->Plus->Click += gcnew System::EventHandler ( this, &MyForm::Plus_Click );
					// 
					// Nol
					// 
					this->Nol->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast< System::Byte >( 204 ) ) );
					this->Nol->ForeColor = System::Drawing::Color::BlanchedAlmond;
					this->Nol->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Nol.Image" ) ) );
					this->Nol->Location = System::Drawing::Point ( 112, 386 );
					this->Nol->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Nol->Name = L"Nol";
					this->Nol->Size = System::Drawing::Size ( 63, 46 );
					this->Nol->TabIndex = 31;
					this->Nol->Text = L"0";
					this->Nol->UseVisualStyleBackColor = true;
					this->Nol->Click += gcnew System::EventHandler ( this, &MyForm::Nol_Click );
					// 
					// Otvet
					// 
					this->Otvet->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast< System::Byte >( 204 ) ) );
					this->Otvet->Location = System::Drawing::Point ( 13, 69 );
					this->Otvet->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Otvet->Name = L"Otvet";
					this->Otvet->Size = System::Drawing::Size ( 269, 38 );
					this->Otvet->TabIndex = 30;
					this->Otvet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					// 
					// Devat
					// 
					this->Devat->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast< System::Byte >( 204 ) ) );
					this->Devat->ForeColor = System::Drawing::Color::BlanchedAlmond;
					this->Devat->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Devat.Image" ) ) );
					this->Devat->Location = System::Drawing::Point ( 183, 335 );
					this->Devat->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Devat->Name = L"Devat";
					this->Devat->Size = System::Drawing::Size ( 63, 45 );
					this->Devat->TabIndex = 29;
					this->Devat->Text = L"9";
					this->Devat->UseVisualStyleBackColor = true;
					this->Devat->Click += gcnew System::EventHandler ( this, &MyForm::Devat_Click );
					// 
					// Vosem
					// 
					this->Vosem->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast< System::Byte >( 204 ) ) );
					this->Vosem->ForeColor = System::Drawing::Color::BlanchedAlmond;
					this->Vosem->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Vosem.Image" ) ) );
					this->Vosem->Location = System::Drawing::Point ( 112, 335 );
					this->Vosem->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Vosem->Name = L"Vosem";
					this->Vosem->Size = System::Drawing::Size ( 63, 45 );
					this->Vosem->TabIndex = 28;
					this->Vosem->Text = L"8";
					this->Vosem->UseVisualStyleBackColor = true;
					this->Vosem->Click += gcnew System::EventHandler ( this, &MyForm::Vosem_Click );
					// 
					// Sem
					// 
					this->Sem->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast< System::Byte >( 204 ) ) );
					this->Sem->ForeColor = System::Drawing::Color::BlanchedAlmond;
					this->Sem->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Sem.Image" ) ) );
					this->Sem->Location = System::Drawing::Point ( 41, 335 );
					this->Sem->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Sem->Name = L"Sem";
					this->Sem->Size = System::Drawing::Size ( 63, 45 );
					this->Sem->TabIndex = 27;
					this->Sem->Text = L"7";
					this->Sem->UseVisualStyleBackColor = true;
					this->Sem->Click += gcnew System::EventHandler ( this, &MyForm::Sem_Click );
					// 
					// Shest
					// 
					this->Shest->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast< System::Byte >( 204 ) ) );
					this->Shest->ForeColor = System::Drawing::Color::WhiteSmoke;
					this->Shest->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Shest.Image" ) ) );
					this->Shest->Location = System::Drawing::Point ( 183, 284 );
					this->Shest->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Shest->Name = L"Shest";
					this->Shest->Size = System::Drawing::Size ( 63, 45 );
					this->Shest->TabIndex = 26;
					this->Shest->Text = L"6";
					this->Shest->UseVisualStyleBackColor = true;
					this->Shest->Click += gcnew System::EventHandler ( this, &MyForm::Shest_Click );
					// 
					// Piat
					// 
					this->Piat->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	   static_cast< System::Byte >( 204 ) ) );
					this->Piat->ForeColor = System::Drawing::Color::Azure;
					this->Piat->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Piat.Image" ) ) );
					this->Piat->Location = System::Drawing::Point ( 112, 284 );
					this->Piat->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Piat->Name = L"Piat";
					this->Piat->Size = System::Drawing::Size ( 63, 45 );
					this->Piat->TabIndex = 25;
					this->Piat->Text = L"5";
					this->Piat->UseVisualStyleBackColor = true;
					this->Piat->Click += gcnew System::EventHandler ( this, &MyForm::Piat_Click );
					// 
					// Chetiri
					// 
					this->Chetiri->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		  static_cast< System::Byte >( 204 ) ) );
					this->Chetiri->ForeColor = System::Drawing::Color::Bisque;
					this->Chetiri->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Chetiri.Image" ) ) );
					this->Chetiri->Location = System::Drawing::Point ( 41, 284 );
					this->Chetiri->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Chetiri->Name = L"Chetiri";
					this->Chetiri->Size = System::Drawing::Size ( 63, 45 );
					this->Chetiri->TabIndex = 24;
					this->Chetiri->Text = L"4";
					this->Chetiri->UseVisualStyleBackColor = true;
					this->Chetiri->Click += gcnew System::EventHandler ( this, &MyForm::Chetiri_Click );
					// 
					// Tri
					// 
					this->Tri->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast< System::Byte >( 204 ) ) );
					this->Tri->ForeColor = System::Drawing::Color::Brown;
					this->Tri->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Tri.Image" ) ) );
					this->Tri->Location = System::Drawing::Point ( 183, 233 );
					this->Tri->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Tri->Name = L"Tri";
					this->Tri->Size = System::Drawing::Size ( 63, 45 );
					this->Tri->TabIndex = 23;
					this->Tri->Text = L"3";
					this->Tri->UseVisualStyleBackColor = true;
					this->Tri->Click += gcnew System::EventHandler ( this, &MyForm::Tri_Click );
					// 
					// Dva
					// 
					this->Dva->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast< System::Byte >( 204 ) ) );
					this->Dva->ForeColor = System::Drawing::Color::Bisque;
					this->Dva->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Dva.Image" ) ) );
					this->Dva->Location = System::Drawing::Point ( 112, 233 );
					this->Dva->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Dva->Name = L"Dva";
					this->Dva->Size = System::Drawing::Size ( 63, 45 );
					this->Dva->TabIndex = 22;
					this->Dva->Text = L"2";
					this->Dva->UseVisualStyleBackColor = true;
					this->Dva->Click += gcnew System::EventHandler ( this, &MyForm::Dva_Click );
					// 
					// Odin
					// 
					this->Odin->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	   static_cast< System::Byte >( 204 ) ) );
					this->Odin->ForeColor = System::Drawing::Color::Bisque;
					this->Odin->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Odin.Image" ) ) );
					this->Odin->Location = System::Drawing::Point ( 41, 233 );
					this->Odin->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Odin->Name = L"Odin";
					this->Odin->Size = System::Drawing::Size ( 63, 45 );
					this->Odin->TabIndex = 21;
					this->Odin->Text = L"1";
					this->Odin->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
					this->Odin->UseVisualStyleBackColor = true;
					this->Odin->Click += gcnew System::EventHandler ( this, &MyForm::Odin_Click );
					// 
					// pictureBox1
					// 
					this->pictureBox1->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox1.BackgroundImage" ) ) );
					this->pictureBox1->ErrorImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox1.ErrorImage" ) ) );
					this->pictureBox1->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox1.Image" ) ) );
					this->pictureBox1->InitialImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox1.InitialImage" ) ) );
					this->pictureBox1->Location = System::Drawing::Point ( -2, -8 );
					this->pictureBox1->Name = L"pictureBox1";
					this->pictureBox1->Size = System::Drawing::Size ( 303, 491 );
					this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					this->pictureBox1->TabIndex = 36;
					this->pictureBox1->TabStop = false;
					// 
					// Ravno
					// 
					this->Ravno->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast< System::Byte >( 204 ) ) );
					this->Ravno->ForeColor = System::Drawing::Color::Bisque;
					this->Ravno->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Ravno.Image" ) ) );
					this->Ravno->Location = System::Drawing::Point ( 41, 182 );
					this->Ravno->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Ravno->Name = L"Ravno";
					this->Ravno->Size = System::Drawing::Size ( 205, 45 );
					this->Ravno->TabIndex = 37;
					this->Ravno->Text = L"=";
					this->Ravno->UseVisualStyleBackColor = true;
					this->Ravno->Click += gcnew System::EventHandler ( this, &MyForm::Ravno_Click );
					// 
					// Primer1
					// 
					this->Primer1->BackColor = System::Drawing::SystemColors::ButtonShadow;
					this->Primer1->Cursor = System::Windows::Forms::Cursors::No;
					this->Primer1->Enabled = false;
					this->Primer1->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast< System::Byte >( 204 ) ) );
					this->Primer1->ForeColor = System::Drawing::SystemColors::WindowFrame;
					this->Primer1->Location = System::Drawing::Point ( 9, 4 );
					this->Primer1->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Primer1->Name = L"Primer1";
					this->Primer1->Size = System::Drawing::Size ( 115, 38 );
					this->Primer1->TabIndex = 38;
					this->Primer1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					// 
					// Steret1
					// 
					this->Steret1->BackColor = System::Drawing::SystemColors::ButtonShadow;
					this->Steret1->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		  static_cast< System::Byte >( 204 ) ) );
					this->Steret1->ForeColor = System::Drawing::Color::SpringGreen;
					this->Steret1->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Steret1.Image" ) ) );
					this->Steret1->Location = System::Drawing::Point ( 41, 386 );
					this->Steret1->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Steret1->Name = L"Steret1";
					this->Steret1->Size = System::Drawing::Size ( 63, 45 );
					this->Steret1->TabIndex = 39;
					this->Steret1->Text = L">";
					this->Steret1->UseVisualStyleBackColor = false;
					this->Steret1->Click += gcnew System::EventHandler ( this, &MyForm::Steret_Click );
					// 
					// pictureBox2
					// 
					this->pictureBox2->BackColor = System::Drawing::Color::Aquamarine;
					this->pictureBox2->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox2.BackgroundImage" ) ) );
					this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
					this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Default;
					this->pictureBox2->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox2.Image" ) ) );
					this->pictureBox2->InitialImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox2.InitialImage" ) ) );
					this->pictureBox2->Location = System::Drawing::Point ( 112, 42 );
					this->pictureBox2->Name = L"pictureBox2";
					this->pictureBox2->Size = System::Drawing::Size ( 63, 27 );
					this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					this->pictureBox2->TabIndex = 40;
					this->pictureBox2->TabStop = false;
					// 
					// Deistvie
					// 
					this->Deistvie->BackColor = System::Drawing::SystemColors::ButtonShadow;
					this->Deistvie->Cursor = System::Windows::Forms::Cursors::No;
					this->Deistvie->Enabled = false;
					this->Deistvie->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		   static_cast< System::Byte >( 204 ) ) );
					this->Deistvie->ForeColor = System::Drawing::SystemColors::WindowFrame;
					this->Deistvie->Location = System::Drawing::Point ( 122, 4 );
					this->Deistvie->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Deistvie->Name = L"Deistvie";
					this->Deistvie->Size = System::Drawing::Size ( 44, 38 );
					this->Deistvie->TabIndex = 41;
					this->Deistvie->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					// 
					// Primer2
					// 
					this->Primer2->BackColor = System::Drawing::SystemColors::ButtonShadow;
					this->Primer2->Cursor = System::Windows::Forms::Cursors::No;
					this->Primer2->Enabled = false;
					this->Primer2->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast< System::Byte >( 204 ) ) );
					this->Primer2->ForeColor = System::Drawing::SystemColors::WindowFrame;
					this->Primer2->Location = System::Drawing::Point ( 165, 4 );
					this->Primer2->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Primer2->Name = L"Primer2";
					this->Primer2->Size = System::Drawing::Size ( 117, 38 );
					this->Primer2->TabIndex = 42;
					this->Primer2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					// 
					// Steret2
					// 
					this->Steret2->BackColor = System::Drawing::SystemColors::ButtonShadow;
					this->Steret2->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		  static_cast< System::Byte >( 204 ) ) );
					this->Steret2->ForeColor = System::Drawing::Color::SpringGreen;
					this->Steret2->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Steret2.Image" ) ) );
					this->Steret2->Location = System::Drawing::Point ( 183, 386 );
					this->Steret2->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Steret2->Name = L"Steret2";
					this->Steret2->Size = System::Drawing::Size ( 63, 45 );
					this->Steret2->TabIndex = 43;
					this->Steret2->Text = L"<";
					this->Steret2->UseVisualStyleBackColor = false;
					this->Steret2->Click += gcnew System::EventHandler ( this, &MyForm::Steret2_Click );
					// 
					// Steret3
					// 
					this->Steret3->BackColor = System::Drawing::SystemColors::ButtonShadow;
					this->Steret3->Font = ( gcnew System::Drawing::Font ( L"Yu Gothic UI Semibold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		  static_cast< System::Byte >( 204 ) ) );
					this->Steret3->ForeColor = System::Drawing::Color::SpringGreen;
					this->Steret3->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"Steret3.Image" ) ) );
					this->Steret3->Location = System::Drawing::Point ( 112, 438 );
					this->Steret3->Margin = System::Windows::Forms::Padding ( 4, 3, 4, 3 );
					this->Steret3->Name = L"Steret3";
					this->Steret3->Size = System::Drawing::Size ( 63, 45 );
					this->Steret3->TabIndex = 44;
					this->Steret3->Text = L"-";
					this->Steret3->UseVisualStyleBackColor = false;
					this->Steret3->Click += gcnew System::EventHandler ( this, &MyForm::Steret3_Click );
					// 
					// MyForm
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"$this.BackgroundImage" ) ) );
					this->ClientSize = System::Drawing::Size ( 295, 482 );
					this->Controls->Add ( this->Steret3 );
					this->Controls->Add ( this->Steret2 );
					this->Controls->Add ( this->Primer2 );
					this->Controls->Add ( this->Deistvie );
					this->Controls->Add ( this->pictureBox2 );
					this->Controls->Add ( this->Steret1 );
					this->Controls->Add ( this->Primer1 );
					this->Controls->Add ( this->Ravno );
					this->Controls->Add ( this->Ymnogit );
					this->Controls->Add ( this->Rasdelit );
					this->Controls->Add ( this->Minys );
					this->Controls->Add ( this->Plus );
					this->Controls->Add ( this->Nol );
					this->Controls->Add ( this->Otvet );
					this->Controls->Add ( this->Devat );
					this->Controls->Add ( this->Vosem );
					this->Controls->Add ( this->Sem );
					this->Controls->Add ( this->Shest );
					this->Controls->Add ( this->Piat );
					this->Controls->Add ( this->Chetiri );
					this->Controls->Add ( this->Tri );
					this->Controls->Add ( this->Dva );
					this->Controls->Add ( this->Odin );
					this->Controls->Add ( this->pictureBox1 );
					this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
					this->Icon = ( cli::safe_cast< System::Drawing::Icon^ >( resources->GetObject ( L"$this.Icon" ) ) );
					this->Name = L"MyForm";
					this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
					this->Text = L"Калькулятор by gafask";
					this->TransparencyKey = System::Drawing::Color::Red;
					this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
					( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox1 ) )->EndInit ( );
					( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox2 ) )->EndInit ( );
					this->ResumeLayout ( false );
					this->PerformLayout ( );

					}
#pragma endregion
					//
					System::String^ otvets= "";
					System::String^ primerss = "";
					System::String^ Vtoroe_chislo = "";
					System::String^ Pervoe_chislo = "";
					bool if_rovno_1 = false;
					bool if_rovno_2 = false;
					bool if_vtoroe_chislo = false;
					bool povtornoe_nagatie_deisvia = false;
					bool nagatie_deisvia = false;
					bool pluss;
					bool minuss;
					bool Umnogitt;
					bool Razdelitt;
					bool obnulenie_primerss = false;
					//




	 private: System::Void Odin_Click ( System::Object^ sender, System::EventArgs^ e )
					{
					if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
						 {
						 povtornoe_nagatie_deisvia = false;
						 }
					if( if_vtoroe_chislo == true)
						 {
						 if_rovno_2 = true;
						 }
					if_rovno_1 = true;
					if ( obnulenie_primerss == true )
						 {
						 primerss = "";
						 Primer1->Text = System::Convert::ToString ( primerss );//Пример
						 Primer2->Text = System::Convert::ToString ( primerss );//Пример
						 Deistvie->Text = System::Convert::ToString ( primerss );//Пример
						 Otvet->Text = System::Convert::ToString ( primerss );//Пример
						 obnulenie_primerss = false;
						 }
					if ( nagatie_deisvia == true)
						 {
						 Primer2->Text = System::Convert::ToString ( otvets += 1 );//Пример
						 }
					else
						 {
						 Primer1->Text = System::Convert::ToString ( otvets += 1 );//Пример
						 }
					}
	 private: System::Void Dva_Click ( System::Object^ sender, System::EventArgs^ e )
					{
						 if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
							  {
							  povtornoe_nagatie_deisvia = false;
							  }
						 if ( if_vtoroe_chislo == true )
							  {
							  if_rovno_2 = true;
							  }
						 if_rovno_1 = true;
						 if ( obnulenie_primerss == true )
							  {
							  primerss = "";
							  Primer1->Text = System::Convert::ToString ( primerss );//Пример
							  Primer2->Text = System::Convert::ToString ( primerss );//Пример
							  Deistvie->Text = System::Convert::ToString ( primerss );//Пример
							  Otvet->Text = System::Convert::ToString ( primerss );//Пример
							  obnulenie_primerss = false;
							  }
						 if ( nagatie_deisvia == true )
							  {
							  Primer2->Text = System::Convert::ToString ( otvets += 2 );//Пример
							  }
						 else
							  {
							  Primer1->Text = System::Convert::ToString ( otvets += 2 );//Пример
							  }
						 }
	 private: System::Void Tri_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 3 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 3 );//Пример
			   }
		  }
	 private: System::Void Chetiri_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 4 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 4 );//Пример
			   }
		  }
	 private: System::Void Piat_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 5 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 5 );//Пример
			   }
		  }
	 private: System::Void Shest_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 6 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 6 );//Пример
			   }
		  }
	 private: System::Void Sem_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 7 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 7 );//Пример
			   }
		  }
	 private: System::Void Vosem_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 8 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 8 );//Пример
			   }
		  }
	 private: System::Void Devat_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 9 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 9 );//Пример
			   }
		  }
	 private: System::Void Nol_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  if ( pluss == false && minuss == false && Umnogitt == false && Razdelitt == false )
			   {
			   povtornoe_nagatie_deisvia = false;
			   }
		  if ( if_vtoroe_chislo == true )
			   {
			   if_rovno_2 = true;
			   }
		  if_rovno_1 = true;
		  if ( obnulenie_primerss == true )
			   {
			   primerss = "";
			   Primer1->Text = System::Convert::ToString ( primerss );//Пример
			   Primer2->Text = System::Convert::ToString ( primerss );//Пример
			   Deistvie->Text = System::Convert::ToString ( primerss );//Пример
			   Otvet->Text = System::Convert::ToString ( primerss );//Пример
			   obnulenie_primerss = false;
			   }
		  if ( nagatie_deisvia == true )
			   {
			   Primer2->Text = System::Convert::ToString ( otvets += 0 );//Пример
			   }
		  else
			   {
			   Primer1->Text = System::Convert::ToString ( otvets += 0 );//Пример
			   }
		  }

	 private: System::Void Ravno_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  if ( if_rovno_1 != false && if_rovno_2 != false )
			   {
			   System::String^ Proverka_na_NULL_1 = "";
			   System::String^ Proverka_na_NULL_2 = "";
			   System::String^ Proverka_na_NULL_3 = "";
			   Proverka_na_NULL_1 = Primer1->Text;
			   Proverka_na_NULL_2 = Primer2->Text;
			   Proverka_na_NULL_3 = Deistvie->Text;
			   if ( Proverka_na_NULL_1 == "" || Proverka_na_NULL_2 == "" || Proverka_na_NULL_3 == "" )
					{
					if_rovno_1 = false;
					if_rovno_2 = false;
					}
			   else
					{
					nagatie_deisvia = false;
					if_rovno_1 = false;
					if_rovno_2 = false;
					obnulenie_primerss = true;
					Pervoe_chislo = Primer1->Text;
					Vtoroe_chislo = Primer2->Text;
					int int_Pervoe_chislo = NULL;
					int_Pervoe_chislo = Int32::Parse ( Pervoe_chislo );
					int int_Vtoroe_chislo = NULL;
					int_Vtoroe_chislo = Int32::Parse ( Vtoroe_chislo );
					int int_otvets = Int32::Parse ( otvets );
					if ( pluss == true )
						 {
						 int_otvets = int_Pervoe_chislo + int_Vtoroe_chislo;
						 Otvet->Text = System::Convert::ToString ( int_otvets );
						 pluss = false;
						 }
					if ( minuss == true )
						 {
						 int_otvets = int_Pervoe_chislo - int_Vtoroe_chislo;
						 Otvet->Text = System::Convert::ToString ( int_otvets );
						 minuss = false;
						 }
					if ( Umnogitt == true )
						 {
						 int_otvets = int_Pervoe_chislo * int_Vtoroe_chislo;
						 Otvet->Text = System::Convert::ToString ( int_otvets );
						 Umnogitt = false;
						 }
					if ( Razdelitt == true )
						 {
						 int_otvets = int_Pervoe_chislo / int_Vtoroe_chislo;
						 Otvet->Text = System::Convert::ToString ( int_otvets );
						 Razdelitt = false;
						 }
					otvets = "";
					}
			   }		  
		  }

	 private: System::Void Plus_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 
		  System::String^ Deistvie_if = "";
		  Deistvie_if = Primer1->Text;
		  if ( Deistvie_if != "" )
			   {
			   if ( povtornoe_nagatie_deisvia == false )
					{

					nagatie_deisvia = true;
					povtornoe_nagatie_deisvia = true;
					if_vtoroe_chislo = true;
					primerss = " + ";
					Deistvie->Text = System::Convert::ToString ( primerss );//Пример

					Otvet->Text = System::Convert::ToString ( "" );
					pluss = true;
					otvets = "";
					}
			   }
		  }
	 private: System::Void Minys_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 
		  System::String^ Deistvie_if = "";
		  Deistvie_if = Primer1->Text;
		  if ( Deistvie_if != "" )
			   {
			   if ( povtornoe_nagatie_deisvia == false )
					{
					nagatie_deisvia = true;
					povtornoe_nagatie_deisvia = true;
					if_vtoroe_chislo = true;
					primerss = " - ";
					Deistvie->Text = System::Convert::ToString ( primerss );//Пример

					Otvet->Text = System::Convert::ToString ( "" );
					minuss = true;
					otvets = "";
					}
			   }
		  }
	 private: System::Void Rasdelit_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  System::String^ Deistvie_if = "";
		  Deistvie_if = Primer1->Text;
		  if ( Deistvie_if != "" )
			   {
			   if ( povtornoe_nagatie_deisvia == false )
					{
					nagatie_deisvia = true;
					povtornoe_nagatie_deisvia = true;
					if_vtoroe_chislo = true;
					primerss = " / ";
					Deistvie->Text = System::Convert::ToString ( primerss );//Пример

					Otvet->Text = System::Convert::ToString ( "" );
					Razdelitt = true;
					otvets = "";
					}
			   }
		  }
	 private: System::Void Ymnogit_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  System::String^ Deistvie_if = "";
		  Deistvie_if = Primer1->Text;
		  if ( Deistvie_if != "" )
			   {
			   if ( povtornoe_nagatie_deisvia == false )
					{
					nagatie_deisvia = true;
					povtornoe_nagatie_deisvia = true;
					if_vtoroe_chislo = true;
					primerss = " * ";
					Deistvie->Text = System::Convert::ToString ( primerss );//Пример

					Otvet->Text = System::Convert::ToString ( "" );
					Umnogitt = true;
					otvets = "";
					}
			   }
		  }

	 private: System::Void Steret_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 
		  msclr::interop::marshal_context oMarshalContext;//Konvertator v char
		  const char* pParameter = oMarshalContext.marshal_as<const char*> ( Primer1->Text );//Konvertator v char
		  char* pParameter_to_char = ( char* ) pParameter;//Konver const char to char
		  if ( strcmp ( pParameter_to_char, "" ) > 0 )
			   {
			   int Dlina_char = strlen ( pParameter );//Dlina char
			   pParameter_to_char[Dlina_char - 1] = '\0';//Udalenie poslednego simvola v char

			   int pParameter_to_int = atoi ( pParameter_to_char );//Konvertator v int
			   if ( pParameter_to_int == 0 )
					{
					otvets = Convert::ToString ( "0" );//Udalinie chisla iz vsex otvetov
					Primer1->Text = Convert::ToString ( "0" );// Konvertirovanie v string i vivod v otvet	 
					}
			   else
					{

					otvets = Convert::ToString ( pParameter_to_int );//Udalinie chisla iz vsex otvetov
					Primer1->Text = Convert::ToString ( pParameter_to_int );// Konvertirovanie v string i vivod v otvet	  
					}
			   }
		  }	 
	 private: System::Void Steret3_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  msclr::interop::marshal_context oMarshalContext;//Konvertator v char
		  const char* pParameter = oMarshalContext.marshal_as<const char*> ( Otvet->Text );//Konvertator v char
		  char* pParameter_to_char = ( char* ) pParameter;//Konver const char to char
		  if ( strcmp ( pParameter_to_char, "" ) > 0 )
			   {
			   int Dlina_char = strlen ( pParameter );//Dlina char
			   pParameter_to_char[Dlina_char - 1] = '\0';//Udalenie poslednego simvola v char

			   int pParameter_to_int = atoi ( pParameter_to_char );//Konvertator v int
			   if ( pParameter_to_int == 0 )
					{
					otvets = Convert::ToString ( "" );//Udalinie chisla iz vsex otvetov
					Otvet->Text = Convert::ToString ( "" );// Konvertirovanie v string i vivod v otvet	 
					}
			   else
					{
					
					otvets = Convert::ToString ( pParameter_to_int );//Udalinie chisla iz vsex otvetov
					Otvet->Text = Convert::ToString ( pParameter_to_int );// Konvertirovanie v string i vivod v otvet	  
					}
			   }
		  }
	 private: System::Void Steret2_Click ( System::Object^ sender, System::EventArgs^ e )
		  {
		  msclr::interop::marshal_context oMarshalContext;//Konvertator v char
		  const char* pParameter = oMarshalContext.marshal_as<const char*> ( Primer2->Text );//Konvertator v char
		  char* pParameter_to_char = ( char* ) pParameter;//Konver const char to char
		  if ( strcmp ( pParameter_to_char, "" ) > 0 )
			   {
			   int Dlina_char = strlen ( pParameter );//Dlina char
			   pParameter_to_char[Dlina_char - 1] = '\0';//Udalenie poslednego simvola v char

			   int pParameter_to_int = atoi ( pParameter_to_char );//Konvertator v int
			   if ( pParameter_to_int == 0 )
					{
					otvets = Convert::ToString ( "0" );//Udalinie chisla iz vsex otvetov
					Primer2->Text = Convert::ToString ( "0" );// Konvertirovanie v string i vivod v otvet	 
					}
			   else
					{

					otvets = Convert::ToString ( pParameter_to_int );//Udalinie chisla iz vsex otvetov
					Primer2->Text = Convert::ToString ( pParameter_to_int );// Konvertirovanie v string i vivod v otvet	  
					}
			   }
		  }
};
	 }


		  
//System::String^ otvet2;s
//System::String^ nams1 = textBox1->Text;
//System::String^ nams2 = textBox2->Text;
//otvet2 = nams1 + nams2;