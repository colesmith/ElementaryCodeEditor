#pragma once
#include "SearchBoxDialog.h"

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
	private: System::Windows::Forms::MenuStrip^  ECEMenus;
	protected: 

	protected: 

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
	private: System::Windows::Forms::ToolStripMenuItem^  exitMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  textCancelMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textCutMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textCopyMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textPaste;
	private: System::Windows::Forms::ToolStripMenuItem^  textDeleteMenu;





	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  textSearchMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  查找下一个NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  替换ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  转到GToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  textSelectAllMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textDateMenu;


	private: System::Windows::Forms::ToolStripMenuItem^  格式OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autoNewLineMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  textFontMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  查看VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statusBarMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于ElementaryCodeEditorToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textAreaTb;
	private: System::Windows::Forms::StatusStrip^  ECEStatusBar;
	private: System::Windows::Forms::ToolStripStatusLabel^  textLength;
	private: System::Windows::Forms::ToolStripStatusLabel^  textLines;
	private: System::Windows::Forms::ToolStripStatusLabel^  textRow;
	private: System::Windows::Forms::ToolStripStatusLabel^  textColumn;
	private: System::Windows::Forms::ToolStripStatusLabel^  textCharset;
	private: System::Windows::Forms::Timer^  ECEStatusBarTimer;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->ECEMenus = (gcnew System::Windows::Forms::MenuStrip());
			this->文件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileNewMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileOpenMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveAsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->页面设置UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCancelMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCutMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCopyMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textPaste = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textDeleteMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->textSearchMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查找下一个NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->替换ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->转到GToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->textSelectAllMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textDateMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoNewLineMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textFontMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusBarMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于ElementaryCodeEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textAreaTb = (gcnew System::Windows::Forms::TextBox());
			this->ECEStatusBar = (gcnew System::Windows::Forms::StatusStrip());
			this->textLength = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textLines = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textRow = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textColumn = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textCharset = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->ECEStatusBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ECEMenus->SuspendLayout();
			this->ECEStatusBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// ECEMenus
			// 
			this->ECEMenus->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->文件ToolStripMenuItem, 
				this->编辑EToolStripMenuItem, this->格式OToolStripMenuItem, this->查看VToolStripMenuItem, this->帮助ToolStripMenuItem});
			this->ECEMenus->Location = System::Drawing::Point(0, 0);
			this->ECEMenus->Name = L"ECEMenus";
			this->ECEMenus->Size = System::Drawing::Size(441, 24);
			this->ECEMenus->TabIndex = 0;
			this->ECEMenus->Text = L"menuStrip1";
			// 
			// 文件ToolStripMenuItem
			// 
			this->文件ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->fileNewMenu, 
				this->fileOpenMenu, this->fileSaveMenu, this->fileSaveAsMenu, this->toolStripSeparator1, this->页面设置UToolStripMenuItem, this->打印PToolStripMenuItem, 
				this->toolStripSeparator2, this->exitMenu});
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
			// exitMenu
			// 
			this->exitMenu->Name = L"exitMenu";
			this->exitMenu->Size = System::Drawing::Size(186, 22);
			this->exitMenu->Text = L"退出(X)";
			this->exitMenu->Click += gcnew System::EventHandler(this, &Form1::exitMenu_Click);
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {this->textCancelMenu, 
				this->textCutMenu, this->textCopyMenu, this->textPaste, this->textDeleteMenu, this->toolStripSeparator3, this->textSearchMenu, 
				this->查找下一个NToolStripMenuItem, this->替换ToolStripMenuItem, this->转到GToolStripMenuItem, this->toolStripSeparator4, this->textSelectAllMenu, 
				this->textDateMenu});
			this->编辑EToolStripMenuItem->Name = L"编辑EToolStripMenuItem";
			this->编辑EToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->编辑EToolStripMenuItem->Text = L"编辑(E)";
			// 
			// textCancelMenu
			// 
			this->textCancelMenu->Name = L"textCancelMenu";
			this->textCancelMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->textCancelMenu->Size = System::Drawing::Size(164, 22);
			this->textCancelMenu->Text = L"撤销(U)";
			this->textCancelMenu->Click += gcnew System::EventHandler(this, &Form1::textCancelMenu_Click);
			// 
			// textCutMenu
			// 
			this->textCutMenu->Name = L"textCutMenu";
			this->textCutMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->textCutMenu->Size = System::Drawing::Size(164, 22);
			this->textCutMenu->Text = L"剪切(T)";
			this->textCutMenu->Click += gcnew System::EventHandler(this, &Form1::textCutMenu_Click);
			// 
			// textCopyMenu
			// 
			this->textCopyMenu->Name = L"textCopyMenu";
			this->textCopyMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->textCopyMenu->Size = System::Drawing::Size(164, 22);
			this->textCopyMenu->Text = L"复制(C)";
			this->textCopyMenu->Click += gcnew System::EventHandler(this, &Form1::textCopyMenu_Click);
			// 
			// textPaste
			// 
			this->textPaste->Name = L"textPaste";
			this->textPaste->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->textPaste->Size = System::Drawing::Size(164, 22);
			this->textPaste->Text = L"粘贴(P)";
			this->textPaste->Click += gcnew System::EventHandler(this, &Form1::textPaste_Click);
			// 
			// textDeleteMenu
			// 
			this->textDeleteMenu->Name = L"textDeleteMenu";
			this->textDeleteMenu->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->textDeleteMenu->Size = System::Drawing::Size(164, 22);
			this->textDeleteMenu->Text = L"删除(L)";
			this->textDeleteMenu->Click += gcnew System::EventHandler(this, &Form1::textDeleteMenu_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(161, 6);
			// 
			// textSearchMenu
			// 
			this->textSearchMenu->Name = L"textSearchMenu";
			this->textSearchMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->textSearchMenu->Size = System::Drawing::Size(164, 22);
			this->textSearchMenu->Text = L"查找(F)";
			this->textSearchMenu->Click += gcnew System::EventHandler(this, &Form1::textSearchMenu_Click);
			// 
			// 查找下一个NToolStripMenuItem
			// 
			this->查找下一个NToolStripMenuItem->Name = L"查找下一个NToolStripMenuItem";
			this->查找下一个NToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->查找下一个NToolStripMenuItem->Text = L"查找下一个(N)";
			// 
			// 替换ToolStripMenuItem
			// 
			this->替换ToolStripMenuItem->Name = L"替换ToolStripMenuItem";
			this->替换ToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->替换ToolStripMenuItem->Text = L"替换(R)";
			// 
			// 转到GToolStripMenuItem
			// 
			this->转到GToolStripMenuItem->Name = L"转到GToolStripMenuItem";
			this->转到GToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->转到GToolStripMenuItem->Text = L"转到(G)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(161, 6);
			// 
			// textSelectAllMenu
			// 
			this->textSelectAllMenu->Name = L"textSelectAllMenu";
			this->textSelectAllMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->textSelectAllMenu->Size = System::Drawing::Size(164, 22);
			this->textSelectAllMenu->Text = L"全选(A)";
			this->textSelectAllMenu->Click += gcnew System::EventHandler(this, &Form1::textSelectAllMenu_Click);
			// 
			// textDateMenu
			// 
			this->textDateMenu->Name = L"textDateMenu";
			this->textDateMenu->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->textDateMenu->Size = System::Drawing::Size(164, 22);
			this->textDateMenu->Text = L"时间/日期(D)";
			this->textDateMenu->Click += gcnew System::EventHandler(this, &Form1::textDateMenu_Click);
			// 
			// 格式OToolStripMenuItem
			// 
			this->格式OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->autoNewLineMenu, 
				this->textFontMenu});
			this->格式OToolStripMenuItem->Name = L"格式OToolStripMenuItem";
			this->格式OToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->格式OToolStripMenuItem->Text = L"格式(O)";
			// 
			// autoNewLineMenu
			// 
			this->autoNewLineMenu->Name = L"autoNewLineMenu";
			this->autoNewLineMenu->Size = System::Drawing::Size(142, 22);
			this->autoNewLineMenu->Text = L"自行换行(W)";
			this->autoNewLineMenu->Click += gcnew System::EventHandler(this, &Form1::autoNewLineMenu_Click);
			// 
			// textFontMenu
			// 
			this->textFontMenu->Name = L"textFontMenu";
			this->textFontMenu->Size = System::Drawing::Size(142, 22);
			this->textFontMenu->Text = L"字体(F)";
			this->textFontMenu->Click += gcnew System::EventHandler(this, &Form1::textFontMenu_Click);
			// 
			// 查看VToolStripMenuItem
			// 
			this->查看VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->statusBarMenu});
			this->查看VToolStripMenuItem->Name = L"查看VToolStripMenuItem";
			this->查看VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->查看VToolStripMenuItem->Text = L"查看(V)";
			// 
			// statusBarMenu
			// 
			this->statusBarMenu->Checked = true;
			this->statusBarMenu->CheckState = System::Windows::Forms::CheckState::Checked;
			this->statusBarMenu->Name = L"statusBarMenu";
			this->statusBarMenu->Size = System::Drawing::Size(125, 22);
			this->statusBarMenu->Text = L"状态栏(S)";
			this->statusBarMenu->Click += gcnew System::EventHandler(this, &Form1::statusBarMenu_Click);
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
			// ECEStatusBar
			// 
			this->ECEStatusBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->textLength, this->textLines, 
				this->textRow, this->textColumn, this->textCharset});
			this->ECEStatusBar->Location = System::Drawing::Point(0, 330);
			this->ECEStatusBar->Name = L"ECEStatusBar";
			this->ECEStatusBar->Size = System::Drawing::Size(441, 22);
			this->ECEStatusBar->TabIndex = 2;
			this->ECEStatusBar->Text = L"statusStrip1";
			// 
			// textLength
			// 
			this->textLength->Name = L"textLength";
			this->textLength->Size = System::Drawing::Size(42, 17);
			this->textLength->Text = L"长度 : ";
			// 
			// textLines
			// 
			this->textLines->Name = L"textLines";
			this->textLines->Size = System::Drawing::Size(42, 17);
			this->textLines->Text = L"行数 : ";
			// 
			// textRow
			// 
			this->textRow->Name = L"textRow";
			this->textRow->Size = System::Drawing::Size(30, 17);
			this->textRow->Text = L"行 : ";
			// 
			// textColumn
			// 
			this->textColumn->Name = L"textColumn";
			this->textColumn->Size = System::Drawing::Size(30, 17);
			this->textColumn->Text = L"列 : ";
			// 
			// textCharset
			// 
			this->textCharset->Name = L"textCharset";
			this->textCharset->Size = System::Drawing::Size(42, 17);
			this->textCharset->Text = L"编码 : ";
			// 
			// ECEStatusBarTimer
			// 
			this->ECEStatusBarTimer->Enabled = true;
			this->ECEStatusBarTimer->Interval = 500;
			this->ECEStatusBarTimer->Tick += gcnew System::EventHandler(this, &Form1::ECEStatusBarTimer_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 352);
			this->Controls->Add(this->ECEStatusBar);
			this->Controls->Add(this->textAreaTb);
			this->Controls->Add(this->ECEMenus);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->ECEMenus;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elementary Code Editor";
			this->ECEMenus->ResumeLayout(false);
			this->ECEMenus->PerformLayout();
			this->ECEStatusBar->ResumeLayout(false);
			this->ECEStatusBar->PerformLayout();
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
			 // 先检查文本框是否有改动
			 
			 if (this->textAreaTb->Modified) {
				 if (MessageBox::Show(L"文件内容已改动,是否保存?", L"文件改动问题", MessageBoxButtons::OKCancel) ==
					 System::Windows::Forms::DialogResult::OK) {
						 this->fileSaveMenu_Click(sender, e);
				 }
			 }

			 // 清空文本
			 this->textAreaTb->Clear();
			 // 设置Modified为未改动
			 this->textAreaTb->Modified = false;

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
			 if (this->textAreaTb->Tag == nullptr || this->textAreaTb->Tag->ToString() == L"") {
				 this->fileSaveAsMenu_Click(sender, e);
				 return ;
			 }
			 
			 // 文件已存在
			 FileInfo^ fileInfo = gcnew FileInfo(this->textAreaTb->Tag->ToString());
			 // FileMode::Truncate 全部重写 @TODO
			 FileStream^ stream = fileInfo->Open(FileMode::Truncate, FileAccess::Write);
			 StreamWriter^ writer = gcnew StreamWriter(stream, Encoding::Default);

			 for each (String^ lineText in this->textAreaTb->Lines) {
				 writer->WriteLine(lineText);
				 // 刷新缓冲
				 writer->Flush();
			 }

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
private: System::Void exitMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->textAreaTb->Modified)
			 {
				 if (MessageBox::Show(L"内容变动，是否保存？", L"退出提示", MessageBoxButtons::OKCancel) == 
					 System::Windows::Forms::DialogResult::OK) {
					 this->fileSaveMenu_Click(sender, e);
				 }
			 }

			 // 退出
			 Application::Exit();
		 }
