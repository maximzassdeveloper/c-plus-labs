#include <cmath>;

#pragma once

namespace cz07 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: String^ accuracy;
	public:
		MyForm(void)
		{
			this->accuracy = "0,1";
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ gbX;
	private: System::Windows::Forms::TextBox^ txtin;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblIn;

	private: System::Windows::Forms::Label^ lblAnswer;

	private: System::Windows::Forms::Label^ lblTextAnswer;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lblSize;
	private: System::Windows::Forms::Label^ lblAccuracy;


	private: System::Windows::Forms::Label^ lblCorrectAnswer;

	private: System::Windows::Forms::Button^ btnCount;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lblError;
	private: System::Windows::Forms::Label^ label7;
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
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gbX = (gcnew System::Windows::Forms::GroupBox());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->txtin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblIn = (gcnew System::Windows::Forms::Label());
			this->lblAnswer = (gcnew System::Windows::Forms::Label());
			this->lblTextAnswer = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblSize = (gcnew System::Windows::Forms::Label());
			this->lblAccuracy = (gcnew System::Windows::Forms::Label());
			this->lblCorrectAnswer = (gcnew System::Windows::Forms::Label());
			this->btnCount = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gbX->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(230, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 0;
			// 
			// gbX
			// 
			this->gbX->Controls->Add(this->lblError);
			this->gbX->Controls->Add(this->txtin);
			this->gbX->Controls->Add(this->label2);
			this->gbX->ForeColor = System::Drawing::SystemColors::Highlight;
			this->gbX->Location = System::Drawing::Point(18, 45);
			this->gbX->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->gbX->Name = L"gbX";
			this->gbX->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->gbX->Size = System::Drawing::Size(502, 117);
			this->gbX->TabIndex = 1;
			this->gbX->TabStop = false;
			this->gbX->Text = L"Ввод значения X (-16<=X<=25)";
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(94, 39);
			this->lblError->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 25);
			this->lblError->TabIndex = 2;
			// 
			// txtin
			// 
			this->txtin->Location = System::Drawing::Point(90, 70);
			this->txtin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtin->Name = L"txtin";
			this->txtin->Size = System::Drawing::Size(328, 31);
			this->txtin->TabIndex = 1;
			this->txtin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtin->TextChanged += gcnew System::EventHandler(this, &MyForm::in_TextChanged);
			this->txtin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtin_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(36, 70);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"x = ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(18, 172);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(502, 127);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор точности";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton6->Location = System::Drawing::Point(298, 77);
			this->radioButton6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(133, 29);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->Text = L"0,000001";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton5->Location = System::Drawing::Point(298, 34);
			this->radioButton5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(121, 29);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->Text = L"0,00001";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton4->Location = System::Drawing::Point(138, 77);
			this->radioButton4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(109, 29);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"0,0001";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton3->Location = System::Drawing::Point(138, 34);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(97, 29);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"0,001";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton2->Location = System::Drawing::Point(9, 77);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 29);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"0,01";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton1->Location = System::Drawing::Point(10, 34);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(73, 29);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0,1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 548);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Число слагаемых = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(58, 359);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(384, 42);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Результаты расчета:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 419);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(233, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Исходное значение = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 505);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(268, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Точное значение exp(x) =";
			// 
			// lblIn
			// 
			this->lblIn->AutoSize = true;
			this->lblIn->Location = System::Drawing::Point(291, 419);
			this->lblIn->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblIn->Name = L"lblIn";
			this->lblIn->Size = System::Drawing::Size(0, 25);
			this->lblIn->TabIndex = 7;
			// 
			// lblAnswer
			// 
			this->lblAnswer->AutoSize = true;
			this->lblAnswer->Location = System::Drawing::Point(291, 594);
			this->lblAnswer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAnswer->Name = L"lblAnswer";
			this->lblAnswer->Size = System::Drawing::Size(0, 25);
			this->lblAnswer->TabIndex = 8;
			// 
			// lblTextAnswer
			// 
			this->lblTextAnswer->AutoSize = true;
			this->lblTextAnswer->Location = System::Drawing::Point(14, 594);
			this->lblTextAnswer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTextAnswer->Name = L"lblTextAnswer";
			this->lblTextAnswer->Size = System::Drawing::Size(223, 25);
			this->lblTextAnswer->TabIndex = 9;
			this->lblTextAnswer->Text = L"Сумма ряда exp(x) = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 464);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 25);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Точность = ";
			// 
			// lblSize
			// 
			this->lblSize->AutoSize = true;
			this->lblSize->Location = System::Drawing::Point(291, 548);
			this->lblSize->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSize->Name = L"lblSize";
			this->lblSize->Size = System::Drawing::Size(0, 25);
			this->lblSize->TabIndex = 11;
			// 
			// lblAccuracy
			// 
			this->lblAccuracy->AutoSize = true;
			this->lblAccuracy->Location = System::Drawing::Point(291, 464);
			this->lblAccuracy->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAccuracy->Name = L"lblAccuracy";
			this->lblAccuracy->Size = System::Drawing::Size(0, 25);
			this->lblAccuracy->TabIndex = 12;
			// 
			// lblCorrectAnswer
			// 
			this->lblCorrectAnswer->AutoSize = true;
			this->lblCorrectAnswer->Location = System::Drawing::Point(291, 505);
			this->lblCorrectAnswer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCorrectAnswer->Name = L"lblCorrectAnswer";
			this->lblCorrectAnswer->Size = System::Drawing::Size(0, 25);
			this->lblCorrectAnswer->TabIndex = 13;
			// 
			// btnCount
			// 
			this->btnCount->Enabled = false;
			this->btnCount->Location = System::Drawing::Point(18, 308);
			this->btnCount->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCount->Name = L"btnCount";
			this->btnCount->Size = System::Drawing::Size(502, 47);
			this->btnCount->TabIndex = 14;
			this->btnCount->Text = L"Расчет exp(x)";
			this->btnCount->UseVisualStyleBackColor = true;
			this->btnCount->Click += gcnew System::EventHandler(this, &MyForm::btnCount_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(372, 650);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 52);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(80, 14);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(371, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"exp(x) = 1 + x/1! + x^2/2! + x^3/3! + ...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 716);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnCount);
			this->Controls->Add(this->lblCorrectAnswer);
			this->Controls->Add(this->lblAccuracy);
			this->Controls->Add(this->lblSize);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lblTextAnswer);
			this->Controls->Add(this->lblAnswer);
			this->Controls->Add(this->lblIn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->gbX);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Расчет exp(x)";
			this->gbX->ResumeLayout(false);
			this->gbX->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void in_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->lblSize->Text = "";
		this->lblAnswer->Text = "";
		this->lblCorrectAnswer->Text = "";
		this->lblAccuracy->Text = "";
		this->lblIn->Text = "";
		try {
			double test;
			test = Convert::ToDouble(this->txtin->Text);
			if (test > 25 || test < -16) {
				this->lblError->Text = "Число не входит в диапазон!";
				this->btnCount->Enabled = false;
			}
			else {
				this->btnCount->Enabled = true;
				this->lblError->Text = "";
			}
		}
		catch (Exception^ exc) {
			this->btnCount->Enabled = false;
		}
	}
	private: System::Void txtin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!System::Char::IsControl(e->KeyChar)) {
			if (e->KeyChar == '-') {
				if (this->txtin->SelectionStart != 0 || this->txtin->Text->IndexOf("-") != -1)
					e->Handled = true;
			}
			else if (e->KeyChar == ',' && this->txtin->Text->IndexOf(",") == -1) {
				if (this->txtin->SelectionStart == 0) {
					this->txtin->Text = "0," + this->txtin->Text;
					e->Handled = true;
					this->txtin->SelectionStart = 2;
				}
				else if (this->txtin->SelectionStart == 1 && this->txtin->Text[0] == '-') {
					this->txtin->Text = "-0," + this->txtin->Text->Substring(1, this->txtin->Text->Length - 1);
					e->Handled = true;
					this->txtin->SelectionStart = 3;
				}
			}
			else if (!System::Char::IsDigit(e->KeyChar))
				e->Handled = true;
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->accuracy = "0,1";
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->accuracy = "0,01";
	}

	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->accuracy = "0,001";
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->accuracy = "0,0001";
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->accuracy = "0,00001";
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->accuracy = "0,000001";
	}
	private: System::Double myExp1() {
		int size = 1;
		double answer = 1;
		double input = Convert::ToDouble(this->txtin->Text);
		double current = (pow(input, size) / Fact(size));
		answer += current;
		while (abs(current) > pow(10, -7)) {
			size += 1;
			current = (pow(input, size) / Fact(size));
			answer += current;
		}
		this->lblSize->Text = Convert::ToString(size);
		return answer;
	}
	private: System::Double myExp2(double input) {
		int size = 1;
		double current = 1;
		double answer = 0;
		answer += current;
		while (abs(current) > pow(10, -this->accuracy->Length - 1)) {
			current = current * input / size;
			answer += current;
			size++;
		}
		this->lblSize->Text = Convert::ToString(size);
		return answer;
	}
	private: System::Double Fact(int value) {
		if (value == 1) return 1;
		else return value * Fact(value - 1);
	}
	private: System::Void btnCount_Click(System::Object^ sender, System::EventArgs^ e) {
		int doubAccuracy = this->accuracy->Length - 1;
		double answer;
		double input = Convert::ToDouble(this->txtin->Text);
		int c = doubAccuracy;
		double ans = exp(input);
		while (Convert::ToDouble(ans.ToString("f" + doubAccuracy.ToString())) == 0) {
			doubAccuracy++;
		}
		switch (doubAccuracy) {
		case 2:
			this->radioButton1->Checked = true;
			break;
		case 3:
			this->radioButton2->Checked = true;
			break;
		case 4:
			this->radioButton3->Checked = true;
			break;
		case 5:
			this->radioButton4->Checked = true;
			break;
		case 6:
			this->radioButton5->Checked = true;
			break;
		case 7:
			this->radioButton6->Checked = true;
			break;
		}
		if (c != doubAccuracy)
			MessageBox::Show("Точность была изменена!");
		answer = myExp2(input);
		Int64 answermantis = floor((answer - floor(answer)) * pow(10, doubAccuracy));
		Int64 ansmantis = floor((ans - floor(ans)) * pow(10, doubAccuracy));
		this->lblAnswer->Text = (input > 0) ? (floor(answer)).ToString() + "," + answermantis.ToString() : answer.ToString("f" + doubAccuracy.ToString());;
		this->lblCorrectAnswer->Text = ans.ToString("f" + doubAccuracy.ToString());//(input > 0) ? (floor(ans)).ToString() + "," + ansmantis.ToString() : ans.ToString("f" + doubAccuracy.ToString());
		this->lblAccuracy->Text = this->accuracy;
		this->lblIn->Text = Convert::ToString(input);

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}


