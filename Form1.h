#pragma once
#include "Base_figure_and_stack.h"
#include "Circle.h"
#include "Octagon.h"
#include "Complex_figure.h"
#include "MyException.h"
#include <array>
#include <string>

using namespace std;
using namespace System::Drawing;

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private: 
		int bk0=255, bk1=255, bk2=255;
		int* bk;
		Figure_stack* fstack;
		Graphics^ h;
		Rectangle rt;
		int right_end;
		int bottom_end;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ Errors_box;


	private: System::Windows::Forms::ListBox^ listBox1;


	public:
		Form1(void)
		{
			InitializeComponent();
			fstack = new Figure_stack();
			bk = new int [3] { bk0, bk1, bk2 };
			h = CreateGraphics();
			Rectangle rt = Form::ClientRectangle;
			h->Clear(Color::White);
			right_end = rt.Right - this->listBox1->Width;
			bottom_end = this->label1->Location.Y;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Errors_box = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 512);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(547, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создать фигуру";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Create_figure);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 410);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Радиус";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 406);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(99, 438);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 442);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Х";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(99, 470);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 474);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Y";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(369, 405);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(261, 410);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Цвет линии";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(439, 405);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 22);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(508, 405);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(60, 22);
			this->textBox6->TabIndex = 10;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(369, 442);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(60, 22);
			this->textBox7->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(439, 442);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(60, 22);
			this->textBox8->TabIndex = 13;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(508, 442);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(60, 22);
			this->textBox9->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 444);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Цвет заливки";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(688, 16);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Созданные фигуры";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(677, 47);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(259, 196);
			this->listBox1->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(677, 278);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(259, 49);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Показать выбранную фигуру";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(677, 335);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(259, 49);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Скрыть выбранную фигуру";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(677, 448);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(259, 49);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Показать все";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(677, 507);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(259, 49);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Удалить фигуры";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(677, 391);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(259, 49);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Переместить выбранную фигуру";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Errors_box
			// 
			this->Errors_box->Location = System::Drawing::Point(677, 249);
			this->Errors_box->Name = L"Errors_box";
			this->Errors_box->Size = System::Drawing::Size(259, 22);
			this->Errors_box->TabIndex = 23;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 567);
			this->Controls->Add(this->Errors_box);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Create_figure(System::Object^ sender, System::EventArgs^ e) {
		Errors_box->Text = "";
		try {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" ||
				textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" ||
				textBox9->Text == "") {
				throw MyException("Заполните поля ввода данных");
			}
			int radius = System::Convert::ToInt32(textBox1->Text);
			int x = System::Convert::ToInt32(textBox2->Text);
			int y = System::Convert::ToInt32(textBox3->Text);
			if (x <= 0 || y <= 0 || radius <= 0) {
				throw MyException("Вы ввели отрицательные параметры фигуры");
			}
			if (x - radius <= rt.Left || y - radius <= rt.Top || x + radius >= right_end ||
				y + radius >= bottom_end)
			{
				throw MyException("Фигура выходит за границы окна");
			}


			int line[]{ System::Convert::ToInt32(textBox4->Text), System::Convert::ToInt32(textBox5->Text),
				System::Convert::ToInt32(textBox6->Text) };
			int fill[]{ System::Convert::ToInt32(textBox7->Text), System::Convert::ToInt32(textBox8->Text),
				System::Convert::ToInt32(textBox9->Text) };
			for (auto i = 0; i < NUM_OF_RGB_PART; i++) {
				if (line[i]<RGB_MIN || line[i]>RGB_MAX || fill[i]<RGB_MIN || fill[i]>RGB_MAX) {
					throw MyException("Параметры цвета не от 0 до 255");
				}
			}

			MyPoint cent;
			cent.X = x;
			cent.Y = y;
			Base_figure* f(new Complex_figure(new Circle(cent, radius, new int [3] { System::Convert::ToInt32(textBox4->Text),
				System::Convert::ToInt32(textBox5->Text), System::Convert::ToInt32(textBox6->Text) }, new int[3] {
					System::Convert::ToInt32(textBox7->Text), System::Convert::ToInt32(textBox8->Text),
						System::Convert::ToInt32(textBox9->Text) }), new Octagon(cent, radius, new int [3] { System::Convert::ToInt32(textBox4->Text),
							System::Convert::ToInt32(textBox5->Text), System::Convert::ToInt32(textBox6->Text) }, new int[3] {
								System::Convert::ToInt32(textBox7->Text), System::Convert::ToInt32(textBox8->Text),
									System::Convert::ToInt32(textBox9->Text)})));
			f->set_rad(radius);
			fstack->add(f);

			listBox1->Items->Add(Point(cent.X,cent.Y));
		}
		catch (MyException err) {
			String^ s = gcnew String(err.get_my_msg().c_str());
			Errors_box->Text = s;
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Errors_box->Text = "";
	if (listBox1->SelectedIndex >= 0) {
		Base_figure* f = fstack->find_figure(listBox1->SelectedIndex);
		f->print(h);
	}
	else
	{
		Errors_box->Text ="Фигура не выбрана";
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Errors_box->Text = "";
	if (listBox1->SelectedIndex >= 0) {
		Base_figure* f = fstack->find_figure(listBox1->SelectedIndex);
		f->hide(h, bk);
	}
	else
	{
		Errors_box->Text = "Фигура не выбрана";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Errors_box->Text = "";
	try {
		if (textBox3->Text == "" || textBox2->Text == "") {
			throw MyException("Заполните поля ввода данных: введите новые X и Y в поля с соотвествующими названиями");
		}
		if (listBox1->SelectedIndex >= 0) {
			Base_figure* f = fstack->find_figure(listBox1->SelectedIndex);
			int x = System::Convert::ToInt32(textBox2->Text);
			int y = System::Convert::ToInt32(textBox3->Text);
			int radius = f->get_rad();
			if (x <= 0 || y <= 0) {
				throw MyException("Значения X и Y не могут быть меньше 1");
			}
			if (x - radius <= rt.Left || y - radius <= rt.Top || x + radius >= right_end ||
				y + radius >= bottom_end){
				throw MyException("Фигура выходит за границы окна");
			}
			f->move(MyPoint(x, y), h, bk);
		}
		else
		{
			Errors_box->Text = "Фигура не выбрана";
		}
	}
	catch (MyException err) {
		String^ s = gcnew String(err.get_my_msg().c_str());
		Errors_box->Text = s;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Errors_box->Text = "";
	fstack->show_figure(h);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Errors_box->Text = "";
	fstack->delete_stack(h, bk);
	listBox1->Items->Clear();
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
