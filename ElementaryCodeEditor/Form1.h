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
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fileNewMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  fileOpenMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  fileSaveMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  fileSaveAsMenu;





	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  ҳ������UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  �༭EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  textCancelMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textCutMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textCopyMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textPaste;
	private: System::Windows::Forms::ToolStripMenuItem^  textDeleteMenu;





	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  textSearchMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  ������һ��NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �滻ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ת��GToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  textSelectAllMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  textDateMenu;


	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autoNewLineMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  textFontMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  �鿴VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statusBarMenu;

	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ElementaryCodeEditorToolStripMenuItem;
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
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->ECEMenus = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileNewMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileOpenMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveAsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ҳ������UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCancelMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCutMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCopyMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textPaste = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textDeleteMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->textSearchMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������һ��NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�滻ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ת��GToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->textSelectAllMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textDateMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʽOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoNewLineMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textFontMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusBarMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ElementaryCodeEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->ECEMenus->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->�ļ�ToolStripMenuItem, 
				this->�༭EToolStripMenuItem, this->��ʽOToolStripMenuItem, this->�鿴VToolStripMenuItem, this->����ToolStripMenuItem});
			this->ECEMenus->Location = System::Drawing::Point(0, 0);
			this->ECEMenus->Name = L"ECEMenus";
			this->ECEMenus->Size = System::Drawing::Size(441, 24);
			this->ECEMenus->TabIndex = 0;
			this->ECEMenus->Text = L"menuStrip1";
			// 
			// �ļ�ToolStripMenuItem
			// 
			this->�ļ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->fileNewMenu, 
				this->fileOpenMenu, this->fileSaveMenu, this->fileSaveAsMenu, this->toolStripSeparator1, this->ҳ������UToolStripMenuItem, this->��ӡPToolStripMenuItem, 
				this->toolStripSeparator2, this->exitMenu});
			this->�ļ�ToolStripMenuItem->Name = L"�ļ�ToolStripMenuItem";
			this->�ļ�ToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->�ļ�ToolStripMenuItem->Text = L"�ļ�(F)";
			// 
			// fileNewMenu
			// 
			this->fileNewMenu->Name = L"fileNewMenu";
			this->fileNewMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt) 
				| System::Windows::Forms::Keys::N));
			this->fileNewMenu->Size = System::Drawing::Size(186, 22);
			this->fileNewMenu->Text = L"�½�(N)";
			this->fileNewMenu->Click += gcnew System::EventHandler(this, &Form1::fileNewMenu_Click);
			// 
			// fileOpenMenu
			// 
			this->fileOpenMenu->Name = L"fileOpenMenu";
			this->fileOpenMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->fileOpenMenu->Size = System::Drawing::Size(186, 22);
			this->fileOpenMenu->Text = L"��(O)";
			this->fileOpenMenu->Click += gcnew System::EventHandler(this, &Form1::fileOpenMenu_Click);
			// 
			// fileSaveMenu
			// 
			this->fileSaveMenu->Name = L"fileSaveMenu";
			this->fileSaveMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->fileSaveMenu->Size = System::Drawing::Size(186, 22);
			this->fileSaveMenu->Text = L"����(S)";
			this->fileSaveMenu->Click += gcnew System::EventHandler(this, &Form1::fileSaveMenu_Click);
			// 
			// fileSaveAsMenu
			// 
			this->fileSaveAsMenu->Name = L"fileSaveAsMenu";
			this->fileSaveAsMenu->Size = System::Drawing::Size(186, 22);
			this->fileSaveAsMenu->Text = L"���Ϊ(A)";
			this->fileSaveAsMenu->Click += gcnew System::EventHandler(this, &Form1::fileSaveAsMenu_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(183, 6);
			// 
			// ҳ������UToolStripMenuItem
			// 
			this->ҳ������UToolStripMenuItem->Name = L"ҳ������UToolStripMenuItem";
			this->ҳ������UToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->ҳ������UToolStripMenuItem->Text = L"ҳ������(U)";
			// 
			// ��ӡPToolStripMenuItem
			// 
			this->��ӡPToolStripMenuItem->Name = L"��ӡPToolStripMenuItem";
			this->��ӡPToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->��ӡPToolStripMenuItem->Text = L"��ӡ(P)";
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
			this->exitMenu->Text = L"�˳�(X)";
			this->exitMenu->Click += gcnew System::EventHandler(this, &Form1::exitMenu_Click);
			// 
			// �༭EToolStripMenuItem
			// 
			this->�༭EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {this->textCancelMenu, 
				this->textCutMenu, this->textCopyMenu, this->textPaste, this->textDeleteMenu, this->toolStripSeparator3, this->textSearchMenu, 
				this->������һ��NToolStripMenuItem, this->�滻ToolStripMenuItem, this->ת��GToolStripMenuItem, this->toolStripSeparator4, this->textSelectAllMenu, 
				this->textDateMenu});
			this->�༭EToolStripMenuItem->Name = L"�༭EToolStripMenuItem";
			this->�༭EToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->�༭EToolStripMenuItem->Text = L"�༭(E)";
			// 
			// textCancelMenu
			// 
			this->textCancelMenu->Name = L"textCancelMenu";
			this->textCancelMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->textCancelMenu->Size = System::Drawing::Size(164, 22);
			this->textCancelMenu->Text = L"����(U)";
			this->textCancelMenu->Click += gcnew System::EventHandler(this, &Form1::textCancelMenu_Click);
			// 
			// textCutMenu
			// 
			this->textCutMenu->Name = L"textCutMenu";
			this->textCutMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->textCutMenu->Size = System::Drawing::Size(164, 22);
			this->textCutMenu->Text = L"����(T)";
			this->textCutMenu->Click += gcnew System::EventHandler(this, &Form1::textCutMenu_Click);
			// 
			// textCopyMenu
			// 
			this->textCopyMenu->Name = L"textCopyMenu";
			this->textCopyMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->textCopyMenu->Size = System::Drawing::Size(164, 22);
			this->textCopyMenu->Text = L"����(C)";
			this->textCopyMenu->Click += gcnew System::EventHandler(this, &Form1::textCopyMenu_Click);
			// 
			// textPaste
			// 
			this->textPaste->Name = L"textPaste";
			this->textPaste->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->textPaste->Size = System::Drawing::Size(164, 22);
			this->textPaste->Text = L"ճ��(P)";
			this->textPaste->Click += gcnew System::EventHandler(this, &Form1::textPaste_Click);
			// 
			// textDeleteMenu
			// 
			this->textDeleteMenu->Name = L"textDeleteMenu";
			this->textDeleteMenu->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->textDeleteMenu->Size = System::Drawing::Size(164, 22);
			this->textDeleteMenu->Text = L"ɾ��(L)";
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
			this->textSearchMenu->Text = L"����(F)";
			this->textSearchMenu->Click += gcnew System::EventHandler(this, &Form1::textSearchMenu_Click);
			// 
			// ������һ��NToolStripMenuItem
			// 
			this->������һ��NToolStripMenuItem->Name = L"������һ��NToolStripMenuItem";
			this->������һ��NToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->������һ��NToolStripMenuItem->Text = L"������һ��(N)";
			// 
			// �滻ToolStripMenuItem
			// 
			this->�滻ToolStripMenuItem->Name = L"�滻ToolStripMenuItem";
			this->�滻ToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->�滻ToolStripMenuItem->Text = L"�滻(R)";
			// 
			// ת��GToolStripMenuItem
			// 
			this->ת��GToolStripMenuItem->Name = L"ת��GToolStripMenuItem";
			this->ת��GToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->ת��GToolStripMenuItem->Text = L"ת��(G)";
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
			this->textSelectAllMenu->Text = L"ȫѡ(A)";
			this->textSelectAllMenu->Click += gcnew System::EventHandler(this, &Form1::textSelectAllMenu_Click);
			// 
			// textDateMenu
			// 
			this->textDateMenu->Name = L"textDateMenu";
			this->textDateMenu->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->textDateMenu->Size = System::Drawing::Size(164, 22);
			this->textDateMenu->Text = L"ʱ��/����(D)";
			this->textDateMenu->Click += gcnew System::EventHandler(this, &Form1::textDateMenu_Click);
			// 
			// ��ʽOToolStripMenuItem
			// 
			this->��ʽOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->autoNewLineMenu, 
				this->textFontMenu});
			this->��ʽOToolStripMenuItem->Name = L"��ʽOToolStripMenuItem";
			this->��ʽOToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->��ʽOToolStripMenuItem->Text = L"��ʽ(O)";
			// 
			// autoNewLineMenu
			// 
			this->autoNewLineMenu->Name = L"autoNewLineMenu";
			this->autoNewLineMenu->Size = System::Drawing::Size(142, 22);
			this->autoNewLineMenu->Text = L"���л���(W)";
			this->autoNewLineMenu->Click += gcnew System::EventHandler(this, &Form1::autoNewLineMenu_Click);
			// 
			// textFontMenu
			// 
			this->textFontMenu->Name = L"textFontMenu";
			this->textFontMenu->Size = System::Drawing::Size(142, 22);
			this->textFontMenu->Text = L"����(F)";
			this->textFontMenu->Click += gcnew System::EventHandler(this, &Form1::textFontMenu_Click);
			// 
			// �鿴VToolStripMenuItem
			// 
			this->�鿴VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->statusBarMenu});
			this->�鿴VToolStripMenuItem->Name = L"�鿴VToolStripMenuItem";
			this->�鿴VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->�鿴VToolStripMenuItem->Text = L"�鿴(V)";
			// 
			// statusBarMenu
			// 
			this->statusBarMenu->Checked = true;
			this->statusBarMenu->CheckState = System::Windows::Forms::CheckState::Checked;
			this->statusBarMenu->Name = L"statusBarMenu";
			this->statusBarMenu->Size = System::Drawing::Size(125, 22);
			this->statusBarMenu->Text = L"״̬��(S)";
			this->statusBarMenu->Click += gcnew System::EventHandler(this, &Form1::statusBarMenu_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�鿴����HToolStripMenuItem, 
				this->����ElementaryCodeEditorToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->����ToolStripMenuItem->Text = L"����(H)";
			// 
			// �鿴����HToolStripMenuItem
			// 
			this->�鿴����HToolStripMenuItem->Name = L"�鿴����HToolStripMenuItem";
			this->�鿴����HToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->�鿴����HToolStripMenuItem->Text = L"�鿴����(H)";
			// 
			// ����ElementaryCodeEditorToolStripMenuItem
			// 
			this->����ElementaryCodeEditorToolStripMenuItem->Name = L"����ElementaryCodeEditorToolStripMenuItem";
			this->����ElementaryCodeEditorToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->����ElementaryCodeEditorToolStripMenuItem->Text = L"���� Elementary Code Editor";
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
			this->textLength->Text = L"���� : ";
			// 
			// textLines
			// 
			this->textLines->Name = L"textLines";
			this->textLines->Size = System::Drawing::Size(42, 17);
			this->textLines->Text = L"���� : ";
			// 
			// textRow
			// 
			this->textRow->Name = L"textRow";
			this->textRow->Size = System::Drawing::Size(30, 17);
			this->textRow->Text = L"�� : ";
			// 
			// textColumn
			// 
			this->textColumn->Name = L"textColumn";
			this->textColumn->Size = System::Drawing::Size(30, 17);
			this->textColumn->Text = L"�� : ";
			// 
			// textCharset
			// 
			this->textCharset->Name = L"textCharset";
			this->textCharset->Size = System::Drawing::Size(42, 17);
			this->textCharset->Text = L"���� : ";
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
				 // �ȼ���ı����Ƿ��иĶ�
				 if (this->textAreaTb->Modified) {
					if (MessageBox::Show(L"�ļ������ѸĶ�,�Ƿ񱣴�?", L"�ļ��Ķ�����", MessageBoxButtons::OKCancel) ==
						System::Windows::Forms::DialogResult::OK) {
						this->fileSaveMenu_Click(sender, e);
					}
				 }

				 // �½�����
				 // �޸ı�Ϊfalse
				 this->textAreaTb->Modified = false;
				 // ��ʼ�� �ļ����� ���� tag��
				 this->textAreaTb->Tag = nullptr;
				 // ����ı�
				 this->textAreaTb->Clear();
			 }

