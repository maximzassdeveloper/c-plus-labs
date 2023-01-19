#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <msclr/marshal_cppstd.h>

namespace Arrays {

	using namespace System;
	using namespace System::IO;
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
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnGenerate;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBoxRb;
	private: System::Windows::Forms::RadioButton^ rbMax;

	private: System::Windows::Forms::RadioButton^ rbMin;

	private: System::Windows::Forms::RadioButton^ rbAverage;


	private: System::Windows::Forms::RadioButton^ rbSumm;

	private: System::Windows::Forms::GroupBox^ groupBoxInitial;
	private: System::Windows::Forms::TextBox^ inputCount;
	private: System::Windows::Forms::TextBox^ inputMin;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inputMax;

	private: System::Windows::Forms::Label^ labelValue;
	private: System::Windows::Forms::Label^ labelExch;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rbSortDown;

	private: System::Windows::Forms::RadioButton^ rbSortUp;

	private: System::Windows::Forms::RadioButton^ rbOdd;

	private: System::Windows::Forms::RadioButton^ rbEven;

	private: System::Windows::Forms::TextBox^ inputArray;
	private: System::Windows::Forms::TextBox^ inputRes;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialogEnter;

	private: System::Windows::Forms::Button^ btnEnterFile;
	private: System::Windows::Forms::Button^ btnCalc;


