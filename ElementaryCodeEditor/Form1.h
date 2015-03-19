#pragma once

namespace ElementaryCodeEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ToolStripMenuItem^  新建NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存为ToolStripMenuItem;
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
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->另存为ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->页面设置UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->撤销UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->剪切TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->删除LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查找FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查找下一个NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->替换ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->转到GToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->全选AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->时间日期DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->自行换行ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->状态栏SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于ElementaryCodeEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->文件ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->新建NToolStripMenuItem, 
				this->打开OToolStripMenuItem, this->保存SToolStripMenuItem, this->另存为ToolStripMenuItem, this->toolStripSeparator1, this->页面设置UToolStripMenuItem, 
				this->打印PToolStripMenuItem, this->toolStripSeparator2, this->退出XToolStripMenuItem});
			this->文件ToolStripMenuItem->Name = L"文件ToolStripMenuItem";
			this->文件ToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->文件ToolStripMenuItem->Text = L"文件(F)";
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
			// 格式OToolStripMenuItem
			// 
			this->格式OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->自行换行ToolStripMenuItem, 
				this->字体FToolStripMenuItem});
			this->格式OToolStripMenuItem->Name = L"格式OToolStripMenuItem";
			this->格式OToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->格式OToolStripMenuItem->Text = L"格式(O)";
			// 
			// 查看VToolStripMenuItem
			// 
			this->查看VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->状态栏SToolStripMenuItem});
			this->查看VToolStripMenuItem->Name = L"查看VToolStripMenuItem";
			this->查看VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->查看VToolStripMenuItem->Text = L"查看(V)";
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->查看帮助HToolStripMenuItem, 
				this->关于ElementaryCodeEditorToolStripMenuItem});
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->帮助ToolStripMenuItem->Text = L"帮助(H)";
			// 
			// 新建NToolStripMenuItem
			// 
			this->新建NToolStripMenuItem->Name = L"新建NToolStripMenuItem";
			this->新建NToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->新建NToolStripMenuItem->Text = L"新建(N)";
			// 
			// 打开OToolStripMenuItem
			// 
			this->打开OToolStripMenuItem->Name = L"打开OToolStripMenuItem";
			this->打开OToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打开OToolStripMenuItem->Text = L"打开(O)";
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->保存SToolStripMenuItem->Text = L"保存(S)";
			// 
			// 另存为ToolStripMenuItem
			// 
			this->另存为ToolStripMenuItem->Name = L"另存为ToolStripMenuItem";
			this->另存为ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->另存为ToolStripMenuItem->Text = L"另存为(A)";
			// 
			// 页面设置UToolStripMenuItem
			// 
			this->页面设置UToolStripMenuItem->Name = L"页面设置UToolStripMenuItem";
			this->页面设置UToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->页面设置UToolStripMenuItem->Text = L"页面设置(U)";
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打印PToolStripMenuItem->Text = L"打印(P)";
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->退出XToolStripMenuItem->Text = L"退出(X)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(149, 6);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(149, 6);
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
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(149, 6);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(149, 6);
			// 
			// 自行换行ToolStripMenuItem
			// 
			this->自行换行ToolStripMenuItem->Name = L"自行换行ToolStripMenuItem";
			this->自行换行ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->自行换行ToolStripMenuItem->Text = L"自行换行";
			// 
			// 字体FToolStripMenuItem
			// 
			this->字体FToolStripMenuItem->Name = L"字体FToolStripMenuItem";
			this->字体FToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->字体FToolStripMenuItem->Text = L"字体(F)";
			// 
			// 状态栏SToolStripMenuItem
			// 
			this->状态栏SToolStripMenuItem->Name = L"状态栏SToolStripMenuItem";
			this->状态栏SToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->状态栏SToolStripMenuItem->Text = L"状态栏(S)";
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
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(441, 328);
			this->textBox1->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 352);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Elementary Code Editor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

