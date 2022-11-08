#pragma once

namespace CurrencyConverter {

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
	private: System::Windows::Forms::GroupBox^ groupBoxInitial;
	private: System::Windows::Forms::Label^ labelValue;
	protected:

	private: System::Windows::Forms::Label^ labelExch;

	private: System::Windows::Forms::TextBox^ inputValue;
	private: System::Windows::Forms::TextBox^ inputExchange;
	private: System::Windows::Forms::GroupBox^ groupBoxResult;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ inputTo;

	private: System::Windows::Forms::TextBox^ inputFrom;
	private: System::Windows::Forms::Label^ labelFrom;
	private: System::Windows::Forms::Label^ labelTo;
	private: System::Windows::Forms::GroupBox^ groupBoxRb;




	private: System::Windows::Forms::RadioButton^ rbRoubleToEuro;
	private: System::Windows::Forms::RadioButton^ rbEuroToRouble;
	private: System::Windows::Forms::RadioButton^ rbRoubleToDollar;
	private: System::Windows::Forms::RadioButton^ rbDollarToRouble;
	private: System::Windows::Forms::Button^ btnCalc;
	private: System::Windows::Forms::Button^ btnClose;



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
			this->groupBoxInitial = (gcnew System::Windows::Forms::GroupBox());
			this->inputExchange = (gcnew System::Windows::Forms::TextBox());
			this->inputValue = (gcnew System::Windows::Forms::TextBox());
			this->labelValue = (gcnew System::Windows::Forms::Label());
			this->labelExch = (gcnew System::Windows::Forms::Label());
			this->groupBoxResult = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->inputTo = (gcnew System::Windows::Forms::TextBox());
			this->inputFrom = (gcnew System::Windows::Forms::TextBox());
			this->labelFrom = (gcnew System::Windows::Forms::Label());
			this->labelTo = (gcnew System::Windows::Forms::Label());
			this->groupBoxRb = (gcnew System::Windows::Forms::GroupBox());
			this->rbRoubleToEuro = (gcnew System::Windows::Forms::RadioButton());
			this->rbEuroToRouble = (gcnew System::Windows::Forms::RadioButton());
			this->rbRoubleToDollar = (gcnew System::Windows::Forms::RadioButton());
			this->rbDollarToRouble = (gcnew System::Windows::Forms::RadioButton());
			this->btnCalc = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBoxInitial->SuspendLayout();
			this->groupBoxResult->SuspendLayout();
			this->groupBoxRb->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxInitial
			// 
			this->groupBoxInitial->Controls->Add(this->inputExchange);
			this->groupBoxInitial->Controls->Add(this->inputValue);
			this->groupBoxInitial->Controls->Add(this->labelValue);
			this->groupBoxInitial->Controls->Add(this->labelExch);
			this->groupBoxInitial->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->groupBoxInitial->Location = System::Drawing::Point(21, 21);
			this->groupBoxInitial->Name = L"groupBoxInitial";
			this->groupBoxInitial->Size = System::Drawing::Size(345, 114);
			this->groupBoxInitial->TabIndex = 0;
			this->groupBoxInitial->TabStop = false;
			this->groupBoxInitial->Text = L"Исходные данные";
			// 
			// inputExchange
			// 
			this->inputExchange->Location = System::Drawing::Point(210, 69);
			this->inputExchange->Name = L"inputExchange";
			this->inputExchange->ReadOnly = true;
			this->inputExchange->ShortcutsEnabled = false;
			this->inputExchange->Size = System::Drawing::Size(119, 25);
			this->inputExchange->TabIndex = 3;
			this->inputExchange->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputExchange->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputExchange_KeyPress);
			// 
			// inputValue
			// 
			this->inputValue->Location = System::Drawing::Point(210, 33);
			this->inputValue->Name = L"inputValue";
			this->inputValue->ShortcutsEnabled = false;
			this->inputValue->Size = System::Drawing::Size(119, 25);
			this->inputValue->TabIndex = 2;
			this->inputValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputValue->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputValue_KeyPress);
			// 
			// labelValue
			// 
			this->labelValue->AutoSize = true;
			this->labelValue->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->labelValue->Location = System::Drawing::Point(10, 36);
			this->labelValue->Name = L"labelValue";
			this->labelValue->Size = System::Drawing::Size(178, 17);
			this->labelValue->TabIndex = 1;
			this->labelValue->Text = L"Сумма для конвертации:";
			// 
			// labelExch
			// 
			this->labelExch->AutoSize = true;
			this->labelExch->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->labelExch->Location = System::Drawing::Point(10, 72);
			this->labelExch->Name = L"labelExch";
			this->labelExch->Size = System::Drawing::Size(99, 17);
			this->labelExch->TabIndex = 0;
			this->labelExch->Text = L"Курс обмена:";
			// 
			// groupBoxResult
			// 
			this->groupBoxResult->Controls->Add(this->label5);
			this->groupBoxResult->Controls->Add(this->inputTo);
			this->groupBoxResult->Controls->Add(this->inputFrom);
			this->groupBoxResult->Controls->Add(this->labelFrom);
			this->groupBoxResult->Controls->Add(this->labelTo);
			this->groupBoxResult->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->groupBoxResult->Location = System::Drawing::Point(21, 153);
			this->groupBoxResult->Name = L"groupBoxResult";
			this->groupBoxResult->Size = System::Drawing::Size(345, 78);
			this->groupBoxResult->TabIndex = 1;
			this->groupBoxResult->TabStop = false;
			this->groupBoxResult->Text = L"Результат конвертации";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label5->Location = System::Drawing::Point(171, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"=";
			// 
			// inputTo
			// 
			this->inputTo->Location = System::Drawing::Point(194, 33);
			this->inputTo->Name = L"inputTo";
			this->inputTo->ReadOnly = true;
			this->inputTo->Size = System::Drawing::Size(93, 25);
			this->inputTo->TabIndex = 3;
			this->inputTo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// inputFrom
			// 
			this->inputFrom->Location = System::Drawing::Point(13, 33);
			this->inputFrom->Name = L"inputFrom";
			this->inputFrom->ReadOnly = true;
			this->inputFrom->Size = System::Drawing::Size(93, 25);
			this->inputFrom->TabIndex = 2;
			this->inputFrom->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// labelFrom
			// 
			this->labelFrom->AutoSize = true;
			this->labelFrom->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->labelFrom->Location = System::Drawing::Point(112, 36);
			this->labelFrom->Name = L"labelFrom";
			this->labelFrom->Size = System::Drawing::Size(0, 17);
			this->labelFrom->TabIndex = 1;
			// 
			// labelTo
			// 
			this->labelTo->AutoSize = true;
			this->labelTo->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->labelTo->Location = System::Drawing::Point(293, 36);
			this->labelTo->Name = L"labelTo";
			this->labelTo->Size = System::Drawing::Size(0, 17);
			this->labelTo->TabIndex = 0;
			// 
			// groupBoxRb
			// 
			this->groupBoxRb->Controls->Add(this->rbRoubleToEuro);
			this->groupBoxRb->Controls->Add(this->rbEuroToRouble);
			this->groupBoxRb->Controls->Add(this->rbRoubleToDollar);
			this->groupBoxRb->Controls->Add(this->rbDollarToRouble);
			this->groupBoxRb->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->groupBoxRb->Location = System::Drawing::Point(387, 21);
			this->groupBoxRb->Name = L"groupBoxRb";
			this->groupBoxRb->Size = System::Drawing::Size(251, 166);
			this->groupBoxRb->TabIndex = 2;
			this->groupBoxRb->TabStop = false;
			this->groupBoxRb->Text = L"Направление конвертации";
			// 
			// rbRoubleToEuro
			// 
			this->rbRoubleToEuro->AutoSize = true;
			this->rbRoubleToEuro->Location = System::Drawing::Point(14, 130);
			this->rbRoubleToEuro->Name = L"rbRoubleToEuro";
			this->rbRoubleToEuro->Size = System::Drawing::Size(118, 21);
			this->rbRoubleToEuro->TabIndex = 3;
			this->rbRoubleToEuro->Text = L"Рубли в евро";
			this->rbRoubleToEuro->UseVisualStyleBackColor = true;
			this->rbRoubleToEuro->Click += gcnew System::EventHandler(this, &MyForm::radioButton_Click);
			// 
			// rbEuroToRouble
			// 
			this->rbEuroToRouble->AutoSize = true;
			this->rbEuroToRouble->Location = System::Drawing::Point(14, 99);
			this->rbEuroToRouble->Name = L"rbEuroToRouble";
			this->rbEuroToRouble->Size = System::Drawing::Size(118, 21);
			this->rbEuroToRouble->TabIndex = 2;
			this->rbEuroToRouble->Text = L"Евро в рубли";
			this->rbEuroToRouble->UseVisualStyleBackColor = true;
			this->rbEuroToRouble->Click += gcnew System::EventHandler(this, &MyForm::radioButton_Click);
			// 
			// rbRoubleToDollar
			// 
			this->rbRoubleToDollar->AutoSize = true;
			this->rbRoubleToDollar->Location = System::Drawing::Point(13, 63);
			this->rbRoubleToDollar->Name = L"rbRoubleToDollar";
			this->rbRoubleToDollar->Size = System::Drawing::Size(146, 21);
			this->rbRoubleToDollar->TabIndex = 1;
			this->rbRoubleToDollar->Text = L"Рубли в доллары";
			this->rbRoubleToDollar->UseVisualStyleBackColor = true;
			this->rbRoubleToDollar->Click += gcnew System::EventHandler(this, &MyForm::radioButton_Click);
			// 
			// rbDollarToRouble
			// 
			this->rbDollarToRouble->AutoSize = true;
			this->rbDollarToRouble->Location = System::Drawing::Point(13, 32);
			this->rbDollarToRouble->Name = L"rbDollarToRouble";
			this->rbDollarToRouble->Size = System::Drawing::Size(145, 21);
			this->rbDollarToRouble->TabIndex = 0;
			this->rbDollarToRouble->Text = L"Доллары в рубли";
			this->rbDollarToRouble->UseVisualStyleBackColor = true;
			this->rbDollarToRouble->Click += gcnew System::EventHandler(this, &MyForm::radioButton_Click);
			// 
			// btnCalc
			// 
			this->btnCalc->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCalc->Location = System::Drawing::Point(387, 198);
			this->btnCalc->Name = L"btnCalc";
			this->btnCalc->Size = System::Drawing::Size(148, 33);
			this->btnCalc->TabIndex = 3;
			this->btnCalc->Text = L"Конвертировать";
			this->btnCalc->UseVisualStyleBackColor = true;
			this->btnCalc->Click += gcnew System::EventHandler(this, &MyForm::btnCalc_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(550, 198);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(88, 33);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 257);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnCalc);
			this->Controls->Add(this->groupBoxRb);
			this->Controls->Add(this->groupBoxResult);
			this->Controls->Add(this->groupBoxInitial);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"АРМ оператора обменного пункта";
			this->groupBoxInitial->ResumeLayout(false);
			this->groupBoxInitial->PerformLayout();
			this->groupBoxResult->ResumeLayout(false);
			this->groupBoxResult->PerformLayout();
			this->groupBoxRb->ResumeLayout(false);
			this->groupBoxRb->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	double roubleToDollar = 68.99;
	double dollarToRouble = 59.76;

	double roubleToEuro = 67.37;
	double euroToRouble = 56.43;

	String^ roubleExch = "RUB";
	String^ dollarExch = "USD";
	String^ euroExch = "EUR";

	String^ fromExch = "";
	String^ toExch = "";
	double cource = 0;

	private: String^ formatNumber(String^ num) {
		if (!num->Contains(",")) {
			num += ",";
		}
		if (num->EndsWith(",")) {
			num += "00";
		}

		array<String^>^ arr = num->Split(',');
		String^ afterComma = arr[1];
		for (int i = 0; i < (2 - afterComma->Length); i++) {
			afterComma = afterComma + "0";
		}
		return arr[0] + "," + afterComma;
	}

	private: void inputValidateOnType(Windows::Forms::TextBox ^ textbox, Windows::Forms::KeyPressEventArgs ^ e) {
		// Disable typing before "-"
		if (textbox->SelectionStart == 0 && textbox->Text->StartsWith("-")) {
			e->Handled = true;
		}
		// Access ","
		else if (e->KeyChar == ',') {
			if (textbox->Text->Contains(",")) {
				e->Handled = true;
			}
		}
		// Access digits and backspace
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
	}

	private: void inputValidate(Windows::Forms::TextBox^ textbox) {
		if (textbox->Text == "" || textbox->Text == ",") {
			textbox->Text = "1,00";
		}

		// Добавляет нули в конец, если их не хватает
		textbox->Text = formatNumber(textbox->Text);
		
		// Если значение равно 0, сделать 1
		if (Convert::ToDouble(textbox->Text) == 0) {
			textbox->Text = "1,00";
		}		
	}

	private: void generateCourseText() {
		double exch = Math::Round(cource * 10000) / 10000;

		inputExchange->Text = formatNumber(Convert::ToString(exch));
		labelExch->Text = String::Format("Курс обмена({0} / {1}):", fromExch, toExch);

		labelFrom->Text = fromExch;
		labelTo->Text = toExch;
	}

	private: String^ selectRb() {
		if (rbDollarToRouble->Checked) {
			fromExch = dollarExch;
			toExch = roubleExch;
			cource = dollarToRouble;
			return rbDollarToRouble->Text;
		}
		if (rbRoubleToDollar->Checked) {
			fromExch = roubleExch;
			toExch = dollarExch;
			cource = 1 / roubleToDollar;
			return rbRoubleToDollar->Text;
		}
		if (rbEuroToRouble->Checked) {
			fromExch = euroExch;
			toExch = roubleExch;
			cource = euroToRouble;
			return rbEuroToRouble->Text;
		}
		if (rbRoubleToEuro->Checked) {
			fromExch = roubleExch;
			toExch = euroExch;
			cource = 1 / roubleToEuro;
			return rbRoubleToEuro->Text;
		}
		return "";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: void radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
		selectRb();

		inputFrom->Text = "";
		inputTo->Text = "";
		generateCourseText();
	}

	private: System::Void inputValue_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidateOnType(inputValue, e);
	}

	private: System::Void inputExchange_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidateOnType(inputExchange, e);
	}

	private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		inputValidate(inputValue);

		String^ rb = selectRb();

		if (rb == "") {
			rbDollarToRouble->Checked = true;
			rb = selectRb();
		}

		double res;
		if (rb->StartsWith("Рубли"))

		res = Convert::ToDouble(inputValue->Text) * cource;
		res = Math::Round(res * 100) / 100;
		
		/*
		double roubleToDollar = 68.99;
		double dollarToRouble = 59.76;

		double roubleToEuro = 67.37;
		double euroToRouble = 56.43;
		*/

		generateCourseText();
		inputTo->Text = formatNumber(Convert::ToString(res));
		labelFrom->Text = fromExch;
	}
};
}
