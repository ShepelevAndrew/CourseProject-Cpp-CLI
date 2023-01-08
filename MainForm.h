#pragma once
#include "Employee.h"
#include "DataControlFile.h"
#include "CreateDataControlForm.h"

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DataGrid;
	protected:









	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ CreateEmployee;

	private: System::Windows::Forms::Panel^ DeleteEmployee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Money;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IncomeTex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PensionFund;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmploymentFund;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FullReceived;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalPayable;
	private: System::Windows::Forms::Panel^ UpdateEmployee;



























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->DataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Money = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IncomeTex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PensionFund = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EmploymentFund = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FullReceived = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalPayable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CreateEmployee = (gcnew System::Windows::Forms::Panel());
			this->DeleteEmployee = (gcnew System::Windows::Forms::Panel());
			this->UpdateEmployee = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// DataGrid
			// 
			this->DataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DataGrid->BackgroundColor = System::Drawing::Color::White;
			this->DataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGrid->ColumnHeadersHeight = 70;
			this->DataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Number, this->LastName,
					this->Money, this->IncomeTex, this->PensionFund, this->EmploymentFund, this->FullReceived, this->TotalPayable
			});
			this->DataGrid->Location = System::Drawing::Point(12, 12);
			this->DataGrid->Name = L"DataGrid";
			this->DataGrid->RowHeadersWidth = 51;
			this->DataGrid->RowTemplate->Height = 24;
			this->DataGrid->Size = System::Drawing::Size(1028, 396);
			this->DataGrid->TabIndex = 0;
			// 
			// Number
			// 
			this->Number->HeaderText = L"Номер";
			this->Number->MinimumWidth = 50;
			this->Number->Name = L"Number";
			this->Number->Width = 50;
			// 
			// LastName
			// 
			this->LastName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->LastName->HeaderText = L"Прізвище";
			this->LastName->MinimumWidth = 90;
			this->LastName->Name = L"LastName";
			// 
			// Money
			// 
			this->Money->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Money->HeaderText = L"Ставка.грн.";
			this->Money->MinimumWidth = 75;
			this->Money->Name = L"Money";
			// 
			// IncomeTex
			// 
			this->IncomeTex->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->IncomeTex->HeaderText = L"Прибутковий податок 20%, грн.";
			this->IncomeTex->MinimumWidth = 100;
			this->IncomeTex->Name = L"IncomeTex";
			this->IncomeTex->ReadOnly = true;
			// 
			// PensionFund
			// 
			this->PensionFund->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->PensionFund->HeaderText = L"Пенсійний фонд 1%, грн";
			this->PensionFund->MinimumWidth = 90;
			this->PensionFund->Name = L"PensionFund";
			this->PensionFund->ReadOnly = true;
			// 
			// EmploymentFund
			// 
			this->EmploymentFund->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->EmploymentFund->HeaderText = L"Фонд зайнятості 0.5%, грн.";
			this->EmploymentFund->MinimumWidth = 85;
			this->EmploymentFund->Name = L"EmploymentFund";
			this->EmploymentFund->ReadOnly = true;
			// 
			// FullReceived
			// 
			this->FullReceived->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->FullReceived->HeaderText = L"Усього утримано, грн.";
			this->FullReceived->MinimumWidth = 80;
			this->FullReceived->Name = L"FullReceived";
			this->FullReceived->ReadOnly = true;
			// 
			// TotalPayable
			// 
			this->TotalPayable->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TotalPayable->HeaderText = L"Усього до видачі, грн.";
			this->TotalPayable->MinimumWidth = 70;
			this->TotalPayable->Name = L"TotalPayable";
			this->TotalPayable->ReadOnly = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(12, 414);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1028, 2);
			this->panel1->TabIndex = 1;
			// 
			// CreateEmployee
			// 
			this->CreateEmployee->AccessibleDescription = L"";
			this->CreateEmployee->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->CreateEmployee->BackColor = System::Drawing::Color::LightSlateGray;
			this->CreateEmployee->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CreateEmployee.BackgroundImage")));
			this->CreateEmployee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->CreateEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CreateEmployee->Location = System::Drawing::Point(30, 435);
			this->CreateEmployee->Name = L"CreateEmployee";
			this->CreateEmployee->Size = System::Drawing::Size(233, 79);
			this->CreateEmployee->TabIndex = 3;
			this->CreateEmployee->Click += gcnew System::EventHandler(this, &MainForm::buttonCreate_Click);
			// 
			// DeleteEmployee
			// 
			this->DeleteEmployee->AccessibleDescription = L"";
			this->DeleteEmployee->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteEmployee->BackColor = System::Drawing::Color::LightSlateGray;
			this->DeleteEmployee->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeleteEmployee.BackgroundImage")));
			this->DeleteEmployee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->DeleteEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteEmployee->Location = System::Drawing::Point(410, 435);
			this->DeleteEmployee->Name = L"DeleteEmployee";
			this->DeleteEmployee->Size = System::Drawing::Size(233, 79);
			this->DeleteEmployee->TabIndex = 4;
			this->DeleteEmployee->Click += gcnew System::EventHandler(this, &MainForm::DeleteEmployee_Click);
			// 
			// UpdateEmployee
			// 
			this->UpdateEmployee->AccessibleDescription = L"";
			this->UpdateEmployee->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->UpdateEmployee->BackColor = System::Drawing::Color::LightSlateGray;
			this->UpdateEmployee->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UpdateEmployee.BackgroundImage")));
			this->UpdateEmployee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->UpdateEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UpdateEmployee->Location = System::Drawing::Point(789, 435);
			this->UpdateEmployee->Name = L"UpdateEmployee";
			this->UpdateEmployee->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->UpdateEmployee->Size = System::Drawing::Size(233, 79);
			this->UpdateEmployee->TabIndex = 5;
			this->UpdateEmployee->Click += gcnew System::EventHandler(this, &MainForm::UpdateEmployee_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1052, 526);
			this->Controls->Add(this->UpdateEmployee);
			this->Controls->Add(this->DeleteEmployee);
			this->Controls->Add(this->CreateEmployee);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->DataGrid);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Accounting";
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Activated(System::Object^ sender, System::EventArgs^ e) {
			DataControlFile db;
			std::vector<Employee> dataEmp = db.Read();
			const int amountOfRowInOneEmp = 8;
			
			double sumM = 0, sumI = 0, sumP = 0, sumE = 0, sumF = 0, sumT = 0;
			for (int i = 0; i < dataEmp.size(); i++) {
				sumM += dataEmp[i].GetMoney();
				sumI += dataEmp[i].GetIncomeTex();
				sumP += dataEmp[i].GetPensionFund();
				sumE += dataEmp[i].GetEmploymentFund();
				sumF += dataEmp[i].GetFullReceived();
				sumT += dataEmp[i].GetTotalPayable();
			}

			DataGrid->RowCount = dataEmp.size() + 1;
			if (dataEmp.size() == 0) {
				DataGrid->RowCount = dataEmp.size() + 1;
			}

			if (dataEmp.size() == 0) {
				for(int i = 0; i < 8; i++) {
					DataGrid->Rows[0]->Cells[i]->Value = " ";
				}
			}
			int k = 0;

			String^ employee;
			for(int i = 0; i < dataEmp.size(); i++) {
				for(int j = 0; j < amountOfRowInOneEmp; j++) {
					if (j == 0) employee = gcnew String(dataEmp[i].GetId().ToString());
					else if (j == 1) employee = gcnew String(dataEmp[i].GetLastName().c_str());
					else if (j == 2) employee = gcnew String(dataEmp[i].GetMoney().ToString());
					else if (j == 3) employee = gcnew String(dataEmp[i].GetIncomeTex().ToString());
					else if (j == 4) employee = gcnew String(dataEmp[i].GetPensionFund().ToString());
					else if (j == 5) employee = gcnew String(dataEmp[i].GetEmploymentFund().ToString());
					else if (j == 6) employee = gcnew String(dataEmp[i].GetFullReceived().ToString());
					else if (j == 7) employee = gcnew String(dataEmp[i].GetTotalPayable().ToString());
					DataGrid->Rows[i]->Cells[j]->Value = employee;
				}
			}

			for (int j = 1; j < amountOfRowInOneEmp; j++) {
				if (j == 1) employee = gcnew String("Total: ");
				else if (j == 2) employee = gcnew String(sumM.ToString());
				else if (j == 3) employee = gcnew String(sumI.ToString());
				else if (j == 4) employee = gcnew String(sumP.ToString());
				else if (j == 5) employee = gcnew String(sumE.ToString());
				else if (j == 6) employee = gcnew String(sumF.ToString());
				else if (j == 7) employee = gcnew String(sumT.ToString());
				DataGrid->Rows[dataEmp.size()]->Cells[j]->Value = employee;
			}
	}

	private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e) {
			CreateDataControlForm^ form = gcnew CreateDataControlForm();
			form->ShowDialog();
		};

	private: System::Void DeleteEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
			DataControlFile db;

			int index = DataGrid->CurrentCell->RowIndex;
			db.Delete(index + 1);

			this->MainForm_Activated(sender, e);
		}

	private: System::Void UpdateEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
			DataControlFile db;

			int index = DataGrid->CurrentCell->RowIndex;
			long int id = (long int)Convert::ToInt64(DataGrid->Rows[index]->Cells[0]->Value);
			std::string lastname = msclr::interop::marshal_as<std::string>(DataGrid->Rows[index]->Cells[1]->Value->ToString()); //System::String to std::string
			double money = (double)Convert::ToDouble(DataGrid->Rows[index]->Cells[2]->Value);

			db.Update(id, lastname, money, index + 1);

			this->MainForm_Activated(sender, e);
		}
	};
}