private: System::Void textCancelMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textAreaTb->Undo();
		 }
private: System::Void textCutMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textAreaTb->Cut();
		 }
private: System::Void textCopyMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textAreaTb->Copy();
		 }
private: System::Void textPaste_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textAreaTb->Paste();
		 }
private: System::Void textSelectAllMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textAreaTb->SelectAll();
		 }
private: System::Void textDateMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->textAreaTb->Text += (DateTime::Now.ToLocalTime() + L"\r\n");
		 }
private: System::Void textDeleteMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 // @TODO only delete selectedText
			 this->textAreaTb->SelectedText = L"";
		 }
private: System::Void textSearchMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 SearchBoxDialog^ searchBoxDialog = gcnew SearchBoxDialog();

			 // 设置parentForm
			 // searchBoxDialog->ParentForm = this;
			 // searchBoxDialog->MdiParent = this;
			 // MessageBox::Show(searchBoxDialog->ParentForm->ToString());
			 
			 // 悬浮于当前窗体
			 searchBoxDialog->Owner = this;

			 // 传值（从主窗口传到 SearchBox 窗口
			 searchBoxDialog->SetParentTextBox(this->textAreaTb);

			 searchBoxDialog->Show();
		 }
private: System::Void textFontMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 FontDialog^ fontDialog = gcnew FontDialog();
			 fontDialog->Font = this->textAreaTb->Font;
			 if (fontDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK)
				 return ;
			 this->textAreaTb->Font = fontDialog->Font;
		 }
