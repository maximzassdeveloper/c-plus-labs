#pragma once
#include <math.h>

namespace ModernCalc {

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
	public:
		MyForm(void)
		{
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
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ comma;
	private: System::Windows::Forms::Button^ clean;

	private: System::Windows::Forms::Button^ cleanEntry;

	private: System::Windows::Forms::Button^ percent;
	private: System::Windows::Forms::Button^ negative;
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::Button^ oneDivision;

	private: System::Windows::Forms::Button^ sqrt;

	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ degree;

	private: System::Windows::Forms::Label^ cashInput;


	protected:

	private: String^ cashValue = "";
	private: String^ cashOperator = "";

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->comma = (gcnew System::Windows::Forms::Button());
			this->clean = (gcnew System::Windows::Forms::Button());
			this->cleanEntry = (gcnew System::Windows::Forms::Button());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->negative = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->oneDivision = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->degree = (gcnew System::Windows::Forms::Button());
			this->cashInput = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// input
			// 
			this->input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->input->BackColor = System::Drawing::Color::White;
			this->input->Enabled = false;
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->ForeColor = System::Drawing::Color::Black;
			this->input->Location = System::Drawing::Point(21, 53);
			this->input->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->input->Name = L"input";
			this->input->ReadOnly = true;
			this->input->Size = System::Drawing::Size(304, 30);
			this->input->TabIndex = 0;
			this->input->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->input->WordWrap = false;
			this->input->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::input_KeyPress);
			// 
			// seven
			// 
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven->Location = System::Drawing::Point(21, 221);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(70, 50);
			this->seven->TabIndex = 1;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// eight
			// 
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eight->Location = System::Drawing::Point(99, 221);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(70, 50);
			this->eight->TabIndex = 2;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// nine
			// 
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->Location = System::Drawing::Point(177, 221);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(70, 50);
			this->nine->TabIndex = 3;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// four
			// 
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->four->Location = System::Drawing::Point(21, 279);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(70, 50);
			this->four->TabIndex = 4;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// five
			// 
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five->Location = System::Drawing::Point(99, 279);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(70, 50);
			this->five->TabIndex = 5;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// six
			// 
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six->Location = System::Drawing::Point(177, 279);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(70, 50);
			this->six->TabIndex = 6;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// three
			// 
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->three->Location = System::Drawing::Point(21, 337);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(70, 50);
			this->three->TabIndex = 7;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// two
			// 
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two->Location = System::Drawing::Point(99, 337);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(70, 50);
			this->two->TabIndex = 8;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// one
			// 
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one->Location = System::Drawing::Point(177, 337);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(70, 50);
			this->one->TabIndex = 9;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zero->Location = System::Drawing::Point(99, 395);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(70, 50);
			this->zero->TabIndex = 10;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// division
			// 
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->division->Location = System::Drawing::Point(255, 163);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(70, 50);
			this->division->TabIndex = 11;
			this->division->Text = L"÷";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			// 
			// multiplication
			// 
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiplication->Location = System::Drawing::Point(255, 221);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(70, 50);
			this->multiplication->TabIndex = 12;
			this->multiplication->Text = L"×";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(255, 279);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(70, 50);
			this->minus->TabIndex = 13;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(255, 337);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(70, 50);
			this->plus->TabIndex = 14;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// comma
			// 
			this->comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comma->Location = System::Drawing::Point(177, 395);
			this->comma->Name = L"comma";
			this->comma->Size = System::Drawing::Size(70, 50);
			this->comma->TabIndex = 15;
			this->comma->Text = L",";
			this->comma->UseVisualStyleBackColor = true;
			this->comma->Click += gcnew System::EventHandler(this, &MyForm::comma_Click);
			// 
			// clean
			// 
			this->clean->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clean->Location = System::Drawing::Point(177, 105);
			this->clean->Name = L"clean";
			this->clean->Size = System::Drawing::Size(70, 50);
			this->clean->TabIndex = 16;
			this->clean->Text = L"C";
			this->clean->UseVisualStyleBackColor = true;
			this->clean->Click += gcnew System::EventHandler(this, &MyForm::clean_Click);
			// 
			// cleanEntry
			// 
			this->cleanEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cleanEntry->Location = System::Drawing::Point(99, 105);
			this->cleanEntry->Name = L"cleanEntry";
			this->cleanEntry->Size = System::Drawing::Size(70, 50);
			this->cleanEntry->TabIndex = 17;
			this->cleanEntry->Text = L"CE";
			this->cleanEntry->UseVisualStyleBackColor = true;
			this->cleanEntry->Click += gcnew System::EventHandler(this, &MyForm::cleanEntry_Click);
			// 
			// percent
			// 
			this->percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->percent->Location = System::Drawing::Point(21, 105);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(70, 50);
			this->percent->TabIndex = 18;
			this->percent->Text = L"%";
			this->percent->UseVisualStyleBackColor = true;
			this->percent->Click += gcnew System::EventHandler(this, &MyForm::percent_Click);
			// 
			// negative
			// 
			this->negative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->negative->Location = System::Drawing::Point(21, 395);
			this->negative->Name = L"negative";
			this->negative->Size = System::Drawing::Size(70, 50);
			this->negative->TabIndex = 19;
			this->negative->Text = L"+/-";
			this->negative->UseVisualStyleBackColor = true;
			this->negative->Click += gcnew System::EventHandler(this, &MyForm::negative_Click);
			// 
			// backspace
			// 
			this->backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->backspace->Location = System::Drawing::Point(255, 105);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(70, 50);
			this->backspace->TabIndex = 20;
			this->backspace->Text = L"⌫";
			this->backspace->UseVisualStyleBackColor = true;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// oneDivision
			// 
			this->oneDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->oneDivision->Location = System::Drawing::Point(21, 163);
			this->oneDivision->Name = L"oneDivision";
			this->oneDivision->Size = System::Drawing::Size(70, 50);
			this->oneDivision->TabIndex = 24;
			this->oneDivision->Text = L"1/x";
			this->oneDivision->UseVisualStyleBackColor = true;
			this->oneDivision->Click += gcnew System::EventHandler(this, &MyForm::oneDivision_Click);
			// 
			// sqrt
			// 
			this->sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sqrt->Location = System::Drawing::Point(177, 163);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(70, 50);
			this->sqrt->TabIndex = 23;
			this->sqrt->Text = L"√x";
			this->sqrt->UseVisualStyleBackColor = true;
			this->sqrt->Click += gcnew System::EventHandler(this, &MyForm::sqrt_Click);
			// 
			// equal
			// 
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equal->Location = System::Drawing::Point(255, 395);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(70, 50);
			this->equal->TabIndex = 22;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = true;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// degree
			// 
			this->degree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->degree->Location = System::Drawing::Point(99, 163);
			this->degree->Name = L"degree";
			this->degree->Size = System::Drawing::Size(70, 50);
			this->degree->TabIndex = 21;
			this->degree->Text = L"x²";
			this->degree->UseVisualStyleBackColor = true;
			this->degree->Click += gcnew System::EventHandler(this, &MyForm::degree_Click);
			// 
			// cashInput
			// 
			this->cashInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cashInput->Location = System::Drawing::Point(21, 20);
			this->cashInput->Name = L"cashInput";
			this->cashInput->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->cashInput->Size = System::Drawing::Size(304, 20);
			this->cashInput->TabIndex = 25;
			this->cashInput->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 502);
			this->Controls->Add(this->cashInput);
			this->Controls->Add(this->oneDivision);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->degree);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->negative);
			this->Controls->Add(this->percent);
			this->Controls->Add(this->cleanEntry);
			this->Controls->Add(this->clean);
			this->Controls->Add(this->comma);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->division);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->one);
			this->Controls->Add(this->two);
			this->Controls->Add(this->three);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/*TODO добавить нули перед запятыми, убрать второе поле, несколько раз равно*/

	// Helper
	private: double operatorSwitch(String^ oper, String^ strNum1, String^ strNum2) {
		double num1 = Convert::ToDouble(strNum1);
		double num2 = Convert::ToDouble(strNum2);
		switch (Convert::ToChar(oper))
		{
			case '/':
				return num1 / num2;
			case '*':
				return num1 * num2;
			case '-':
				return num1 - num2;
			case '+':
				return num1 + num2;
			default:
				return 0;
		}
	}
	private: Void triggerOperator(String^ oper) {
		if (this->input->Text == "") {
			return;
		}
		
		if (this->cashValue != "") {
			if (this->cashOperator == "/" && this->input->Text == "0") {
				MessageBox::Show("Деление на ноль невозможно", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			calcResult();
		}

		this->cashValue = this->input->Text;
		this->cashOperator = oper;
		this->input->Text = oper;
		// this->cashInput->Text = this->input->Text + " " + oper;
		// this->input->Text = "";
		// this->input->Focus();

	}
	private: Void calcResult() {
		if (this->cashValue == "" || this->input->Text == "") {
			return;
		}

		this->input->Text = Convert::ToString(operatorSwitch(this->cashOperator, this->cashValue, this->input->Text));
	}
	private: Void equalsFunc() {
		if (this->cashOperator == "/" && this->input->Text == "0") {
			MessageBox::Show("Деление на ноль невозможно", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		calcResult();
		// this->cashValue = "";
		// this->cashOperator = "";
		// this->cashInput->Text = "";
	}
	
	// Input KeyPress
	private: System::Void input_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
		/*
		// Disable typing before "-"
		if (input->SelectionStart == 0 && input->Text->StartsWith("-")) {
			e->Handled = true;
		}
		// Access "+, -, /, *"
		if (e->KeyChar == '+' || e->KeyChar == '-' || e->KeyChar == '/' || e->KeyChar == '*') {
			triggerOperator(Convert::ToString(e->KeyChar));
			e->Handled = true;
		}
		// Access "Enter"
		if (e->KeyChar == (Char)Keys::Enter) {
			equalsFunc();
			e->Handled = true;
		}
		// Access ","
		if (e->KeyChar == ',') {
			if (input->Text->Contains(",")) {
				e->Handled = true;
			}
		}
		// Access numbers and Backspace
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
		*/
	}
	
	private: Void checkFunc() {
		if (this->input->Text == "+" || this->input->Text == "-" || this->input->Text == "/" || this->input->Text == "*") {
			this->input->Text = "";
		}
	}
	// Numbers
	private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "7";
	}
	private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "8";
	}
	private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "9";
	}
	private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "4";
	}
	private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "5";
	}
	private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "6";
	}
	private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "3";
	}
	private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "2";
	}
	private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "1";
	}
	private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
		checkFunc();
		this->input->Text = this->input->Text + "0";
	}
	
	// Support Actions
	private: System::Void clean_Click(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text = "";
		this->cashValue = "";
		this->cashOperator = "";
		this->cashInput->Text = "";
	}
	private: System::Void cleanEntry_Click(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text = "";
	}
	private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text == "") {
			return;
		}

		String^ text = this->input->Text;
		this->input->Text = text->Remove(text->Length-1, 1);
	}
	private: System::Void negative_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->input->Text;
		if (text == "0") {
			return;
		}
		if (text->StartsWith("-")) {
			this->input->Text = text->Remove(0, 1);
		}
		else {
			this->input->Text = "-" + text;
		}
	}
	private: System::Void comma_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->input->Text->Contains(",")) {
			this->input->Text = this->input->Text + ",";
			if (this->input->Text->StartsWith(",")) {
				this->input->Text = "0" + this->input->Text;
			}
		}
	}

	// Main Actions
	private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
		triggerOperator("/");
	}
	private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		triggerOperator("*");
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		triggerOperator("-");
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		triggerOperator("+");
	}
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
		equalsFunc();
	}

	// Other Actions
	private: System::Void percent_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text == "") {
			return;
		}
		if (this->cashValue == "") {
			return this->input->Text = "0";
		}
		this->input->Text = Convert::ToString(Convert::ToDouble(this->cashValue) * (Convert::ToDouble(this->input->Text) / 100));
	}

	private: System::Void oneDivision_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text == "") {
			return;
		}
		if (this->input->Text == "0") {
			MessageBox::Show("Деление на ноль невозможно", "Уведомление", MessageBoxButtons::OK);
			return;
		}
		this->input->Text = Convert::ToString(1 / Convert::ToDouble(this->input->Text));
	}

	private: System::Void degree_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text == "") {
			return;
		}
		this->input->Text = Convert::ToString(pow(Convert::ToDouble(this->input->Text), 2));
	}

	private: System::Void sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text == "") {
			return;
		}
		this->input->Text = Convert::ToString(pow(Convert::ToDouble(this->input->Text), 0.5));
	}
};
}