private: System::Void fileOpenMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 // �ȼ���ı����Ƿ��иĶ�
			 
			 if (this->textAreaTb->Modified) {
				 if (MessageBox::Show(L"�ļ������ѸĶ�,�Ƿ񱣴�?", L"�ļ��Ķ�����", MessageBoxButtons::OKCancel) ==
					 System::Windows::Forms::DialogResult::OK) {
						 this->fileSaveMenu_Click(sender, e);
				 }
			 }

			 // ����ı�
			 this->textAreaTb->Clear();
			 // ����ModifiedΪδ�Ķ�
			 this->textAreaTb->Modified = false;

			 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			 openFileDialog->Filter = L"�ı��ĵ�(*.txt)|*.txt|�����ļ�(*.*)|*.*"; 	// �����ַ���

			 if (openFileDialog->ShowDialog() != 
				 System::Windows::Forms::DialogResult::OK)
				 return ;
			 // �����ļ���
			 this->textAreaTb->Tag = openFileDialog->FileName;
			 // ��ȡ�ı�
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
			 // ����Ƿ����½��ļ������Ѵ��ڵ��ļ�
			 // ��־: this->textAreaTb->Tag == nullptr

			 // �ļ�������
			 if (this->textAreaTb->Tag == nullptr || this->textAreaTb->Tag->ToString() == L"") {
				 this->fileSaveAsMenu_Click(sender, e);
				 return ;
			 }
			 
			 // �ļ��Ѵ���
			 FileInfo^ fileInfo = gcnew FileInfo(this->textAreaTb->Tag->ToString());
			 // FileMode::Truncate ȫ����д @TODO
			 FileStream^ stream = fileInfo->Open(FileMode::Truncate, FileAccess::Write);
			 StreamWriter^ writer = gcnew StreamWriter(stream, Encoding::Default);

			 for each (String^ lineText in this->textAreaTb->Lines) {
				 writer->WriteLine(lineText);
				 // ˢ�»���
				 writer->Flush();
			 }

			 writer->Close();
			 stream->Close();
		 }
