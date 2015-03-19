#pragma once

namespace ElementaryCodeEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  文件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fileNewMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  fileOpenMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  fileSaveMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  fileSaveAsMenu;





	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  页面设置UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  撤销UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  剪切TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  复制CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  粘贴PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  删除LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  查找FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查找下一个NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  替换ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  转到GToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  全选AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  时间日期DToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  格式OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  自行换行ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  字体FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  状态栏SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于ElementaryCodeEditorToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textAreaTb;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileNewMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileOpenMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveAsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->页面设置UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->撤销UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->剪切TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->删除LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->查找FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查找下一个NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->替换ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->转到GToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->全选AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->时间日期DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->自行换行ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->状态栏SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于ElementaryCodeEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textAreaTb = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->文件ToolStripMenuItem, 
				this->编辑EToolStripMenuItem, this->格式OToolStripMenuItem, this->查看VToolStripMenuItem, this->帮助ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(441, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件ToolStripMenuItem
			// 
			this->文件ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->fileNewMenu, 
				this->fileOpenMenu, this->fileSaveMenu, this->fileSaveAsMenu, this->toolStripSeparator1, this->页面设置UToolStripMenuItem, this->打印PToolStripMenuItem, 
				this->toolStripSeparator2, this->退出XToolStripMenuItem});
			this->文件ToolStripMenuItem->Name = L"文件ToolStripMenuItem";
			this->文件ToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->文件ToolStripMenuItem->Text = L"文件(F)";
			// 
			// fileNewMenu
			// 
			this->fileNewMenu->Name = L"fileNewMenu";
			this->fileNewMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt) 
				| System::Windows::Forms::Keys::N));
			this->fileNewMenu->Size = System::Drawing::Size(186, 22);
			this->fileNewMenu->Text = L"新建(N)";
			this->fileNewMenu->Click += gcnew System::EventHandler(this, &Form1::fileNewMenu_Click);
			// 
			// fileOpenMenu
			// 
			this->fileOpenMenu->Name = L"fileOpenMenu";
			this->fileOpenMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->fileOpenMenu->Size = System::Drawing::Size(186, 22);
			this->fileOpenMenu->Text = L"打开(O)";
			this->fileOpenMenu->Click += gcnew System::EventHandler(this, &Form1::fileOpenMenu_Click);
			// 
			// fileSaveMenu
			// 
			this->fileSaveMenu->Name = L"fileSaveMenu";
			this->fileSaveMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->fileSaveMenu->Size = System::Drawing::Size(186, 22);
			this->fileSaveMenu->Text = L"保存(S)";
			this->fileSaveMenu->Click += gcnew System::EventHandler(this, &Form1::fileSaveMenu_Click);
			// 
			// fileSaveAsMenu
			// 
			this->fileSaveAsMenu->Name = L"fileSaveAsMenu";
			this->fileSaveAsMenu->Size = System::Drawing::Size(186, 22);
			this->fileSaveAsMenu->Text = L"另存为(A)";
			this->fileSaveAsMenu->Click += gcnew System::EventHandler(this, &Form1::fileSaveAsMenu_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(183, 6);
			// 
			// 页面设置UToolStripMenuItem
			// 
			this->页面设置UToolStripMenuItem->Name = L"页面设置UToolStripMenuItem";
			this->页面设置UToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->页面设置UToolStripMenuItem->Text = L"页面设置(U)";
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->打印PToolStripMenuItem->Text = L"打印(P)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(183, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->退出XToolStripMenuItem->Text = L"退出(X)";
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {this->撤销UToolStripMenuItem, 
				this->剪切TToolStripMenuItem, this->复制CToolStripMenuItem, this->粘贴PToolStripMenuItem, this->删除LToolStripMenuItem, this->toolStripSeparator3, 
				this->查找FToolStripMenuItem, this->查找下一个NToolStripMenuItem, this->替换ToolStripMenuItem, this->转到GToolStripMenuItem, this->toolStripSeparator4, 
				this->全选AToolStripMenuItem, this->时间日期DToolStripMenuItem});
			this->编辑EToolStripMenuItem->Name = L"编辑EToolStripMenuItem";
			this->编辑EToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->编辑EToolStripMenuItem->Text = L"编辑(E)";
			// 
			// 撤销UToolStripMenuItem
			// 
			this->撤销UToolStripMenuItem->Name = L"撤销UToolStripMenuItem";
			this->撤销UToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->撤销UToolStripMenuItem->Text = L"撤销(U)";
			// 
			// 剪切TToolStripMenuItem
			// 
			this->剪切TToolStripMenuItem->Name = L"剪切TToolStripMenuItem";
			this->剪切TToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->剪切TToolStripMenuItem->Text = L"剪切(T)";
			// 
			// 复制CToolStripMenuItem
			// 
			this->复制CToolStripMenuItem->Name = L"复制CToolStripMenuItem";
			this->复制CToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->复制CToolStripMenuItem->Text = L"复制(C)";
			// 
			// 粘贴PToolStripMenuItem
			// 
			this->粘贴PToolStripMenuItem->Name = L"粘贴PToolStripMenuItem";
			this->粘贴PToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->粘贴PToolStripMenuItem->Text = L"粘贴(P)";
			// 
			// 删除LToolStripMenuItem
			// 
			this->删除LToolStripMenuItem->Name = L"删除LToolStripMenuItem";
			this->删除LToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->删除LToolStripMenuItem->Text = L"删除(L)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(149, 6);
			// 
			// 查找FToolStripMenuItem
			// 
			this->查找FToolStripMenuItem->Name = L"查找FToolStripMenuItem";
			this->查找FToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->查找FToolStripMenuItem->Text = L"查找(F)";
			// 
			// 查找下一个NToolStripMenuItem
			// 
			this->查找下一个NToolStripMenuItem->Name = L"查找下一个NToolStripMenuItem";
			this->查找下一个NToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->查找下一个NToolStripMenuItem->Text = L"查找下一个(N)";
			// 
			// 替换ToolStripMenuItem
			// 
			this->替换ToolStripMenuItem->Name = L"替换ToolStripMenuItem";
			this->替换ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->替换ToolStripMenuItem->Text = L"替换(R)";
			// 
			// 转到GToolStripMenuItem
			// 
			this->转到GToolStripMenuItem->Name = L"转到GToolStripMenuItem";
			this->转到GToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->转到GToolStripMenuItem->Text = L"转到(G)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(149, 6);
			// 
			// 全选AToolStripMenuItem
			// 
			this->全选AToolStripMenuItem->Name = L"全选AToolStripMenuItem";
			this->全选AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->全选AToolStripMenuItem->Text = L"全选(A)";
			// 
			// 时间日期DToolStripMenuItem
			// 
			this->时间日期DToolStripMenuItem->Name = L"时间日期DToolStripMenuItem";
			this->时间日期DToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->时间日期DToolStripMenuItem->Text = L"时间/日期(D)";
			// 
			// 格式OToolStripMenuItem
			// 
			this->格式OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->自行换行ToolStripMenuItem, 
				this->字体FToolStripMenuItem});
			this->格式OToolStripMenuItem->Name = L"格式OToolStripMenuItem";
			this->格式OToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->格式OToolStripMenuItem->Text = L"格式(O)";
			// 
			// 自行换行ToolStripMenuItem
			// 
			this->自行换行ToolStripMenuItem->Name = L"自行换行ToolStripMenuItem";
			this->自行换行ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->自行换行ToolStripMenuItem->Text = L"自行换行";
			// 
			// 字体FToolStripMenuItem
			// 
			this->字体FToolStripMenuItem->Name = L"字体FToolStripMenuItem";
			this->字体FToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->字体FToolStripMenuItem->Text = L"字体(F)";
			// 
			// 查看VToolStripMenuItem
			// 
			this->查看VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->状态栏SToolStripMenuItem});
			this->查看VToolStripMenuItem->Name = L"查看VToolStripMenuItem";
			this->查看VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->查看VToolStripMenuItem->Text = L"查看(V)";
			// 
			// 状态栏SToolStripMenuItem
			// 
			this->状态栏SToolStripMenuItem->Name = L"状态栏SToolStripMenuItem";
			this->状态栏SToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->状态栏SToolStripMenuItem->Text = L"状态栏(S)";
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->查看帮助HToolStripMenuItem, 
				this->关于ElementaryCodeEditorToolStripMenuItem});
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->帮助ToolStripMenuItem->Text = L"帮助(H)";
			// 
			// 查看帮助HToolStripMenuItem
			// 
			this->查看帮助HToolStripMenuItem->Name = L"查看帮助HToolStripMenuItem";
			this->查看帮助HToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->查看帮助HToolStripMenuItem->Text = L"查看帮助(H)";
			// 
			// 关于ElementaryCodeEditorToolStripMenuItem
			// 
			this->关于ElementaryCodeEditorToolStripMenuItem->Name = L"关于ElementaryCodeEditorToolStripMenuItem";
			this->关于ElementaryCodeEditorToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->关于ElementaryCodeEditorToolStripMenuItem->Text = L"关于 Elementary Code Editor";
			// 
			// textAreaTb
			// 
			this->textAreaTb->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textAreaTb->Location = System::Drawing::Point(0, 24);
			this->textAreaTb->Multiline = true;
			this->textAreaTb->Name = L"textAreaTb";
			this->textAreaTb->Size = System::Drawing::Size(441, 328);
			this->textAreaTb->TabIndex = 1;
			this->textAreaTb->Tag = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 352);
			this->Controls->Add(this->textAreaTb);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elementary Code Editor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fileNewMenu_Click(System::Object^  sender, System::EventArgs^  e) {
				 // 先检查文本框是否有改动
				 if (this->textAreaTb->Modified) {
					if (MessageBox::Show(L"文件内容已改动,是否保存?", L"文件改动问题", MessageBoxButtons::OKCancel) ==
						System::Windows::Forms::DialogResult::OK) {
						this->fileSaveMenu_Click(sender, e);
					}
				 }

				 // 新建窗口
				 // 修改变为false
				 this->textAreaTb->Modified = false;
				 // 初始化 文件名， 存在 tag中
				 this->textAreaTb->Tag = nullptr;
				 // 清空文本
				 this->textAreaTb->Clear();
			 }