	private: System::Windows::Forms::TextBox^ inputOpenFile;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ inputSaveFile;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnSave;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialogSave;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->groupBoxRb = (gcnew System::Windows::Forms::GroupBox());
			this->rbSortDown = (gcnew System::Windows::Forms::RadioButton());
			this->rbSortUp = (gcnew System::Windows::Forms::RadioButton());
			this->rbOdd = (gcnew System::Windows::Forms::RadioButton());
			this->rbEven = (gcnew System::Windows::Forms::RadioButton());
			this->rbMax = (gcnew System::Windows::Forms::RadioButton());
			this->rbMin = (gcnew System::Windows::Forms::RadioButton());
			this->rbAverage = (gcnew System::Windows::Forms::RadioButton());
			this->rbSumm = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxInitial = (gcnew System::Windows::Forms::GroupBox());
			this->inputCount = (gcnew System::Windows::Forms::TextBox());
			this->inputMin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputMax = (gcnew System::Windows::Forms::TextBox());
			this->labelValue = (gcnew System::Windows::Forms::Label());
			this->labelExch = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->inputArray = (gcnew System::Windows::Forms::TextBox());
			this->inputRes = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialogEnter = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnEnterFile = (gcnew System::Windows::Forms::Button());
			this->btnCalc = (gcnew System::Windows::Forms::Button());
			this->inputOpenFile = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->inputSaveFile = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->openFileDialogSave = (gcnew System::Windows::Forms::OpenFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBoxRb->SuspendLayout();
			this->groupBoxInitial->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(537, 456);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(179, 33);
			this->btnClose->TabIndex = 20;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnGenerate
			// 
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGenerate->Location = System::Drawing::Point(537, 33);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(179, 33);
			this->btnGenerate->TabIndex = 14;
			this->btnGenerate->Text = L"Генерация массива";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MyForm::btnGenerate_Click);
			// 
			// groupBoxRb
			// 
			this->groupBoxRb->Controls->Add(this->rbSortDown);
			this->groupBoxRb->Controls->Add(this->rbSortUp);
			this->groupBoxRb->Controls->Add(this->rbOdd);
			this->groupBoxRb->Controls->Add(this->rbEven);
			this->groupBoxRb->Controls->Add(this->rbMax);
			this->groupBoxRb->Controls->Add(this->rbMin);
			this->groupBoxRb->Controls->Add(this->rbAverage);
			this->groupBoxRb->Controls->Add(this->rbSumm);
			this->groupBoxRb->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->groupBoxRb->Location = System::Drawing::Point(12, 262);
			this->groupBoxRb->Name = L"groupBoxRb";
			this->groupBoxRb->Size = System::Drawing::Size(495, 166);
			this->groupBoxRb->TabIndex = 6;
			this->groupBoxRb->TabStop = false;
			this->groupBoxRb->Text = L"Операции с массивом";
			// 
			// rbSortDown
			// 
			this->rbSortDown->AutoSize = true;
			this->rbSortDown->Location = System::Drawing::Point(242, 122);
			this->rbSortDown->Name = L"rbSortDown";
			this->rbSortDown->Size = System::Drawing::Size(204, 21);
			this->rbSortDown->TabIndex = 11;
			this->rbSortDown->Text = L"Сортировка по убыванию";
			this->rbSortDown->UseVisualStyleBackColor = true;
			this->rbSortDown->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// rbSortUp
			// 
			this->rbSortUp->AutoSize = true;
			this->rbSortUp->Location = System::Drawing::Point(242, 92);
			this->rbSortUp->Name = L"rbSortUp";
			this->rbSortUp->Size = System::Drawing::Size(223, 21);
			this->rbSortUp->TabIndex = 10;
			this->rbSortUp->Text = L"Сортировка по возрастанию";
			this->rbSortUp->UseVisualStyleBackColor = true;
			this->rbSortUp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// rbOdd
			// 
			this->rbOdd->AutoSize = true;
			this->rbOdd->Location = System::Drawing::Point(242, 63);
			this->rbOdd->Name = L"rbOdd";
			this->rbOdd->Size = System::Drawing::Size(169, 21);
			this->rbOdd->TabIndex = 9;
			this->rbOdd->Text = L"Нечётные элементы";
			this->rbOdd->UseVisualStyleBackColor = true;
			this->rbOdd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// rbEven
			// 
			this->rbEven->AutoSize = true;
			this->rbEven->Location = System::Drawing::Point(242, 32);
			this->rbEven->Name = L"rbEven";
			this->rbEven->Size = System::Drawing::Size(152, 21);
			this->rbEven->TabIndex = 8;
			this->rbEven->Text = L"Чётные элементы";
			this->rbEven->UseVisualStyleBackColor = true;
			this->rbEven->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// rbMax
			// 
			this->rbMax->AutoSize = true;
			this->rbMax->Location = System::Drawing::Point(13, 122);
			this->rbMax->Name = L"rbMax";
			this->rbMax->Size = System::Drawing::Size(193, 21);
			this->rbMax->TabIndex = 7;
			this->rbMax->Text = L"Максимальный элемент";
			this->rbMax->UseVisualStyleBackColor = true;
			this->rbMax->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// rbMin
			// 
			this->rbMin->AutoSize = true;
			this->rbMin->Location = System::Drawing::Point(13, 92);
			this->rbMin->Name = L"rbMin";
			this->rbMin->Size = System::Drawing::Size(186, 21);
			this->rbMin->TabIndex = 6;
			this->rbMin->Text = L"Минимальный элемент";
			this->rbMin->UseVisualStyleBackColor = true;
			this->rbMin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// rbAverage
			// 
			this->rbAverage->AutoSize = true;
			this->rbAverage->Location = System::Drawing::Point(13, 63);
			this->rbAverage->Name = L"rbAverage";
			this->rbAverage->Size = System::Drawing::Size(156, 21);
			this->rbAverage->TabIndex = 5;
			this->rbAverage->Text = L"Среднее значение";
			this->rbAverage->UseVisualStyleBackColor = true;
			this->rbAverage->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// rbSumm
			// 
			this->rbSumm->AutoSize = true;
			this->rbSumm->Checked = true;
			this->rbSumm->Location = System::Drawing::Point(13, 32);
			this->rbSumm->Name = L"rbSumm";
			this->rbSumm->Size = System::Drawing::Size(152, 21);
			this->rbSumm->TabIndex = 4;
			this->rbSumm->TabStop = true;
			this->rbSumm->Text = L"Сумма элементов";
			this->rbSumm->UseVisualStyleBackColor = true;
			this->rbSumm->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_CheckedChanged);
			// 
			// groupBoxInitial
			// 
			this->groupBoxInitial->Controls->Add(this->inputCount);
			this->groupBoxInitial->Controls->Add(this->inputMin);
			this->groupBoxInitial->Controls->Add(this->label1);
			this->groupBoxInitial->Controls->Add(this->inputMax);
			this->groupBoxInitial->Controls->Add(this->labelValue);
			this->groupBoxInitial->Controls->Add(this->labelExch);
			this->groupBoxInitial->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->groupBoxInitial->Location = System::Drawing::Point(12, 24);
			this->groupBoxInitial->Name = L"groupBoxInitial";
			this->groupBoxInitial->Size = System::Drawing::Size(495, 149);
			this->groupBoxInitial->TabIndex = 5;
			this->groupBoxInitial->TabStop = false;
			this->groupBoxInitial->Text = L"Исходные данные для генерации массива";
			// 
			// inputCount
			// 
			this->inputCount->Location = System::Drawing::Point(354, 33);
			this->inputCount->Name = L"inputCount";
			this->inputCount->ShortcutsEnabled = false;
			this->inputCount->Size = System::Drawing::Size(123, 25);
			this->inputCount->TabIndex = 0;
			this->inputCount->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputCount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputCount_KeyPress);
			this->inputCount->Leave += gcnew System::EventHandler(this, &MyForm::inputCount_Leave);
			this->inputCount->MouseHover += gcnew System::EventHandler(this, &MyForm::inputCount_MouseHover);
			// 
			// inputMin
			// 
			this->inputMin->Location = System::Drawing::Point(354, 69);
			this->inputMin->Name = L"inputMin";
			this->inputMin->ShortcutsEnabled = false;
			this->inputMin->Size = System::Drawing::Size(123, 25);
			this->inputMin->TabIndex = 1;
			this->inputMin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputMin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputMin_KeyPress);
			this->inputMin->Leave += gcnew System::EventHandler(this, &MyForm::inputMin_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label1->Location = System::Drawing::Point(10, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Максимальное значение диапазона:";
			// 
			// inputMax
			// 
			this->inputMax->Location = System::Drawing::Point(354, 106);
			this->inputMax->Name = L"inputMax";
			this->inputMax->ShortcutsEnabled = false;
			this->inputMax->Size = System::Drawing::Size(123, 25);
			this->inputMax->TabIndex = 2;
			this->inputMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputMax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputMax_KeyPress);
			this->inputMax->Leave += gcnew System::EventHandler(this, &MyForm::inputMax_Leave);
			// 
			// labelValue
			// 
			this->labelValue->AutoSize = true;
			this->labelValue->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->labelValue->Location = System::Drawing::Point(10, 36);
			this->labelValue->Name = L"labelValue";
			this->labelValue->Size = System::Drawing::Size(231, 17);
			this->labelValue->TabIndex = 1;
			this->labelValue->Text = L"Количество элементов массива:";
			// 
			// labelExch
			// 
			this->labelExch->AutoSize = true;
			this->labelExch->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->labelExch->Location = System::Drawing::Point(10, 72);
			this->labelExch->Name = L"labelExch";
			this->labelExch->Size = System::Drawing::Size(248, 17);
			this->labelExch->TabIndex = 0;
			this->labelExch->Text = L"Минимальное значение диапазона:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label2->Location = System::Drawing::Point(12, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Исходный массив:";
			// 
			// inputArray
			// 
			this->inputArray->Location = System::Drawing::Point(15, 218);
			this->inputArray->Name = L"inputArray";
			this->inputArray->ShortcutsEnabled = false;
			this->inputArray->Size = System::Drawing::Size(492, 22);
			this->inputArray->TabIndex = 3;
			this->inputArray->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::inputArray_KeyPress);
			this->inputArray->Leave += gcnew System::EventHandler(this, &MyForm::inputArray_Leave);
			// 
			// inputRes
			// 
			this->inputRes->BackColor = System::Drawing::Color::White;
			this->inputRes->Location = System::Drawing::Point(15, 467);
			this->inputRes->Name = L"inputRes";
			this->inputRes->ReadOnly = true;
			this->inputRes->ShortcutsEnabled = false;
			this->inputRes->Size = System::Drawing::Size(492, 22);
			this->inputRes->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label3->Location = System::Drawing::Point(12, 443);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Результат оперции:";
			// 
			// openFileDialogEnter
			// 
			this->openFileDialogEnter->FileName = L"openFileDialog1";
			// 
			// btnEnterFile
			// 
			this->btnEnterFile->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEnterFile->Location = System::Drawing::Point(537, 140);
			this->btnEnterFile->Name = L"btnEnterFile";
			this->btnEnterFile->Size = System::Drawing::Size(179, 33);
			this->btnEnterFile->TabIndex = 16;
			this->btnEnterFile->Text = L"Ввод из файла";
			this->btnEnterFile->UseVisualStyleBackColor = true;
			this->btnEnterFile->Click += gcnew System::EventHandler(this, &MyForm::btnEnterFile_Click);
			// 
			// btnCalc
			// 
			this->btnCalc->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCalc->Location = System::Drawing::Point(537, 273);
			this->btnCalc->Name = L"btnCalc";
			this->btnCalc->Size = System::Drawing::Size(179, 33);
			this->btnCalc->TabIndex = 17;
			this->btnCalc->Text = L"Выполнить";
			this->btnCalc->UseVisualStyleBackColor = true;
			this->btnCalc->Click += gcnew System::EventHandler(this, &MyForm::btnCalc_Click);
			// 
			// inputOpenFile
			// 
			this->inputOpenFile->BackColor = System::Drawing::Color::White;
			this->inputOpenFile->Location = System::Drawing::Point(538, 105);
			this->inputOpenFile->Name = L"inputOpenFile";
			this->inputOpenFile->ReadOnly = true;
			this->inputOpenFile->ShortcutsEnabled = false;
			this->inputOpenFile->Size = System::Drawing::Size(178, 22);
			this->inputOpenFile->TabIndex = 15;
			this->inputOpenFile->Click += gcnew System::EventHandler(this, &MyForm::inputOpenFile_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label4->Location = System::Drawing::Point(537, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Путь до файла ввода:";
			// 
			// inputSaveFile
			// 
			this->inputSaveFile->BackColor = System::Drawing::Color::White;
			this->inputSaveFile->Location = System::Drawing::Point(535, 355);
			this->inputSaveFile->Name = L"inputSaveFile";
			this->inputSaveFile->ReadOnly = true;
			this->inputSaveFile->ShortcutsEnabled = false;
			this->inputSaveFile->Size = System::Drawing::Size(178, 22);
			this->inputSaveFile->TabIndex = 18;
			this->inputSaveFile->Click += gcnew System::EventHandler(this, &MyForm::inputSaveFile_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label5->Location = System::Drawing::Point(534, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Путь до файла вывода:";
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave->Location = System::Drawing::Point(534, 393);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(179, 33);
			this->btnSave->TabIndex = 19;
			this->btnSave->Text = L"Сохранить в файл";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 514);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->inputSaveFile);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->inputOpenFile);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnCalc);
			this->Controls->Add(this->btnEnterFile);
			this->Controls->Add(this->inputRes);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->inputArray);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->groupBoxRb);
			this->Controls->Add(this->groupBoxInitial);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обработка массива";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBoxRb->ResumeLayout(false);
			this->groupBoxRb->PerformLayout();
			this->groupBoxInitial->ResumeLayout(false);
			this->groupBoxInitial->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ cashGenerated = "";

	private: void inputValidateOnChange(Windows::Forms::TextBox^ textbox, Windows::Forms::KeyPressEventArgs^ e, bool forCount) {
		// Disable typing before "-"
		if (textbox->SelectionStart == 0 && textbox->Text->StartsWith("-")) {
			e->Handled = true;
		}
		// Access ","
		else if (!forCount && e->KeyChar == ',') {
			if (textbox->Text->Contains(",")) {
				e->Handled = true;
			}
		}
		// Access "-"
		else if (!forCount && e->KeyChar == '-' && !textbox->Text->Contains("-")) {
			e->Handled = true;
			textbox->Text = "-" + textbox->Text;
			textbox->SelectionStart = textbox->Text->Length;
		}
		// Access digits and backspace
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
	}

	private: void inputValidateOnLeave(Windows::Forms::TextBox^ textbox, String^ defaultVal) {
		String^ text = textbox->Text;
		if (text == "" || text == "-" || text == "," || text == "-,") {
			textbox->Text = "";
			return;
		}

		if (textbox->Text->EndsWith(",")) {
			textbox->Text += "0";
		}
		if (textbox->Text->StartsWith(",")) {
			textbox->Text = "0" + textbox->Text;
		}
		if (textbox->Text->StartsWith("-,")) {
			textbox->Text = "-0," + textbox->Text->Remove(0, 2);
		}
		if (Convert::ToDouble(textbox->Text) == 0) {
			textbox->Text = "0";
		}
	}

	private: void validateArray() {
		if (inputArray->Text == "") {
			return;
		}

		array<String^>^ items = inputArray->Text->Split(' ');
		String^ newValue = "";

		for (int i = 0; i < items->Length; i++) {
			String^ item = items[i];
			String^ newItem = "";

			for (int j = 0; j < item->Length; j++) {
				if ((item[j] == ',' || item[j] == '.') && !newItem->Contains(",") && newItem != "") {
					newItem += ",";
				}
				if (Char::IsDigit(item[j])) {
					newItem += item[j];
				}
			}

			if (newItem != "") {
				if (item[0] == '-') {
					newItem = "-" + newItem;
				}
				if (newItem->EndsWith(",")) {
					newItem = newItem->Remove(newItem->Length - 1, 1);
				}
				newValue = newValue + " " + newItem;
			}
		}

		if (newValue != "") {
			newValue = newValue->Remove(0, 1);
		}
		inputArray->Text = newValue;
	}
	
	// Inputs keypress
	private: System::Void inputCount_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidateOnChange(inputCount, e, true);
	}

	private: System::Void inputMin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidateOnChange(inputMin, e, false);
	}

	private: System::Void inputMax_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		inputValidateOnChange(inputMax, e, false);
	}

	private: System::Void inputArray_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ' ' || e->KeyChar == ',' || e->KeyChar == '-') {
			e->Handled = false;
		} 
		else if (Char::IsDigit(e->KeyChar) || e->KeyChar == (Char)Keys::Back) {
			e->Handled = false;
		}
		else {
			e->Handled = true;
		}
	}
	
	// Inputs leave
	private: System::Void inputCount_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (inputCount->Text != "" && Convert::ToDouble(inputCount->Text) == 0) {
			inputCount->Text = "1";
		}
		inputRes->Text = "";
	}

	private: System::Void inputMin_Leave(System::Object^ sender, System::EventArgs^ e) {
		inputValidateOnLeave(inputMin, "-6");
	}

	private: System::Void inputMax_Leave(System::Object^ sender, System::EventArgs^ e) {
		inputValidateOnLeave(inputMax, "12");
	}

	private: System::Void inputArray_Leave(System::Object^ sender, System::EventArgs^ e) {
		validateArray();

		if (inputArray->Text != cashGenerated) {
			inputCount->Text = "";
			inputMin->Text = "";
			inputMax->Text = "";
		}
	}
	
	// RadioButton changeCheck
	private: System::Void rb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		inputRes->Text = "";
	}

	// Array functions
	private: String^ arraySum(double* arr, int len) {
		double res = 0;
		for (int i = 0; i < len; i++) {
			res += arr[i];
		}
		return String::Format("{0}: {1}", rbSumm->Text, res);
	}

	private: String^ arrayAverage(double* arr, int len) {
		double res = 0;
		for (int i = 0; i < len; i++) {
			res += arr[i];
		}
		return String::Format("{0}: {1}", rbAverage->Text, res / len);
	}

	private: String^ arrayMin(double* arr, int len) {
		double res = arr[0];
		for (int i = 0; i < len; i++) {
			if (arr[i] < res) {
				res = arr[i];
			}
		}
		return String::Format("{0}: {1}", rbMin->Text, res);
	}

	private: String^ arrayMax(double* arr, int len) {
		double res = 0;
		for (int i = 0; i < len; i++) {
			if (arr[i] > res) {
				res = arr[i];
			}
		}
		return String::Format("{0}: {1}", rbMax->Text, res);
	}

	private: String^ arrayEven(double* arr, int len) {
		String^ res = "";
		for (int i = 0; i < len; i++) {
			int a = static_cast<int>(arr[i]);
			if (a % 2 == 0) {
				res += Convert::ToString(arr[i]) + " ";
			}
		}
		return String::Format("{0}: {1}", rbEven->Text, res->Trim());
	}

	private: String^ arrayOdd(double* arr, int len) {
		String^ res = "";
		for (int i = 0; i < len; i++) {
			int a = static_cast<int>(arr[i]);
			if (a % 2 != 0) {
				res += Convert::ToString(arr[i]) + " ";
			}
		}
		return String::Format("{0}: {1}", rbOdd->Text, res->Trim());
	}

	private: String^ arraySortUp(double* arr, int len) {
		String^ res = "";
		std::sort(arr, arr + len, std::less<double>());
		for (int i = 0; i < len; i++) {
			res += arr[i] + " ";
		}
		return String::Format("{0}: {1}", rbSortUp->Text, res->Trim());
	}

	private: String^ arraySortDown(double* arr, int len) {
		String^ res = "";
		std::sort(arr, arr + len, std::greater<double>());
		for (int i = 0; i < len; i++) {
			res += arr[i] + " ";
		}
		return String::Format("{0}: {1}", rbSortDown->Text, res->Trim());
	}

	// Buttons
	
	// Calc array
	private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (inputArray->Text == "") {
			return;
		}

		array<String^> ^strArr = inputArray->Text->Split(' ');
		int len = strArr->Length;
		double* arr = new double[len];

		// Преобразуем массив из строк в массив чисел
		for (int i = 0; i < len; i++) {
			arr[i] = Convert::ToDouble(strArr[i]);
		}
		
		if (rbSumm->Checked) {
			inputRes->Text = arraySum(arr, len);
		}
		else if (rbAverage->Checked) {
			inputRes->Text = arrayAverage(arr, len);
		}
		else if (rbMin->Checked) {
			inputRes->Text = arrayMin(arr, len);
		}
		else if (rbMax->Checked) {
			inputRes->Text = arrayMax(arr, len);
		}
		else if (rbEven->Checked) {
			inputRes->Text = arrayEven(arr, len);
		}
		else if (rbOdd->Checked) {
			inputRes->Text = arrayOdd(arr, len);
		}
		else if (rbSortUp->Checked) {
			inputRes->Text = arraySortUp(arr, len);
		}
		else if (rbSortDown->Checked) {
			inputRes->Text = arraySortDown(arr, len);
		}
		
	}
	
	// Generate array
	private: System::Void btnGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (inputCount->Text == "" || inputMin->Text == "" || inputMax->Text == "") {
			MessageBox::Show("Все поля должны быть заполнены.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		inputRes->Text = "";
		
		int count = Convert::ToInt32(inputCount->Text);
		double min = Convert::ToDouble(inputMin->Text);
		double max = Convert::ToDouble(inputMax->Text);

		if (max < min) {
			inputMin->Text = inputMax->Text;
			inputMax->Text = Convert::ToString(min);
			min = Convert::ToDouble(inputMin->Text);
			max = Convert::ToDouble(inputMax->Text);
		}

		String^ arr = "";
		Random^ rand = gcnew Random();

		for (int i = 0; i < count; i++) {
			double n = rand->Next(min, max+1);
			arr += String::Format("{0} ", n);
		}

		if (arr != "") {
			arr = arr->Remove(arr->Length - 1, 1);
		}

		inputArray->Text = arr;
		cashGenerated = arr;
	}

	// Open enter file
	private: System::Void inputOpenFile_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialogEnter->Filter = "txt files (*.txt)|*.txt";
		openFileDialogEnter->FileName = "";

		if (openFileDialogEnter->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			inputOpenFile->Text = openFileDialogEnter->FileName;
		}
	}
	
	// Enter the file text
	private: System::Void btnEnterFile_Click(System::Object^ sender, System::EventArgs^ e) {

		if (inputOpenFile->Text == "") {
			MessageBox::Show("Выберите файл ввода.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		inputRes->Text = "";
		inputArray->Text = "";
		try {
			StreamReader^ reader = File::OpenText(openFileDialogEnter->FileName);
			do {
				inputArray->Text += " " + reader->ReadLine();
			} while (reader->Peek() != -1);

			reader->Close();

			validateArray();

			inputCount->Text = "";
			inputMin->Text = "";
			inputMax->Text = "";
		}
		catch (System::Exception^ e) {}
	}

	private: System::Void inputSaveFile_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialogSave->Filter = "txt files (*.txt)|*.txt";
		openFileDialogSave->FileName = "";

		if (openFileDialogSave->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			inputSaveFile->Text = openFileDialogSave->FileName;
		}
	}

	// Save
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {	
		if (inputSaveFile->Text == "") {
			MessageBox::Show("Выберите файл для сохранения.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (inputArray->Text == "") {
			MessageBox::Show("Исходный массив не задан.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Проверка на наличие исходного массива в файле
		bool isArrayFound = false;
		bool isResFound = false;
		try {
			StreamReader^ reader = File::OpenText(openFileDialogSave->FileName);
			while (reader->Peek() != -1) {

				String^ line = reader->ReadLine();
				if (line && line->Trim() == (String::Format("Исходный Массив: [{0}]", inputArray->Text))) {
					isArrayFound = true;
				}
				if (line && line->Trim() == inputRes->Text) {
					isResFound = true;
				}
			}
			reader->Close();
		}
		catch (System::Exception^ e) {
			MessageBox::Show(e->Message, "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			StreamWriter^ writer = gcnew StreamWriter(openFileDialogSave->FileName, true);

			if (!isArrayFound) {
				writer->Write("\n");
				writer->WriteLine(String::Format("Исходный Массив: [{0}]", inputArray->Text));
			}
			if (!(isArrayFound && isResFound)) {
				writer->WriteLine(String::Format(inputRes->Text));
			}
			writer->Close();

			MessageBox::Show("Данные были успешно добавлены в файл.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (System::Exception^ e) {
			MessageBox::Show(e->Message, "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}

	// Close button
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void inputCount_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->SetToolTip(inputCount, "Введите длину массива");
	}
};
}
