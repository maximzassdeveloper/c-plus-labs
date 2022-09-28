#pragma once

namespace Calc {

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
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonReset;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::TextBox^ firstNum;
	private: System::Windows::Forms::TextBox^ secondNum;
	private: System::Windows::Forms::TextBox^ result;
	private: System::Windows::Forms::Label^ firstNumLabel;
	private: System::Windows::Forms::Label^ secondNumLabel;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Button^ buttonDivision;
	private: System::Windows::Forms::Button^ buttonMultiple;

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
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->firstNum = (gcnew System::Windows::Forms::TextBox());
			this->secondNum = (gcnew System::Windows::Forms::TextBox());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->firstNumLabel = (gcnew System::Windows::Forms::Label());
			this->secondNumLabel = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->buttonDivision = (gcnew System::Windows::Forms::Button());
			this->buttonMultiple = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(445, 292);
			this->buttonClose->Margin = System::Windows::Forms::Padding(4);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(133, 37);
			this->buttonClose->TabIndex = 0;
			this->buttonClose->Text = L"Закрыть";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MyForm::buttonClose_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Location = System::Drawing::Point(445, 15);
			this->buttonPlus->Margin = System::Windows::Forms::Padding(4);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(133, 37);
			this->buttonPlus->TabIndex = 1;
			this->buttonPlus->Text = L"Сложение";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(445, 242);
			this->buttonReset->Margin = System::Windows::Forms::Padding(4);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(133, 37);
			this->buttonReset->TabIndex = 2;
			this->buttonReset->Text = L"Сброс";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Location = System::Drawing::Point(445, 64);
			this->buttonMinus->Margin = System::Windows::Forms::Padding(4);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(133, 37);
			this->buttonMinus->TabIndex = 3;
			this->buttonMinus->Text = L"Разность";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title->Location = System::Drawing::Point(31, 23);
			this->title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(0, 20);
			this->title->TabIndex = 4;
			// 
			// firstNum
			// 
			this->firstNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firstNum->Location = System::Drawing::Point(192, 70);
			this->firstNum->Margin = System::Windows::Forms::Padding(4);
			this->firstNum->Name = L"firstNum";
			this->firstNum->Size = System::Drawing::Size(132, 26);
			this->firstNum->TabIndex = 5;
			this->firstNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->firstNum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::firstNum_KeyPress);
			// 
			// secondNum
			// 
			this->secondNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->secondNum->Location = System::Drawing::Point(192, 117);
			this->secondNum->Margin = System::Windows::Forms::Padding(4);
			this->secondNum->Name = L"secondNum";
			this->secondNum->Size = System::Drawing::Size(132, 26);
			this->secondNum->TabIndex = 6;
			this->secondNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->secondNum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::secondNum_KeyPress);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(192, 164);
			this->result->Margin = System::Windows::Forms::Padding(4);
			this->result->Name = L"result";
			this->result->ReadOnly = true;
			this->result->Size = System::Drawing::Size(132, 26);
			this->result->TabIndex = 7;
			this->result->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// firstNumLabel
			// 
			this->firstNumLabel->AutoSize = true;
			this->firstNumLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firstNumLabel->Location = System::Drawing::Point(31, 70);
			this->firstNumLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->firstNumLabel->Name = L"firstNumLabel";
			this->firstNumLabel->Size = System::Drawing::Size(131, 20);
			this->firstNumLabel->TabIndex = 8;
			this->firstNumLabel->Text = L"Первое число:";
			// 
			// secondNumLabel
			// 
			this->secondNumLabel->AutoSize = true;
			this->secondNumLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->secondNumLabel->Location = System::Drawing::Point(31, 117);
			this->secondNumLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->secondNumLabel->Name = L"secondNumLabel";
			this->secondNumLabel->Size = System::Drawing::Size(130, 20);
			this->secondNumLabel->TabIndex = 9;
			this->secondNumLabel->Text = L"Второе число:";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultLabel->Location = System::Drawing::Point(31, 164);
			this->resultLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(102, 20);
			this->resultLabel->TabIndex = 10;
			this->resultLabel->Text = L"Результат:";
			// 
			// buttonDivision
			// 
			this->buttonDivision->Location = System::Drawing::Point(445, 116);
			this->buttonDivision->Margin = System::Windows::Forms::Padding(4);
			this->buttonDivision->Name = L"buttonDivision";
			this->buttonDivision->Size = System::Drawing::Size(133, 37);
			this->buttonDivision->TabIndex = 11;
			this->buttonDivision->Text = L"Деление";
			this->buttonDivision->UseVisualStyleBackColor = true;
			this->buttonDivision->Click += gcnew System::EventHandler(this, &MyForm::buttonDivision_Click);
			// 
			// buttonMultiple
			// 
			this->buttonMultiple->Location = System::Drawing::Point(445, 170);
			this->buttonMultiple->Margin = System::Windows::Forms::Padding(4);
			this->buttonMultiple->Name = L"buttonMultiple";
			this->buttonMultiple->Size = System::Drawing::Size(133, 37);
			this->buttonMultiple->TabIndex = 12;
			this->buttonMultiple->Text = L"Умножение";
			this->buttonMultiple->UseVisualStyleBackColor = true;
			this->buttonMultiple->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiple_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 354);
			this->Controls->Add(this->buttonMultiple);
			this->Controls->Add(this->buttonDivision);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->secondNumLabel);
			this->Controls->Add(this->firstNumLabel);
			this->Controls->Add(this->result);
			this->Controls->Add(this->secondNum);
			this->Controls->Add(this->firstNum);
			this->Controls->Add(this->title);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	// Helper functions
	private: void validationMessageShow(System::String^ text) {
		MessageBox::Show(text, "Уведомление", MessageBoxButtons::OK);
	}
	private: void textBoxValidation(System::Windows::Forms::TextBox^ textBox, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Disable typing before "-"
		if (textBox->SelectionStart == 0 && textBox->Text->StartsWith("-")) {
			e->Handled = true;
		}
		// Access ","
		if (e->KeyChar == ',') {
			if (textBox->Text->Contains(",")) {
				e->Handled = true;
			}
		}
		// Access "-"
		else if (e->KeyChar == '-' && !textBox->Text->Contains("-")) {
			e->Handled = true;
			textBox->Text = "-" + textBox->Text;
			textBox->SelectionStart = textBox->Text->Length;
		}
		// Access digits and backspace
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
	}
	private: bool buttonClickValidation() {
		if (firstNum->Text == "" || secondNum->Text == "") {
			validationMessageShow("Значение поля не должно быть пустым");
			return false;
		}
		if (firstNum->Text->StartsWith(",")) {
			firstNum->Text = "0" + firstNum->Text;
		}
		if (secondNum->Text->StartsWith(",")) {
			secondNum->Text = "0" + secondNum->Text;
		}
		return true;
	}
	
	// Event Listeners
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->title->Text = L"";
		this->firstNum->Text = L"";
		this->secondNum->Text = L"";
		this->result->Text = L"";
	}

	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!buttonClickValidation()) {
			return;
		}

		this->title->Text = L"Сложение";
		double res = Convert::ToDouble(firstNum->Text) + Convert::ToDouble(secondNum->Text);
		this->result->Text = Convert::ToString(res);
	}
	private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!buttonClickValidation()) {
			return;
		}

		this->title->Text = L"Разность";
		double res = Convert::ToDouble(firstNum->Text) - Convert::ToDouble(secondNum->Text);
		this->result->Text = Convert::ToString(res);
	}
	private: System::Void buttonDivision_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!buttonClickValidation()) {
			return;
		}
		if (secondNum->Text == "0" || secondNum->Text == "-0") {
			validationMessageShow("Делить на 0 нельзя");
			return;
		}
		
		this->title->Text = L"Деление";
		double res = Convert::ToDouble(firstNum->Text) / Convert::ToDouble(secondNum->Text);
		this->result->Text = Convert::ToString(res);
	}
	private: System::Void buttonMultiple_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!buttonClickValidation()) {
			return;
		}

		this->title->Text = L"Умножение";
		double res = Convert::ToDouble(firstNum->Text) * Convert::ToDouble(secondNum->Text);
		this->result->Text = Convert::ToString(res);
	}


	private: System::Void firstNum_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		this->textBoxValidation(this->firstNum, e);
	}
	private: System::Void secondNum_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		this->textBoxValidation(this->secondNum, e);
	}
};
}