private: System::Void fileOpenMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			 openFileDialog->Filter = L"文本文档(*.txt)|*.txt|所有文件(*.*)|*.*"; 	// 过滤字符串

			 if (openFileDialog->ShowDialog() != 
				 System::Windows::Forms::DialogResult::OK)
				 return ;
			 // 设置文件名
			 this->textAreaTb->Tag = openFileDialog->FileName;
			 // 读取文本
			 FileInfo^ fileInfo = gcnew FileInfo(this->textAreaTb->Tag->ToString());
			 FileStream^ stream = fileInfo->Open(FileMode::Open, FileAccess::Read);
			 StreamReader^ reader = gcnew StreamReader(stream, Encoding::Default);

			 String^ lineText = "";
			 while ((lineText = reader->ReadLine()) != nullptr) {
				 this->textAreaTb->Text += (lineText+"\r\n");
			 }

			 reader->Close();
			 stream->Close();
		 }
private: System::Void fileSaveMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 检查是否是新建文件还是已存在的文件
			 // 标志: this->textAreaTb->Tag == nullptr

			 // 文件不存在
			 if (this->textAreaTb->Tag == nullptr) {
				 this->fileSaveAsMenu_Click(sender, e);
				 return ;
			 }
			 
			 // 文件已存在
			 FileInfo^ fileInfo = gcnew FileInfo(this->textAreaTb->Tag->ToString());
			 // FileMode::Truncate 全部重写 @TODO
			 FileStream^ stream = fileInfo->Open(FileMode::Truncate, FileAccess::Write);
			 StreamWriter^ writer = gcnew StreamWriter(stream, Encoding::Default);

			 for each (String^ lineText in this->textAreaTb->Lines)
				 writer->WriteLine(lineText);

			 writer->Close();
			 stream->Close();
		 }
private: System::Void fileSaveAsMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 文件不论存不存在

			 // 别忘了，modify = false
			 this->textAreaTb->Modified = false;

			 SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			 // 
			 // saveFileDialog->Filter = L"";
			 if (saveFileDialog->ShowDialog() != 
				 System::Windows::Forms::DialogResult::OK) {
					 return ;
			 }



			 FileInfo^ fileInfo = gcnew FileInfo(saveFileDialog->FileName);
			 // FileMode::
			 FileStream^ stream = fileInfo->Open(FileMode::OpenOrCreate, FileAccess::Write);
			 StreamWriter^ writer = gcnew StreamWriter(stream, Encoding::Default);

			 for each (String^ lineText in this->textAreaTb->Lines)
				 writer->WriteLine(lineText);

			 writer->Close();
			 stream->Close();

			 // 设置当前文件名
			 this->textAreaTb->Tag = saveFileDialog->FileName;
		 }
};
}

