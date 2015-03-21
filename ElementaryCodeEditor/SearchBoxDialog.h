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
	/// SearchBoxDialog 摘要
	/// </summary>
	public ref class SearchBoxDialog : public System::Windows::Forms::Form
	{
	public:
		SearchBoxDialog(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			initialInfo();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
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
			this->label1->Text = L"查找内容(N)";
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
			this->searchBoxNextBtn->Text = L"查找下一个";
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
			this->searchBoxCaseSensitiveCb->Text = L"区分大小写(C)";
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
			this->searchBoxDirectionGb->Text = L"方向";
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
			this->searchBoxDownRb->Text = L"向下(D)";
			this->searchBoxDownRb->UseVisualStyleBackColor = true;
			// 
			// seachBoxUpRb
			// 
			this->seachBoxUpRb->AutoSize = true;
			this->seachBoxUpRb->Location = System::Drawing::Point(18, 16);
			this->seachBoxUpRb->Name = L"seachBoxUpRb";
			this->seachBoxUpRb->Size = System::Drawing::Size(65, 16);
			this->seachBoxUpRb->TabIndex = 0;
			this->seachBoxUpRb->Text = L"向上(U)";
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
			this->Text = L"查找";
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
					 MessageBox::Show(L"文本不能为空");
					 return ;
				 }

				 if (! this->parentTextAreaTb->Text->Contains(this->searchBoxKeywordTb->Text)) {
					 MessageBox::Show(L"找不到 " + this->searchBoxKeywordTb->Text);
					 return ;
				 }

				 // 应该从当前指针未知开始查找
				 // @TODO 
				 // this->position = this->parentTextAreaTb->SelectionStart;

				 // MessageBox::Show(this->parentTextAreaTb->Text);
				 String^ keyword = this->searchBoxKeywordTb->Text;

				 //  是否区分大小写
				 if (! searchBoxCaseSensitiveCb->Checked)
					 keyword = keyword->ToLower();

				 // 保存keyword 在 staticKeyword中， 用于直接查找下一个菜单
				 staticKeyword = keyword;

				 // 遍历那个被选中
				 // for each (Control^ c in this->searchBoxDirectionGb->Controls) {
					 // MessageBox::Show(Convert::ToString(c == searchBoxDownRb));
					 // 向下查找
					 if (searchBoxDownRb->Checked) {
						 // 第一次查找 时 position == 0
						 try {
							 if (searchBoxCaseSensitiveCb->Checked) {
								 this->position = this->parentTextAreaTb->Text->IndexOf(keyword, this->position);
							 } else {
								 this->position = this->parentTextAreaTb->Text->ToLower()->IndexOf(keyword, this->position);
							 }
							 this->parentTextAreaTb->Select(this->position, keyword->Length);
						 } 
						 catch (ArgumentOutOfRangeException^ e) {
							 // MessageBox::Show(L"已经到达文件底部!");
							 // 到达文件底部时，将position重置
							 this->position = 0;
							 return ;
						 }
						 // 下一次查找时为这次查找到的位置 + 1;
						 this->position += 1;
					 }
					 // 向上查找
					 else if (seachBoxUpRb->Checked) {
						 // 第一次查找 时 position == 0
						 try {
							 if (searchBoxCaseSensitiveCb->Checked) {
								 this->position = this->parentTextAreaTb->Text->LastIndexOf(keyword, this->position);
							 } else {
								 this->position = this->parentTextAreaTb->Text->ToLower()->LastIndexOf(keyword, this->position);
							 }
							 this->parentTextAreaTb->Select(this->position, keyword->Length);
						 } 
						 catch (ArgumentOutOfRangeException^ e) {
							 // MessageBox::Show(L"已经到达文件底部!");
							 // 到达文件底部时，将position重置
							 this->position = 0;
							 return ;
						 }
						 // 下一次查找时为这次查找到的位置 - 1;
						 this->position -= 1;
					 }
				 // }
				 
				 // MessageBox::Show(start.ToString());

				 // 给聚焦点
				 this->parentTextAreaTb->Focus();

				 
			 }

public: System::Void searchBoxNextMenu(System::Object^  sender, System::EventArgs^  e) {

			 if (this->parentTextAreaTb->Text == String::Empty) {
				 MessageBox::Show(L"文本不能为空");
				 return ;
			 }

			 if (! this->parentTextAreaTb->Text->Contains(this->searchBoxKeywordTb->Text)) {
				 MessageBox::Show(L"找不到 " + this->searchBoxKeywordTb->Text);
				 return ;
			 }

			 // 应该从当前指针未知开始查找
			 // @TODO 
			 // this->position = this->parentTextAreaTb->SelectionStart;

			 // MessageBox::Show(this->parentTextAreaTb->Text);
			 String^ keyword = this->searchBoxKeywordTb->Text;

			 //  是否区分大小写
			 if (! searchBoxCaseSensitiveCb->Checked)
				 keyword = keyword->ToLower();

			 // 遍历那个被选中
			 // for each (Control^ c in this->searchBoxDirectionGb->Controls) {
			 // MessageBox::Show(Convert::ToString(c == searchBoxDownRb));
			 // 向下查找
			 if (searchBoxDownRb->Checked) {
				 // 第一次查找 时 position == 0
				 try {
					 if (searchBoxCaseSensitiveCb->Checked) {
						 this->position = this->parentTextAreaTb->Text->IndexOf(keyword, this->position);
					 } else {
						 this->position = this->parentTextAreaTb->Text->ToLower()->IndexOf(keyword, this->position);
					 }
					 this->parentTextAreaTb->Select(this->position, keyword->Length);
				 } 
				 catch (ArgumentOutOfRangeException^ e) {
					 // MessageBox::Show(L"已经到达文件底部!");
					 // 到达文件底部时，将position重置
					 this->position = 0;
					 return ;
				 }
				 // 下一次查找时为这次查找到的位置 + 1;
				 this->position += 1;
			 }
			 // 向上查找
			 else if (seachBoxUpRb->Checked) {
				 // 第一次查找 时 position == 0
				 try {
					 if (searchBoxCaseSensitiveCb->Checked) {
						 this->position = this->parentTextAreaTb->Text->LastIndexOf(keyword, this->position);
					 } else {
						 this->position = this->parentTextAreaTb->Text->ToLower()->LastIndexOf(keyword, this->position);
					 }
					 this->parentTextAreaTb->Select(this->position, keyword->Length);
				 } 
				 catch (ArgumentOutOfRangeException^ e) {
					 // MessageBox::Show(L"已经到达文件底部!");
					 // 到达文件底部时，将position重置
					 this->position = 0;
					 return ;
				 }
				 // 下一次查找时为这次查找到的位置 - 1;
				 this->position -= 1;
			 }
			 // }

			 // MessageBox::Show(start.ToString());

			 // 给聚焦点
			 this->parentTextAreaTb->Focus();


		 }
};
}
