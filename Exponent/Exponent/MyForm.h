#pragma once

namespace Exponent {

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
	private: System::Windows::Forms::GroupBox^ groupBoxX;
	private: System::Windows::Forms::Label^ labelX;
	private: System::Windows::Forms::TextBox^ inputX;
	protected:


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelResult;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->groupBoxX = (gcnew System::Windows::Forms::GroupBox());
			this->labelX = (gcnew System::Windows::Forms::Label());
			this->inputX = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->title = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBoxX->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxX
			// 
			this->groupBoxX->Controls->Add(this->labelX);
			this->groupBoxX->Controls->Add(this->inputX);
			this->groupBoxX->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxX->Location = System::Drawing::Point(12, 63);
			this->groupBoxX->Name = L"groupBoxX";
			this->groupBoxX->Size = System::Drawing::Size(408, 80);
			this->groupBoxX->TabIndex = 0;
			this->groupBoxX->TabStop = false;
			this->groupBoxX->Text = L"Ввод значения X (-13 <= X <= 20)";
			// 
			// labelX
			// 
			this->labelX->AutoSize = true;
			this->labelX->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelX->Location = System::Drawing::Point(22, 37);
			this->labelX->Name = L"labelX";
			this->labelX->Size = System::Drawing::Size(31, 19);
			this->labelX->TabIndex = 1;
			this->labelX->Text = L"x =";
			// 
			// inputX
			// 
			this->inputX->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->inputX->Location = System::Drawing::Point(58, 34);
			this->inputX->Name = L"inputX";
			this->inputX->Size = System::Drawing::Size(320, 27);
			this->inputX->TabIndex = 0;
			this->inputX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputX_KeyPress);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 159);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(408, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор точности";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->radioButton6->Location = System::Drawing::Point(280, 60);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(98, 23);
			this->radioButton6->TabIndex = 8;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"0,000001";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->radioButton5->Location = System::Drawing::Point(280, 31);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(89, 23);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"0,00001";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->radioButton4->Location = System::Drawing::Point(150, 60);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(80, 23);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"0,0001";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->radioButton3->Location = System::Drawing::Point(150, 31);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(71, 23);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"0,001";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->radioButton2->Location = System::Drawing::Point(26, 60);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(62, 23);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"0,01";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->radioButton1->Location = System::Drawing::Point(26, 31);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(53, 23);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0,1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// title
			// 
			this->title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title->Location = System::Drawing::Point(12, 21);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(333, 20);
			this->title->TabIndex = 2;
			this->title->Text = L"exp(X) = 1 + x/1! + x^2/2! + x^3/3! + ...";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(408, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Расчёт exp(x)";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->labelResult->Location = System::Drawing::Point(12, 322);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(180, 19);
			this->labelResult->TabIndex = 4;
			this->labelResult->Text = L"Результаты расчёта:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8));
			this->label1->Location = System::Drawing::Point(13, 353);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Исходное значение = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 8));
			this->label2->Location = System::Drawing::Point(13, 379);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Точность =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 8));
			this->label3->Location = System::Drawing::Point(13, 406);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Точное значение exp(x) =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 8));
			this->label4->Location = System::Drawing::Point(13, 433);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Число слагаемых =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 8));
			this->label5->Location = System::Drawing::Point(13, 460);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Сумма ряда exp(x) =";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(332, 488);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(88, 31);
			this->btnClose->TabIndex = 10;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(432, 531);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->title);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxX);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Расчёт exp(x)";
			this->groupBoxX->ResumeLayout(false);
			this->groupBoxX->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void inputX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Disable typing before "-"
		if (inputX->SelectionStart == 0 && inputX->Text->StartsWith("-")) {
			e->Handled = true;
		}
		// Access ","
		else if (e->KeyChar == ',') {
			if (inputX->Text->Contains(",")) {
				e->Handled = true;
			}
		}
		// Access "-"
		else if (e->KeyChar == '-' && !inputX->Text->Contains("-")) {
			e->Handled = true;
			inputX->Text = "-" + inputX->Text;
			inputX->SelectionStart = inputX->Text->Length;
		}
		// Access digits and backspace
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
	}
};
}