private: System::Void fileSaveAsMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 // �ļ����۴治����

			 // �����ˣ�modify = false
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

			 // ���õ�ǰ�ļ���
			 this->textAreaTb->Tag = saveFileDialog->FileName;
		 }
private: System::Void exitMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->textAreaTb->Modified)
			 {
				 if (MessageBox::Show(L"���ݱ䶯���Ƿ񱣴棿", L"�˳���ʾ", MessageBoxButtons::OKCancel) == 
					 System::Windows::Forms::DialogResult::OK) {
					 this->fileSaveMenu_Click(sender, e);
				 }
			 }

			 // �˳�
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

			 // ����parentForm
			 // searchBoxDialog->ParentForm = this;
			 // searchBoxDialog->MdiParent = this;
			 // MessageBox::Show(searchBoxDialog->ParentForm->ToString());
			 
			 // �����ڵ�ǰ����
			 searchBoxDialog->Owner = this;

			 // ��ֵ���������ڴ��� SearchBox ����
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
				// δ��״̬��:
				 // 1. �ر� ״̬��
				 this->ECEStatusBar->Visible = false;
				 // 2. �ر� Timer
				 this->ECEStatusBarTimer->Enabled = false;
				 return ;
			 }

			 // 1. ��״̬��
			 this->ECEStatusBar->Visible = true;
			 // 2. �򿪼�ʱ��
			 this->ECEStatusBarTimer->Enabled = true;
		 }
private: System::Void ECEStatusBarTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int totalLine = textAreaTb->GetLineFromCharIndex(
					textAreaTb->Text->Length); // ������
			 int index = textAreaTb->GetFirstCharIndexOfCurrentLine(); // ÿ�е�һ���ַ�����
			 int line = textAreaTb->GetLineFromCharIndex(index) + 1; // �к�
			 int column = textAreaTb->SelectionStart - index + 1; // �к�

			 this->textLength->Text = L"���� : " + this->textAreaTb->Text->Length.ToString();
			 this->textLines->Text = L"���� : " + totalLine.ToString();
			 this->textRow->Text = L"�� : " + line.ToString();
			 this->textColumn->Text = L"�� : " + column.ToString();

			 // ���� @TODO
			 // this->textCharset->Text = L"���� : " + this->textAreaTb->

			 // �Զ�����@TODO
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

