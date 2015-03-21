#pragma once

namespace ElementaryCodeEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Cole
	// using namespace ElementaryCodeEditor;

	/// <summary>
	/// SearchBoxDialog ժҪ
	/// </summary>
	public ref class SearchBoxDialog : public System::Windows::Forms::Form
	{
	public:
		SearchBoxDialog(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
			initialInfo();
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~SearchBoxDialog()
		{
			if (components)
			{
				delete components;
			}
		}

	
	// Cole Smith
	/*
	private: System::Windows::Forms::Form^ parentForm;

	public:
		void setParent(System::Windows::Forms::Form^ parentForm) {
			this->parentForm = parentForm;
		}
	*/
	private: TextBox^ parentTextAreaTb;
	public:
		void SetParentTextBox(TextBox^ tb) {
			this->parentTextAreaTb = tb;
		}
	

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  searchBoxKeywordTb;
	private: System::Windows::Forms::Button^  searchBoxNextBtn;
	private: System::Windows::Forms::CheckBox^  searchBoxCaseSensitiveCb;

	private: System::Windows::Forms::GroupBox^  searchBoxDirectionGb;
	private: System::Windows::Forms::RadioButton^  searchBoxDownRb;

	protected: 





	private: System::Windows::Forms::RadioButton^  seachBoxUpRb;


	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchBoxKeywordTb = (gcnew System::Windows::Forms::TextBox());
			this->searchBoxNextBtn = (gcnew System::Windows::Forms::Button());
			this->searchBoxCaseSensitiveCb = (gcnew System::Windows::Forms::CheckBox());
			this->searchBoxDirectionGb = (gcnew System::Windows::Forms::GroupBox());
			this->searchBoxDownRb = (gcnew System::Windows::Forms::RadioButton());
			this->seachBoxUpRb = (gcnew System::Windows::Forms::RadioButton());
			this->searchBoxDirectionGb->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��������(N)";
			// 
			// searchBoxKeywordTb
			// 
			this->searchBoxKeywordTb->Location = System::Drawing::Point(100, 20);
			this->searchBoxKeywordTb->Name = L"searchBoxKeywordTb";
			this->searchBoxKeywordTb->Size = System::Drawing::Size(193, 21);
			this->searchBoxKeywordTb->TabIndex = 1;
			// 
			// searchBoxNextBtn
			// 
			this->searchBoxNextBtn->Location = System::Drawing::Point(311, 20);
			this->searchBoxNextBtn->Name = L"searchBoxNextBtn";
			this->searchBoxNextBtn->Size = System::Drawing::Size(87, 23);
			this->searchBoxNextBtn->TabIndex = 2;
			this->searchBoxNextBtn->Text = L"������һ��";
			this->searchBoxNextBtn->UseVisualStyleBackColor = true;
			this->searchBoxNextBtn->Click += gcnew System::EventHandler(this, &SearchBoxDialog::searchBoxNextBtn_Click);
			// 
			// searchBoxCaseSensitiveCb
			// 
			this->searchBoxCaseSensitiveCb->AutoSize = true;
			this->searchBoxCaseSensitiveCb->Location = System::Drawing::Point(14, 75);
			this->searchBoxCaseSensitiveCb->Name = L"searchBoxCaseSensitiveCb";
			this->searchBoxCaseSensitiveCb->Size = System::Drawing::Size(102, 16);
			this->searchBoxCaseSensitiveCb->TabIndex = 3;
			this->searchBoxCaseSensitiveCb->Text = L"���ִ�Сд(C)";
			this->searchBoxCaseSensitiveCb->UseVisualStyleBackColor = true;
			// 
			// searchBoxDirectionGb
			// 
			this->searchBoxDirectionGb->Controls->Add(this->searchBoxDownRb);
			this->searchBoxDirectionGb->Controls->Add(this->seachBoxUpRb);
			this->searchBoxDirectionGb->Location = System::Drawing::Point(167, 58);
			this->searchBoxDirectionGb->Name = L"searchBoxDirectionGb";
			this->searchBoxDirectionGb->Size = System::Drawing::Size(200, 40);
			this->searchBoxDirectionGb->TabIndex = 4;
			this->searchBoxDirectionGb->TabStop = false;
			this->searchBoxDirectionGb->Text = L"����";
			// 
			// searchBoxDownRb
			// 
			this->searchBoxDownRb->AutoSize = true;
			this->searchBoxDownRb->Checked = true;
			this->searchBoxDownRb->Location = System::Drawing::Point(119, 17);
			this->searchBoxDownRb->Name = L"searchBoxDownRb";
			this->searchBoxDownRb->Size = System::Drawing::Size(65, 16);
			this->searchBoxDownRb->TabIndex = 1;
			this->searchBoxDownRb->TabStop = true;
			this->searchBoxDownRb->Text = L"����(D)";
			this->searchBoxDownRb->UseVisualStyleBackColor = true;
			// 
			// seachBoxUpRb
			// 
			this->seachBoxUpRb->AutoSize = true;
			this->seachBoxUpRb->Location = System::Drawing::Point(18, 16);
			this->seachBoxUpRb->Name = L"seachBoxUpRb";
			this->seachBoxUpRb->Size = System::Drawing::Size(65, 16);
			this->seachBoxUpRb->TabIndex = 0;
			this->seachBoxUpRb->Text = L"����(U)";
			this->seachBoxUpRb->UseVisualStyleBackColor = true;
			// 
			// SearchBoxDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 110);
			this->Controls->Add(this->searchBoxDirectionGb);
			this->Controls->Add(this->searchBoxCaseSensitiveCb);
			this->Controls->Add(this->searchBoxNextBtn);
			this->Controls->Add(this->searchBoxKeywordTb);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SearchBoxDialog";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����";
			this->Enter += gcnew System::EventHandler(this, &SearchBoxDialog::searchBoxNextBtn_Click);
			this->searchBoxDirectionGb->ResumeLayout(false);
			this->searchBoxDirectionGb->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Cole
	private: int position;
	private: static String^ staticKeyword;

	public:
		void initialInfo() {
			this->position = 0;
		}

	private: System::Void searchBoxNextBtn_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (this->parentTextAreaTb->Text == String::Empty) {
					 MessageBox::Show(L"�ı�����Ϊ��");
					 return ;
				 }

				 if (! this->parentTextAreaTb->Text->Contains(this->searchBoxKeywordTb->Text)) {
					 MessageBox::Show(L"�Ҳ��� " + this->searchBoxKeywordTb->Text);
					 return ;
				 }

				 // Ӧ�ôӵ�ǰָ��δ֪��ʼ����
				 // @TODO 
				 // this->position = this->parentTextAreaTb->SelectionStart;

				 // MessageBox::Show(this->parentTextAreaTb->Text);
				 String^ keyword = this->searchBoxKeywordTb->Text;

				 //  �Ƿ����ִ�Сд
				 if (! searchBoxCaseSensitiveCb->Checked)
					 keyword = keyword->ToLower();

				 // ����keyword �� staticKeyword�У� ����ֱ�Ӳ�����һ���˵�
				 staticKeyword = keyword;

				 // �����Ǹ���ѡ��
				 // for each (Control^ c in this->searchBoxDirectionGb->Controls) {
					 // MessageBox::Show(Convert::ToString(c == searchBoxDownRb));
					 // ���²���
					 if (searchBoxDownRb->Checked) {
						 // ��һ�β��� ʱ position == 0
						 try {
							 if (searchBoxCaseSensitiveCb->Checked) {
								 this->position = this->parentTextAreaTb->Text->IndexOf(keyword, this->position);
							 } else {
								 this->position = this->parentTextAreaTb->Text->ToLower()->IndexOf(keyword, this->position);
							 }
							 this->parentTextAreaTb->Select(this->position, keyword->Length);
						 } 
						 catch (ArgumentOutOfRangeException^ e) {
							 // MessageBox::Show(L"�Ѿ������ļ��ײ�!");
							 // �����ļ��ײ�ʱ����position����
							 this->position = 0;
							 return ;
						 }
						 // ��һ�β���ʱΪ��β��ҵ���λ�� + 1;
						 this->position += 1;
					 }
					 // ���ϲ���
					 else if (seachBoxUpRb->Checked) {
						 // ��һ�β��� ʱ position == 0
						 try {
							 if (searchBoxCaseSensitiveCb->Checked) {
								 this->position = this->parentTextAreaTb->Text->LastIndexOf(keyword, this->position);
							 } else {
								 this->position = this->parentTextAreaTb->Text->ToLower()->LastIndexOf(keyword, this->position);
							 }
							 this->parentTextAreaTb->Select(this->position, keyword->Length);
						 } 
						 catch (ArgumentOutOfRangeException^ e) {
							 // MessageBox::Show(L"�Ѿ������ļ��ײ�!");
							 // �����ļ��ײ�ʱ����position����
							 this->position = 0;
							 return ;
						 }
						 // ��һ�β���ʱΪ��β��ҵ���λ�� - 1;
						 this->position -= 1;
					 }
				 // }
				 
				 // MessageBox::Show(start.ToString());

				 // ���۽���
				 this->parentTextAreaTb->Focus();

				 
			 }

public: System::Void searchBoxNextMenu(System::Object^  sender, System::EventArgs^  e) {

			 if (this->parentTextAreaTb->Text == String::Empty) {
				 MessageBox::Show(L"�ı�����Ϊ��");
				 return ;
			 }

			 if (! this->parentTextAreaTb->Text->Contains(this->searchBoxKeywordTb->Text)) {
				 MessageBox::Show(L"�Ҳ��� " + this->searchBoxKeywordTb->Text);
				 return ;
			 }

			 // Ӧ�ôӵ�ǰָ��δ֪��ʼ����
			 // @TODO 
			 // this->position = this->parentTextAreaTb->SelectionStart;

			 // MessageBox::Show(this->parentTextAreaTb->Text);
			 String^ keyword = this->searchBoxKeywordTb->Text;

			 //  �Ƿ����ִ�Сд
			 if (! searchBoxCaseSensitiveCb->Checked)
				 keyword = keyword->ToLower();

			 // �����Ǹ���ѡ��
			 // for each (Control^ c in this->searchBoxDirectionGb->Controls) {
			 // MessageBox::Show(Convert::ToString(c == searchBoxDownRb));
			 // ���²���
			 if (searchBoxDownRb->Checked) {
				 // ��һ�β��� ʱ position == 0
				 try {
					 if (searchBoxCaseSensitiveCb->Checked) {
						 this->position = this->parentTextAreaTb->Text->IndexOf(keyword, this->position);
					 } else {
						 this->position = this->parentTextAreaTb->Text->ToLower()->IndexOf(keyword, this->position);
					 }
					 this->parentTextAreaTb->Select(this->position, keyword->Length);
				 } 
				 catch (ArgumentOutOfRangeException^ e) {
					 // MessageBox::Show(L"�Ѿ������ļ��ײ�!");
					 // �����ļ��ײ�ʱ����position����
					 this->position = 0;
					 return ;
				 }
				 // ��һ�β���ʱΪ��β��ҵ���λ�� + 1;
				 this->position += 1;
			 }
			 // ���ϲ���
			 else if (seachBoxUpRb->Checked) {
				 // ��һ�β��� ʱ position == 0
				 try {
					 if (searchBoxCaseSensitiveCb->Checked) {
						 this->position = this->parentTextAreaTb->Text->LastIndexOf(keyword, this->position);
					 } else {
						 this->position = this->parentTextAreaTb->Text->ToLower()->LastIndexOf(keyword, this->position);
					 }
					 this->parentTextAreaTb->Select(this->position, keyword->Length);
				 } 
				 catch (ArgumentOutOfRangeException^ e) {
					 // MessageBox::Show(L"�Ѿ������ļ��ײ�!");
					 // �����ļ��ײ�ʱ����position����
					 this->position = 0;
					 return ;
				 }
				 // ��һ�β���ʱΪ��β��ҵ���λ�� - 1;
				 this->position -= 1;
			 }
			 // }

			 // MessageBox::Show(start.ToString());

			 // ���۽���
			 this->parentTextAreaTb->Focus();


		 }
};
}
