#pragma once
#include "Employee.h"
#include "DataControlFile.h"

#include <msclr\marshal_cppstd.h>

namespace CourseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateDataControlForm
	/// </summary>
	public ref class CreateDataControlForm : public System::Windows::Forms::Form
	{
	public:
		CreateDataControlForm(void)
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
		~CreateDataControlForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ inputId;
	protected:
	private: System::Windows::Forms::TextBox^ inputLastName;
	private: System::Windows::Forms::TextBox^ inputMoney;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ buttonSaveData;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateDataControlForm::typeid));
			this->inputId = (gcnew System::Windows::Forms::TextBox());
			this->inputLastName = (gcnew System::Windows::Forms::TextBox());
			this->inputMoney = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonSaveData = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// inputId
			// 
			this->inputId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->inputId->Location = System::Drawing::Point(231, 46);
			this->inputId->Name = L"inputId";
			this->inputId->Size = System::Drawing::Size(241, 41);
			this->inputId->TabIndex = 0;
			// 
			// inputLastName
			// 
			this->inputLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->inputLastName->Location = System::Drawing::Point(231, 118);
			this->inputLastName->Name = L"inputLastName";
			this->inputLastName->Size = System::Drawing::Size(241, 41);
			this->inputLastName->TabIndex = 1;
			// 
			// inputMoney
			// 
			this->inputMoney->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputMoney->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->inputMoney->Location = System::Drawing::Point(231, 195);
			this->inputMoney->Name = L"inputMoney";
			this->inputMoney->Size = System::Drawing::Size(241, 41);
			this->inputMoney->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(56, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 36);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Номер";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->Location = System::Drawing::Point(56, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Прізвище";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label3->Location = System::Drawing::Point(56, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 36);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ставка";
			// 
			// buttonSaveData
			// 
			this->buttonSaveData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSaveData->BackColor = System::Drawing::Color::LightSlateGray;
			this->buttonSaveData->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSaveData.BackgroundImage")));
			this->buttonSaveData->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonSaveData->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveData->Location = System::Drawing::Point(62, 364);
			this->buttonSaveData->Name = L"buttonSaveData";
			this->buttonSaveData->Size = System::Drawing::Size(410, 76);
			this->buttonSaveData->TabIndex = 0;
			this->buttonSaveData->Click += gcnew System::EventHandler(this, &CreateDataControlForm::buttonSaveData_Click);
			// 
			// CreateDataControlForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(544, 485);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonSaveData);
			this->Controls->Add(this->inputMoney);
			this->Controls->Add(this->inputLastName);
			this->Controls->Add(this->inputId);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateDataControlForm";
			this->Text = L"CreateEmployee";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSaveData_Click(System::Object^ sender, System::EventArgs^ e) {
			msclr::interop::marshal_context context;

			int id = int(Convert::ToInt32(inputId->Text));
			std::string lastname = context.marshal_as<std::string>(inputLastName->Text);
			double money = int(Convert::ToDouble(inputMoney->Text));

			Employee emp = Employee(id, lastname, money);
			DataControlFile db = DataControlFile(emp);
			db.Create();

			this->Close();
		}
	};
}
