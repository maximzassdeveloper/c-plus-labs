#pragma once
#include <math.h>

namespace QuadraticEquation {

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

	private: System::Windows::Forms::Label^ labelCoeff;
	private: System::Windows::Forms::Label^ labelA;
	private: System::Windows::Forms::Label^ labelC;
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::TextBox^ inputA;
	private: System::Windows::Forms::TextBox^ inputB;
	private: System::Windows::Forms::TextBox^ inputC;
	private: System::Windows::Forms::Label^ labelRoots;
	private: System::Windows::Forms::TextBox^ inputX1;
	private: System::Windows::Forms::Label^ labelX1;


	private: System::Windows::Forms::TextBox^ inputX2;
	private: System::Windows::Forms::Label^ labelX2;





	private: System::Windows::Forms::Label^ labelResult;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnCalc;
	private: System::Windows::Forms::Button^ btnClose;




	protected:

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
			this->labelCoeff = (gcnew System::Windows::Forms::Label());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->labelC = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->inputA = (gcnew System::Windows::Forms::TextBox());
			this->inputB = (gcnew System::Windows::Forms::TextBox());
			this->inputC = (gcnew System::Windows::Forms::TextBox());
			this->labelRoots = (gcnew System::Windows::Forms::Label());
			this->inputX1 = (gcnew System::Windows::Forms::TextBox());
			this->labelX1 = (gcnew System::Windows::Forms::Label());
			this->inputX2 = (gcnew System::Windows::Forms::TextBox());
			this->labelX2 = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnCalc = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelCoeff
			// 
			this->labelCoeff->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelCoeff->Location = System::Drawing::Point(47, 33);
			this->labelCoeff->Name = L"labelCoeff";
			this->labelCoeff->Size = System::Drawing::Size(169, 42);
			this->labelCoeff->TabIndex = 1;
			this->labelCoeff->Text = L"Коэффиценты уравнения";
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelA->Location = System::Drawing::Point(47, 100);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(38, 19);
			this->labelA->TabIndex = 2;
			this->labelA->Text = L"a = ";
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelC->Location = System::Drawing::Point(47, 177);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(38, 19);
			this->labelC->TabIndex = 3;
			this->labelC->Text = L"c = ";
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelB->Location = System::Drawing::Point(47, 137);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(38, 19);
			this->labelB->TabIndex = 4;
			this->labelB->Text = L"b = ";
			// 
			// inputA
			// 
			this->inputA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->inputA->Location = System::Drawing::Point(83, 98);
			this->inputA->Name = L"inputA";
			this->inputA->Size = System::Drawing::Size(120, 27);
			this->inputA->TabIndex = 5;
			this->inputA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputA_KeyPress);
			// 
			// inputB
			// 
			this->inputB->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->inputB->Location = System::Drawing::Point(83, 137);
			this->inputB->Name = L"inputB";
			this->inputB->Size = System::Drawing::Size(120, 27);
			this->inputB->TabIndex = 6;
			this->inputB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputB_KeyPress);
			// 
			// inputC
			// 
			this->inputC->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->inputC->Location = System::Drawing::Point(83, 176);
			this->inputC->Name = L"inputC";
			this->inputC->Size = System::Drawing::Size(120, 27);
			this->inputC->TabIndex = 7;
			this->inputC->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputC_KeyPress);
			// 
			// labelRoots
			// 
			this->labelRoots->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelRoots->Location = System::Drawing::Point(285, 33);
			this->labelRoots->Name = L"labelRoots";
			this->labelRoots->Size = System::Drawing::Size(138, 42);
			this->labelRoots->TabIndex = 8;
			this->labelRoots->Text = L"Корни уравнения";
			// 
			// inputX1
			// 
			this->inputX1->BackColor = System::Drawing::Color::White;
			this->inputX1->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->inputX1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->inputX1->Location = System::Drawing::Point(328, 99);
			this->inputX1->Name = L"inputX1";
			this->inputX1->ReadOnly = true;
			this->inputX1->Size = System::Drawing::Size(120, 27);
			this->inputX1->TabIndex = 10;
			this->inputX1->TabStop = false;
			// 
			// labelX1
			// 
			this->labelX1->AutoSize = true;
			this->labelX1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelX1->Location = System::Drawing::Point(285, 101);
			this->labelX1->Name = L"labelX1";
			this->labelX1->Size = System::Drawing::Size(45, 19);
			this->labelX1->TabIndex = 9;
			this->labelX1->Text = L"x1 = ";
			// 
			// inputX2
			// 
			this->inputX2->BackColor = System::Drawing::Color::White;
			this->inputX2->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->inputX2->Location = System::Drawing::Point(328, 137);
			this->inputX2->Name = L"inputX2";
			this->inputX2->ReadOnly = true;
			this->inputX2->Size = System::Drawing::Size(120, 27);
			this->inputX2->TabIndex = 12;
			this->inputX2->TabStop = false;
			// 
			// labelX2
			// 
			this->labelX2->AutoSize = true;
			this->labelX2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelX2->Location = System::Drawing::Point(285, 139);
			this->labelX2->Name = L"labelX2";
			this->labelX2->Size = System::Drawing::Size(45, 19);
			this->labelX2->TabIndex = 11;
			this->labelX2->Text = L"x2 = ";
			// 
			// labelResult
			// 
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(205)));
			this->labelResult->Location = System::Drawing::Point(285, 184);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(307, 64);
			this->labelResult->TabIndex = 13;
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->btnReset->Location = System::Drawing::Point(51, 282);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(109, 34);
			this->btnReset->TabIndex = 14;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnCalc
			// 
			this->btnCalc->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->btnCalc->Location = System::Drawing::Point(182, 282);
			this->btnCalc->Name = L"btnCalc";
			this->btnCalc->Size = System::Drawing::Size(109, 34);
			this->btnCalc->TabIndex = 15;
			this->btnCalc->Text = L"Решить";
			this->btnCalc->UseVisualStyleBackColor = true;
			this->btnCalc->Click += gcnew System::EventHandler(this, &MyForm::btnCalc_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->btnClose->Location = System::Drawing::Point(314, 282);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(109, 34);
			this->btnClose->TabIndex = 16;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(604, 354);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnCalc);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->inputX2);
			this->Controls->Add(this->labelX2);
			this->Controls->Add(this->inputX1);
			this->Controls->Add(this->labelX1);
			this->Controls->Add(this->labelRoots);
			this->Controls->Add(this->inputC);
			this->Controls->Add(this->inputB);
			this->Controls->Add(this->inputA);
			this->Controls->Add(this->labelB);
			this->Controls->Add(this->labelC);
			this->Controls->Add(this->labelA);
			this->Controls->Add(this->labelCoeff);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Helper
	private: Void inputValidation(Windows::Forms::TextBox^ input, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Disable typing before "-"
		if (input->SelectionStart == 0 && input->Text->StartsWith("-")) {
			e->Handled = true;
		}
		// Access ","
		else if (e->KeyChar == ',') {
			if (input->Text->Contains(",")) {
				e->Handled = true;
			}
		}
		// Access "-"
		else if (e->KeyChar == '-' && !input->Text->Contains("-")) {
			e->Handled = true;
			input->Text = "-" + input->Text;
			input->SelectionStart = input->Text->Length;
		}
		// Access digits and backspace
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
	}

	private: bool valueValidation() {

	}

	// Buttons
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputA->Text = "";
		this->inputB->Text = "";
		this->inputC->Text = "";
		this->inputX1->Text = "";
		this->inputX2->Text = "";
		this->inputX1->Show();
		this->inputX2->Show();
		this->labelResult->Text = "";
	}
	private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->inputA->Text->Length) {
			this->inputA->Text = "0";
		}
		if (!this->inputB->Text->Length) {
			this->inputB->Text = "0";
		}
		if (!this->inputC->Text->Length) {
			this->inputC->Text = "0";
		}

		double a = Convert::ToDouble(this->inputA->Text);
		double b = Convert::ToDouble(this->inputB->Text);
		double c = Convert::ToDouble(this->inputC->Text);

		if (a == 0 && b == 0) {
			this->inputX1->Hide();
			this->inputX2->Hide();
			this->labelX1->Hide();
			this->labelX2->Hide();
			this->labelResult->Text = "Значение = " + Convert::ToString(c);
			//return this->labelResult->Text = "Уравнение не корректно";
		} 
		else if (a == 0 && b != 0) {
			this->inputX1->Text = Convert::ToString(-c / b);
			this->inputX2->Hide();
			this->labelX2->Hide();
			return this->labelResult->Text = "Линейное уравнение - имеет один корень";
		}
		else {
			this->inputX1->Show();
			this->inputX2->Show();
			this->labelX1->Show();
			this->labelX2->Show();

			double D = pow(b, 2) - 4 * a * c;

			if (D > 0) {
				this->labelResult->Text = "Дискриминант > 0 \nУравнение имеет два корня";
			} else if (D < 0) {
				this->labelResult->Text = "Дискриминант < 0 \nДействительных корней уравнения не существует";
			} else {
				this->labelResult->Text = "Дискриминант = 0 \nУравнение имеет два одинаковых корня";
			}

			double x1 = (-b + sqrt(D)) / (2 * a);
			double x2 = (-b - sqrt(D)) / (2 * a);

			this->inputX1->Text = Convert::ToString(x1);
			this->inputX2->Text = Convert::ToString(x2);
		}
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	// Inputs
	private: System::Void inputA_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidation(this->inputA, e);
	}
	private: System::Void inputB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidation(this->inputB, e);
	}
	private: System::Void inputC_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidation(this->inputC, e);
	}
};
}
