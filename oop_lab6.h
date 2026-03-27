#pragma once
namespace ooplab6prog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class oop_lab6 : public System::Windows::Forms::Form
	{
	public:
		oop_lab6(void)
		{
			InitializeComponent();

		}

	protected:

		~oop_lab6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ FillButton;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::TextBox^ i_textBox;
	private: System::Windows::Forms::TextBox^ j_textBox;

	private: System::Windows::Forms::Label^ I_label;
	private: System::Windows::Forms::Label^ j_label;
	private: System::Windows::Forms::Label^ newValueLabel;
	private: System::Windows::Forms::TextBox^ newValueTextBox;
	private: System::Windows::Forms::Button^ SetValueButton;
	private: System::Windows::Forms::Button^ GetValueButton;

	private: System::Windows::Forms::TextBox^ RowsLabel;
	private: System::Windows::Forms::TextBox^ ColumnsLabels;
	private: System::Windows::Forms::TableLayoutPanel^ mainTable;

	private:
		array<Label^, 2>^ labels;
		int rows = 0;
		int columns = 0;

		int set_row = 0;
		int set_column = 0;
		int get_row = 0;
		int get_column = 0;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getHelpToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FillButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->i_textBox = (gcnew System::Windows::Forms::TextBox());
			this->j_textBox = (gcnew System::Windows::Forms::TextBox());
			this->I_label = (gcnew System::Windows::Forms::Label());
			this->j_label = (gcnew System::Windows::Forms::Label());
			this->newValueLabel = (gcnew System::Windows::Forms::Label());
			this->newValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SetValueButton = (gcnew System::Windows::Forms::Button());
			this->GetValueButton = (gcnew System::Windows::Forms::Button());
			this->RowsLabel = (gcnew System::Windows::Forms::TextBox());
			this->ColumnsLabels = (gcnew System::Windows::Forms::TextBox());
			this->mainTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getHelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(58, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rows";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(229, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Columns";
			// 
			// FillButton
			// 
			this->FillButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FillButton->Location = System::Drawing::Point(58, 178);
			this->FillButton->Name = L"FillButton";
			this->FillButton->Size = System::Drawing::Size(93, 39);
			this->FillButton->TabIndex = 1;
			this->FillButton->Text = L"Fill";
			this->FillButton->UseVisualStyleBackColor = true;
			this->FillButton->Click += gcnew System::EventHandler(this, &oop_lab6::FillButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearButton->Location = System::Drawing::Point(232, 178);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(93, 39);
			this->ClearButton->TabIndex = 1;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &oop_lab6::ClearButton_Click);
			// 
			// i_textBox
			// 
			this->i_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_textBox->Location = System::Drawing::Point(61, 304);
			this->i_textBox->Name = L"i_textBox";
			this->i_textBox->Size = System::Drawing::Size(100, 34);
			this->i_textBox->TabIndex = 2;
			this->i_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// j_textBox
			// 
			this->j_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->j_textBox->Location = System::Drawing::Point(242, 304);
			this->j_textBox->Name = L"j_textBox";
			this->j_textBox->Size = System::Drawing::Size(100, 34);
			this->j_textBox->TabIndex = 2;
			this->j_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// I_label
			// 
			this->I_label->AutoSize = true;
			this->I_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->I_label->Location = System::Drawing::Point(17, 304);
			this->I_label->Name = L"I_label";
			this->I_label->Size = System::Drawing::Size(45, 29);
			this->I_label->TabIndex = 3;
			this->I_label->Text = L"i = ";
			// 
			// j_label
			// 
			this->j_label->AutoSize = true;
			this->j_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->j_label->Location = System::Drawing::Point(192, 304);
			this->j_label->Name = L"j_label";
			this->j_label->Size = System::Drawing::Size(45, 29);
			this->j_label->TabIndex = 3;
			this->j_label->Text = L"j = ";
			// 
			// newValueLabel
			// 
			this->newValueLabel->AutoSize = true;
			this->newValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newValueLabel->Location = System::Drawing::Point(58, 383);
			this->newValueLabel->Name = L"newValueLabel";
			this->newValueLabel->Size = System::Drawing::Size(121, 29);
			this->newValueLabel->TabIndex = 3;
			this->newValueLabel->Text = L"new value";
			// 
			// newValueTextBox
			// 
			this->newValueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newValueTextBox->Location = System::Drawing::Point(194, 383);
			this->newValueTextBox->Name = L"newValueTextBox";
			this->newValueTextBox->Size = System::Drawing::Size(100, 34);
			this->newValueTextBox->TabIndex = 2;
			this->newValueTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SetValueButton
			// 
			this->SetValueButton->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->SetValueButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SetValueButton->Location = System::Drawing::Point(44, 464);
			this->SetValueButton->Name = L"SetValueButton";
			this->SetValueButton->Size = System::Drawing::Size(135, 39);
			this->SetValueButton->TabIndex = 1;
			this->SetValueButton->Text = L"Set Value";
			this->SetValueButton->UseVisualStyleBackColor = true;
			this->SetValueButton->Click += gcnew System::EventHandler(this, &oop_lab6::SetValueButton_Click);
			// 
			// GetValueButton
			// 
			this->GetValueButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GetValueButton->Location = System::Drawing::Point(208, 464);
			this->GetValueButton->Name = L"GetValueButton";
			this->GetValueButton->Size = System::Drawing::Size(143, 39);
			this->GetValueButton->TabIndex = 1;
			this->GetValueButton->Text = L"Get Value";
			this->GetValueButton->UseVisualStyleBackColor = true;
			this->GetValueButton->Click += gcnew System::EventHandler(this, &oop_lab6::GetValueButton_Click);
			// 
			// RowsLabel
			// 
			this->RowsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RowsLabel->Location = System::Drawing::Point(58, 85);
			this->RowsLabel->Name = L"RowsLabel";
			this->RowsLabel->Size = System::Drawing::Size(100, 34);
			this->RowsLabel->TabIndex = 2;
			this->RowsLabel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->RowsLabel->TextChanged += gcnew System::EventHandler(this, &oop_lab6::RowsLabel_TextChanged);
			// 
			// ColumnsLabels
			// 
			this->ColumnsLabels->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ColumnsLabels->Location = System::Drawing::Point(232, 85);
			this->ColumnsLabels->Name = L"ColumnsLabels";
			this->ColumnsLabels->ShortcutsEnabled = false;
			this->ColumnsLabels->Size = System::Drawing::Size(100, 34);
			this->ColumnsLabels->TabIndex = 2;
			this->ColumnsLabels->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ColumnsLabels->TextChanged += gcnew System::EventHandler(this, &oop_lab6::ColumnsLabels_TextChanged);
			// 
			// mainTable
			// 
			this->mainTable->BackColor = System::Drawing::SystemColors::Control;
			this->mainTable->ColumnCount = 2;
			this->mainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->mainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->mainTable->Location = System::Drawing::Point(-1, -1);
			this->mainTable->Name = L"mainTable";
			this->mainTable->RowCount = 2;
			this->mainTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->mainTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->mainTable->Size = System::Drawing::Size(649, 542);
			this->mainTable->TabIndex = 4;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->tableToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1071, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->readToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->readToolStripMenuItem->Text = L"Open";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::readToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->writeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->writeToolStripMenuItem->Text = L"Save";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::exitToolStripMenuItem_Click);
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fillToolStripMenuItem,
					this->getValueToolStripMenuItem, this->setValueToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->tableToolStripMenuItem->Text = L"Table";
			// 
			// fillToolStripMenuItem
			// 
			this->fillToolStripMenuItem->Name = L"fillToolStripMenuItem";
			this->fillToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->fillToolStripMenuItem->Text = L"Fill";
			this->fillToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::fillToolStripMenuItem_Click);
			// 
			// getValueToolStripMenuItem
			// 
			this->getValueToolStripMenuItem->Name = L"getValueToolStripMenuItem";
			this->getValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->getValueToolStripMenuItem->Text = L"Get value";
			this->getValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::getValueToolStripMenuItem_Click);
			// 
			// setValueToolStripMenuItem
			// 
			this->setValueToolStripMenuItem->Name = L"setValueToolStripMenuItem";
			this->setValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->setValueToolStripMenuItem->Text = L"Set value";
			this->setValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::setValueToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::clearToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->getHelpToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// getHelpToolStripMenuItem
			// 
			this->getHelpToolStripMenuItem->Name = L"getHelpToolStripMenuItem";
			this->getHelpToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F10;
			this->getHelpToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->getHelpToolStripMenuItem->Text = L"Get Help";
			this->getHelpToolStripMenuItem->Click += gcnew System::EventHandler(this, &oop_lab6::getHelpToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &oop_lab6::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &oop_lab6::saveFileDialog1_FileOk);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->mainTable);
			this->panel1->Location = System::Drawing::Point(13, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(649, 542);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->j_label);
			this->panel2->Controls->Add(this->newValueLabel);
			this->panel2->Controls->Add(this->I_label);
			this->panel2->Controls->Add(this->ColumnsLabels);
			this->panel2->Controls->Add(this->j_textBox);
			this->panel2->Controls->Add(this->RowsLabel);
			this->panel2->Controls->Add(this->newValueTextBox);
			this->panel2->Controls->Add(this->i_textBox);
			this->panel2->Controls->Add(this->GetValueButton);
			this->panel2->Controls->Add(this->SetValueButton);
			this->panel2->Controls->Add(this->ClearButton);
			this->panel2->Controls->Add(this->FillButton);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(681, 38);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(369, 542);
			this->panel2->TabIndex = 7;
			// 
			// oop_lab6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 605);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"oop_lab6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"oop_lab6";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FillButtonEvent() {

		if (!String::IsNullOrWhiteSpace(RowsLabel->Text) && 
			!String::IsNullOrWhiteSpace(ColumnsLabels->Text)) {
			rows = Convert::ToInt32(RowsLabel->Text);
			columns = Convert::ToInt32(ColumnsLabels->Text);
		}
		else {
			MessageBox::Show("Matrix is empty, enter rows and columns!",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Error);
		}
		mainTable->RowCount = rows;
		mainTable->ColumnCount = columns;

		mainTable->RowStyles->Clear();
		mainTable->ColumnStyles->Clear();
		mainTable->Controls->Clear();

		for (int i = 0; i < rows; i++) {
			mainTable->RowStyles->Add(gcnew RowStyle(SizeType::Percent, 100.0f / rows));

		}
		for (int i = 0; i < columns; i++) {
			mainTable->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 100.f / columns));
		}

		labels = gcnew array<Label^, 2>(rows, columns);

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {

				Label^ label_box = gcnew Label();
				if (i == j) {
					label_box->Text = "1";
					label_box->BackColor = System::Drawing::Color::Gray;
				}
				else {
					label_box->Text = "0";
					label_box->BackColor = System::Drawing::Color::White;
				}

				label_box->Dock = DockStyle::Fill;
				label_box->TextAlign = ContentAlignment::MiddleCenter;
				label_box->BorderStyle = BorderStyle::FixedSingle;
				labels[i, j] = label_box;
				mainTable->Controls->Add(label_box, j, i);

			}
		}
	}
	private: System::Void ClearButtonEvent() {
		mainTable->RowStyles->Clear();
		mainTable->ColumnStyles->Clear();
		mainTable->Controls->Clear();
		RowsLabel->Clear();
		ColumnsLabels->Clear();
		i_textBox->Clear();
		j_textBox->Clear();
		newValueTextBox->Clear();
	}

	private: System::Void SetValueButtonEvent() {
		if (!String::IsNullOrWhiteSpace(i_textBox->Text) &&
			!String::IsNullOrWhiteSpace(j_textBox->Text) &&
			!String::IsNullOrWhiteSpace(newValueTextBox->Text)) {

			set_row = Convert::ToInt32(i_textBox->Text);
			set_column = Convert::ToInt32(j_textBox->Text);
			if (set_row > rows) {
				MessageBox::Show(this, "Your number is bigger than rows in matrix, try other number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (set_column > columns) {
				MessageBox::Show(this, "Your number is bigger than columns in matrix, try other number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				labels[set_row, set_column]->Text = newValueTextBox->Text;
				MessageBox::Show(this, "You set new value: " + labels[set_row, set_column]->Text, "Result", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else {
			MessageBox::Show(this, "You didnt enter any number, try again", "Error message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void GetValueButtonEvent() {
		if (!String::IsNullOrWhiteSpace(i_textBox->Text) && 
			!String::IsNullOrWhiteSpace(j_textBox->Text)) 
		{
			get_row = Convert::ToInt32(i_textBox->Text);
			get_column = Convert::ToInt32(j_textBox->Text);
			if (get_row > rows) {
				MessageBox::Show(this, "Your number is bigger than rows in matrix, try other number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (get_column > columns) {
				MessageBox::Show(this, "Your number is bigger than columns in matrix, try other number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				MessageBox::Show(this, "Your value is " + labels[get_row, get_column]->Text, "Result", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else {
			MessageBox::Show(this, "You didnt enter all necessary number, try again", "Error message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void mainTable_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
	private: System::Void RowsLabel_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void ColumnsLabels_TextChanged(System::Object^ sender, System::EventArgs^ e) {}


	private: System::Void FillButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FillButtonEvent();
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearButtonEvent();
	}
	private: System::Void SetValueButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SetValueButtonEvent();
	}
	private: System::Void GetValueButton_Click(System::Object^ sender, System::EventArgs^ e) {
		GetValueButtonEvent();
	}
	private: System::Void fillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FillButtonEvent();
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void getHelpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this, "Sorry, i cant help you, try by yourself :)", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearButtonEvent();
}
private: System::Void getValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GetValueButtonEvent();
}
private: System::Void setValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SetValueButtonEvent();
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {}

private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ open_file = gcnew OpenFileDialog();
	open_file->Filter = "Text files (*.txt)|*.txt";

	if (open_file->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		array<String^>^ lines = File::ReadAllLines(open_file->FileName);
		rows = lines->Length;
		RowsLabel->Text = Convert::ToString(rows);
		array<String^>^ firstRow = lines[0]->Split(' ');
		columns = firstRow->Length;
		ColumnsLabels->Text = Convert::ToString(columns);
		mainTable->RowCount = rows;
		mainTable->ColumnCount = columns;

		mainTable->RowStyles->Clear();
		mainTable->ColumnStyles->Clear();
		mainTable->Controls->Clear();

		for (int i = 0; i < rows; i++) {
			mainTable->RowStyles->Add(gcnew RowStyle(SizeType::Percent, 100.0f / rows));

		}
		for (int i = 0; i < columns; i++) {
			mainTable->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 100.f / columns));
		}

		labels = gcnew array<Label^, 2>(rows, columns);

		for (int i = 0; i < rows; i++) {

			array<String^>^ values = lines[i]->Split(' ');

			for (int j = 0; j < columns; j++) {
				Label^ label_box = gcnew Label();
				label_box->Text = values[j];
				if (i == j) {
					label_box->BackColor = System::Drawing::Color::Gray;
				}
				else {
					label_box->BackColor = System::Drawing::Color::White;
				}
				
				label_box->Dock = DockStyle::Fill;
				label_box->TextAlign = ContentAlignment::MiddleCenter;
				label_box->BorderStyle = BorderStyle::FixedSingle;

				labels[i, j] = label_box;
				mainTable->Controls->Add(label_box, j, i);
			}
		}
	}

}
private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFile = gcnew SaveFileDialog();
	saveFile->Filter = "Text files (*.txt)|*.txt";
	if (saveFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ file = gcnew StreamWriter(saveFile->FileName);
		for (int i = 0; i < labels->GetLength(0); i++) {
			for (int j = 0; j < labels->GetLength(1); j++) {
				file->Write(labels[i, j]->Text);
				if (j < labels->GetLength(1) - 1) {
					file->Write(' ');
				}
			}
			file->WriteLine();

		}
		file->Close();
		MessageBox::Show(this,"Matrix wrote successfully!","Message", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	
}
};
	}