private: System::Void statusBarMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->statusBarMenu->Checked = ! this->statusBarMenu->Checked;

			 if (! this->statusBarMenu->Checked) {
				// 未打开状态栏:
				 // 1. 关闭 状态栏
				 this->ECEStatusBar->Visible = false;
				 // 2. 关闭 Timer
				 this->ECEStatusBarTimer->Enabled = false;
				 return ;
			 }

			 // 1. 打开状态栏
			 this->ECEStatusBar->Visible = true;
			 // 2. 打开计时器
			 this->ECEStatusBarTimer->Enabled = true;
		 }
private: System::Void ECEStatusBarTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int totalLine = textAreaTb->GetLineFromCharIndex(
					textAreaTb->Text->Length); // 总行数
			 int index = textAreaTb->GetFirstCharIndexOfCurrentLine(); // 每行第一个字符索引
			 int line = textAreaTb->GetLineFromCharIndex(index) + 1; // 行号
			 int column = textAreaTb->SelectionStart - index + 1; // 列号

			 this->textLength->Text = L"长度 : " + this->textAreaTb->Text->Length.ToString();
			 this->textLines->Text = L"行数 : " + totalLine.ToString();
			 this->textRow->Text = L"行 : " + line.ToString();
			 this->textColumn->Text = L"列 : " + column.ToString();

			 // 编码 @TODO
			 // this->textCharset->Text = L"编码 : " + this->textAreaTb->

			 // 自动换行@TODO
			 if (autoNewLineMenu->Enabled) {
				 // MessageBox::Show(this->textAreaTb->Width.ToString());
				 if (column >= textAreaTb->Width)
					 textAreaTb->Text += "\r\n";
			 }

			 
		 }
private: System::Void autoNewLineMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 autoNewLineMenu->Enabled = ! autoNewLineMenu->Enabled;
		 }
};
}

