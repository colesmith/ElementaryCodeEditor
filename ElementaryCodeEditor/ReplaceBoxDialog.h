#pragma once

namespace ElementaryCodeEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ReplaceBoxDialog 摘要
	/// </summary>
	public ref class ReplaceBoxDialog : public System::Windows::Forms::Form
	{
	public:
		ReplaceBoxDialog(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			SetInfo();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~ReplaceBoxDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  replaceBoxSearchWordTb;
	private: System::Windows::Forms::TextBox^  replaceBoxReplaceWordTb;




	private: System::Windows::Forms::Button^  replaceBoxSearchNextBtn;
	private: System::Windows::Forms::Button^  replaceBoxReplaceBtn;
	private: System::Windows::Forms::Button^  replaceBoxReplaceAllBtn;
	private: System::Windows::Forms::Button^  replaceBoxCancelBtn;





	private: System::Windows::Forms::CheckBox^  reaplaceBoxCaseSensitiveCb;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->replaceBoxSearchWordTb = (gcnew System::Windows::Forms::TextBox());
			this->replaceBoxReplaceWordTb = (gcnew System::Windows::Forms::TextBox());
			this->replaceBoxSearchNextBtn = (gcnew System::Windows::Forms::Button());
			this->replaceBoxReplaceBtn = (gcnew System::Windows::Forms::Button());
			this->replaceBoxReplaceAllBtn = (gcnew System::Windows::Forms::Button());
			this->replaceBoxCancelBtn = (gcnew System::Windows::Forms::Button());
			this->reaplaceBoxCaseSensitiveCb = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"查找内容(N)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"替换为(P)";
			// 
			// replaceBoxSearchWordTb
			// 
			this->replaceBoxSearchWordTb->Location = System::Drawing::Point(101, 19);
			this->replaceBoxSearchWordTb->Name = L"replaceBoxSearchWordTb";
			this->replaceBoxSearchWordTb->Size = System::Drawing::Size(189, 21);
			this->replaceBoxSearchWordTb->TabIndex = 2;
			// 
			// replaceBoxReplaceWordTb
			// 
			this->replaceBoxReplaceWordTb->Location = System::Drawing::Point(101, 61);
			this->replaceBoxReplaceWordTb->Name = L"replaceBoxReplaceWordTb";
			this->replaceBoxReplaceWordTb->Size = System::Drawing::Size(189, 21);
			this->replaceBoxReplaceWordTb->TabIndex = 3;
			// 
			// replaceBoxSearchNextBtn
			// 
			this->replaceBoxSearchNextBtn->Location = System::Drawing::Point(307, 19);
			this->replaceBoxSearchNextBtn->Name = L"replaceBoxSearchNextBtn";
			this->replaceBoxSearchNextBtn->Size = System::Drawing::Size(91, 23);
			this->replaceBoxSearchNextBtn->TabIndex = 4;
			this->replaceBoxSearchNextBtn->Text = L"查找下一个(F)";
			this->replaceBoxSearchNextBtn->UseVisualStyleBackColor = true;
			this->replaceBoxSearchNextBtn->Click += gcnew System::EventHandler(this, &ReplaceBoxDialog::replaceBoxSearchNextBtn_Click);
			// 
			// replaceBoxReplaceBtn
			// 
			this->replaceBoxReplaceBtn->Location = System::Drawing::Point(307, 61);
			this->replaceBoxReplaceBtn->Name = L"replaceBoxReplaceBtn";
			this->replaceBoxReplaceBtn->Size = System::Drawing::Size(91, 23);
			this->replaceBoxReplaceBtn->TabIndex = 5;
			this->replaceBoxReplaceBtn->Text = L"替换(R)";
			this->replaceBoxReplaceBtn->UseVisualStyleBackColor = true;
			this->replaceBoxReplaceBtn->Click += gcnew System::EventHandler(this, &ReplaceBoxDialog::replaceBoxReplaceBtn_Click);
			// 
			// replaceBoxReplaceAllBtn
			// 
			this->replaceBoxReplaceAllBtn->Location = System::Drawing::Point(307, 103);
			this->replaceBoxReplaceAllBtn->Name = L"replaceBoxReplaceAllBtn";
			this->replaceBoxReplaceAllBtn->Size = System::Drawing::Size(91, 23);
			this->replaceBoxReplaceAllBtn->TabIndex = 6;
			this->replaceBoxReplaceAllBtn->Text = L"全部替换(A)";
			this->replaceBoxReplaceAllBtn->UseVisualStyleBackColor = true;
			this->replaceBoxReplaceAllBtn->Click += gcnew System::EventHandler(this, &ReplaceBoxDialog::replaceBoxReplaceAllBtn_Click);
			// 
			// replaceBoxCancelBtn
			// 
			this->replaceBoxCancelBtn->Location = System::Drawing::Point(307, 146);
			this->replaceBoxCancelBtn->Name = L"replaceBoxCancelBtn";
			this->replaceBoxCancelBtn->Size = System::Drawing::Size(91, 23);
			this->replaceBoxCancelBtn->TabIndex = 7;
			this->replaceBoxCancelBtn->Text = L"取消";
			this->replaceBoxCancelBtn->UseVisualStyleBackColor = true;
			this->replaceBoxCancelBtn->Click += gcnew System::EventHandler(this, &ReplaceBoxDialog::replaceBoxCancelBtn_Click);
			// 
			// reaplaceBoxCaseSensitiveCb
			// 
			this->reaplaceBoxCaseSensitiveCb->AutoSize = true;
			this->reaplaceBoxCaseSensitiveCb->Location = System::Drawing::Point(15, 146);
			this->reaplaceBoxCaseSensitiveCb->Name = L"reaplaceBoxCaseSensitiveCb";
			this->reaplaceBoxCaseSensitiveCb->Size = System::Drawing::Size(84, 16);
			this->reaplaceBoxCaseSensitiveCb->TabIndex = 8;
			this->reaplaceBoxCaseSensitiveCb->Text = L"区分大小写";
			this->reaplaceBoxCaseSensitiveCb->UseVisualStyleBackColor = true;
			// 
			// ReplaceBoxDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 190);
			this->Controls->Add(this->reaplaceBoxCaseSensitiveCb);
			this->Controls->Add(this->replaceBoxCancelBtn);
			this->Controls->Add(this->replaceBoxReplaceAllBtn);
			this->Controls->Add(this->replaceBoxReplaceBtn);
			this->Controls->Add(this->replaceBoxSearchNextBtn);
			this->Controls->Add(this->replaceBoxReplaceWordTb);
			this->Controls->Add(this->replaceBoxSearchWordTb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ReplaceBoxDialog";
			this->Text = L"ReplaceBoxDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: RichTextBox^ parentRichTextAreaTbR;
	private: int position;

	private:
		void SetInfo() {
			this->position = -1;
		}

	public:
		void SetParentRichTextBoxR(RichTextBox^ tb) {
			this->parentRichTextAreaTbR = tb;
		}

	private:
		int indexKeyword(int type) {
			// type:
			//	1 search
			//  2 replace

			// 1. 检查搜索/替换关键字是否为空
			if (this->replaceBoxSearchWordTb->Text == String::Empty)
				return -2;

			/*
			if (type==2 && this->replaceBoxReplaceWordTb->Text == String::Empty) {
				MessageBox::Show(L"替换内容不能为空");
				return ;
			}*/

			// 2. 检查文本是否为空
			if (this->parentRichTextAreaTbR->Text == String::Empty)
				return -2;

			// 3. 检查文本是否包含关键字
			if (! this->parentRichTextAreaTbR->Text->Contains(this->replaceBoxSearchWordTb->Text))
				return -2;

			//
			String^ fullText = this->parentRichTextAreaTbR->Text;
			String^ keyword = this->replaceBoxSearchWordTb->Text;

			// 4. 查找第一个关键字位置
			this->position = fullText->IndexOf(keyword, this->position + 1);

			return this->position;
		}

	private: System::Void replaceBoxSearchNextBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 // 封装好了
				 this->indexKeyword(1);

				 if (this->position == -1) {
					 MessageBox::Show(L"已经查找到最后一个!");
					 return ;
				 }

				 // 5. 选中文本
				 this->parentRichTextAreaTbR->Select(this->position, this->replaceBoxSearchWordTb->Text->Length);

				 // 6. 记录下一个查找的起始位置
				 this->position += this->replaceBoxSearchWordTb->Text->Length;

				 // 7. 聚焦在文本框中
				 this->parentRichTextAreaTbR->Focus();
			 }
private: System::Void replaceBoxReplaceBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 封装好了
			 this->indexKeyword(2);

			 if (this->position == -1) {
				 MessageBox::Show(L"已经查找到最后一个!");
				 return ;
			 }

			 // 5. 先选中文本， 然后替换文本
			 this->parentRichTextAreaTbR->Select(this->position, this->replaceBoxSearchWordTb->Text->Length);
			 this->parentRichTextAreaTbR->SelectedText = this->replaceBoxReplaceWordTb->Text;
			 /*
			 this->parentRichTextAreaTbR->Text = this->parentRichTextAreaTbR->Text->Replace(
					this->replaceBoxSearchWordTb->Text, 
					this->replaceBoxReplaceWordTb->Text, 1);*/
			 this->parentRichTextAreaTbR->Select(this->position, this->replaceBoxReplaceWordTb->Text->Length);
			 // this->parentRichTextAreaTbR->SelectionColor = Color::Red;

			 // 6. 记录下一个查找的起始位置
			 this->position += this->replaceBoxSearchWordTb->Text->Length;

			 // 7. 聚焦在文本框中
			 this->parentRichTextAreaTbR->Focus();
		 }
private: System::Void replaceBoxReplaceAllBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->indexKeyword(3);

			 this->parentRichTextAreaTbR->Text = this->parentRichTextAreaTbR->Text->Replace(
				 this->replaceBoxSearchWordTb->Text, 
				 this->replaceBoxReplaceWordTb->Text);
		 }
private: System::Void replaceBoxCancelBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
