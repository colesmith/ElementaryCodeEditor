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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
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
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �༭EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ճ��PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ɾ��LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  ����FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������һ��NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �滻ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ת��GToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  ȫѡAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʱ������DToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���л���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ״̬��SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ElementaryCodeEditorToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textAreaTb;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileNewMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileOpenMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveAsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ҳ������UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ճ��PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ɾ��LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������һ��NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�滻ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ת��GToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ȫѡAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʱ������DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʽOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���л���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->״̬��SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ElementaryCodeEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textAreaTb = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->�ļ�ToolStripMenuItem, 
				this->�༭EToolStripMenuItem, this->��ʽOToolStripMenuItem, this->�鿴VToolStripMenuItem, this->����ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(441, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�ToolStripMenuItem
			// 
			this->�ļ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->fileNewMenu, 
				this->fileOpenMenu, this->fileSaveMenu, this->fileSaveAsMenu, this->toolStripSeparator1, this->ҳ������UToolStripMenuItem, this->��ӡPToolStripMenuItem, 
				this->toolStripSeparator2, this->�˳�XToolStripMenuItem});
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
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->�˳�XToolStripMenuItem->Text = L"�˳�(X)";
			// 
			// �༭EToolStripMenuItem
			// 
			this->�༭EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {this->����UToolStripMenuItem, 
				this->����TToolStripMenuItem, this->����CToolStripMenuItem, this->ճ��PToolStripMenuItem, this->ɾ��LToolStripMenuItem, this->toolStripSeparator3, 
				this->����FToolStripMenuItem, this->������һ��NToolStripMenuItem, this->�滻ToolStripMenuItem, this->ת��GToolStripMenuItem, this->toolStripSeparator4, 
				this->ȫѡAToolStripMenuItem, this->ʱ������DToolStripMenuItem});
			this->�༭EToolStripMenuItem->Name = L"�༭EToolStripMenuItem";
			this->�༭EToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->�༭EToolStripMenuItem->Text = L"�༭(E)";
			// 
			// ����UToolStripMenuItem
			// 
			this->����UToolStripMenuItem->Name = L"����UToolStripMenuItem";
			this->����UToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����UToolStripMenuItem->Text = L"����(U)";
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����TToolStripMenuItem->Text = L"����(T)";
			// 
			// ����CToolStripMenuItem
			// 
			this->����CToolStripMenuItem->Name = L"����CToolStripMenuItem";
			this->����CToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����CToolStripMenuItem->Text = L"����(C)";
			// 
			// ճ��PToolStripMenuItem
			// 
			this->ճ��PToolStripMenuItem->Name = L"ճ��PToolStripMenuItem";
			this->ճ��PToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ճ��PToolStripMenuItem->Text = L"ճ��(P)";
			// 
			// ɾ��LToolStripMenuItem
			// 
			this->ɾ��LToolStripMenuItem->Name = L"ɾ��LToolStripMenuItem";
			this->ɾ��LToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ɾ��LToolStripMenuItem->Text = L"ɾ��(L)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(149, 6);
			// 
			// ����FToolStripMenuItem
			// 
			this->����FToolStripMenuItem->Name = L"����FToolStripMenuItem";
			this->����FToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����FToolStripMenuItem->Text = L"����(F)";
			// 
			// ������һ��NToolStripMenuItem
			// 
			this->������һ��NToolStripMenuItem->Name = L"������һ��NToolStripMenuItem";
			this->������һ��NToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->������һ��NToolStripMenuItem->Text = L"������һ��(N)";
			// 
			// �滻ToolStripMenuItem
			// 
			this->�滻ToolStripMenuItem->Name = L"�滻ToolStripMenuItem";
			this->�滻ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�滻ToolStripMenuItem->Text = L"�滻(R)";
			// 
			// ת��GToolStripMenuItem
			// 
			this->ת��GToolStripMenuItem->Name = L"ת��GToolStripMenuItem";
			this->ת��GToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ת��GToolStripMenuItem->Text = L"ת��(G)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(149, 6);
			// 
			// ȫѡAToolStripMenuItem
			// 
			this->ȫѡAToolStripMenuItem->Name = L"ȫѡAToolStripMenuItem";
			this->ȫѡAToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ȫѡAToolStripMenuItem->Text = L"ȫѡ(A)";
			// 
			// ʱ������DToolStripMenuItem
			// 
			this->ʱ������DToolStripMenuItem->Name = L"ʱ������DToolStripMenuItem";
			this->ʱ������DToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ʱ������DToolStripMenuItem->Text = L"ʱ��/����(D)";
			// 
			// ��ʽOToolStripMenuItem
			// 
			this->��ʽOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->���л���ToolStripMenuItem, 
				this->����FToolStripMenuItem});
			this->��ʽOToolStripMenuItem->Name = L"��ʽOToolStripMenuItem";
			this->��ʽOToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->��ʽOToolStripMenuItem->Text = L"��ʽ(O)";
			// 
			// ���л���ToolStripMenuItem
			// 
			this->���л���ToolStripMenuItem->Name = L"���л���ToolStripMenuItem";
			this->���л���ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->���л���ToolStripMenuItem->Text = L"���л���";
			// 
			// ����FToolStripMenuItem
			// 
			this->����FToolStripMenuItem->Name = L"����FToolStripMenuItem";
			this->����FToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->����FToolStripMenuItem->Text = L"����(F)";
			// 
			// �鿴VToolStripMenuItem
			// 
			this->�鿴VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->״̬��SToolStripMenuItem});
			this->�鿴VToolStripMenuItem->Name = L"�鿴VToolStripMenuItem";
			this->�鿴VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->�鿴VToolStripMenuItem->Text = L"�鿴(V)";
			// 
			// ״̬��SToolStripMenuItem
			// 
			this->״̬��SToolStripMenuItem->Name = L"״̬��SToolStripMenuItem";
			this->״̬��SToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->״̬��SToolStripMenuItem->Text = L"״̬��(S)";
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
			 if (this->textAreaTb->Tag == nullptr) {
				 this->fileSaveAsMenu_Click(sender, e);
				 return ;
			 }
			 
			 // �ļ��Ѵ���
			 FileInfo^ fileInfo = gcnew FileInfo(this->textAreaTb->Tag->ToString());
			 // FileMode::Truncate ȫ����д @TODO
			 FileStream^ stream = fileInfo->Open(FileMode::Truncate, FileAccess::Write);
			 StreamWriter^ writer = gcnew StreamWriter(stream, Encoding::Default);

			 for each (String^ lineText in this->textAreaTb->Lines)
				 writer->WriteLine(lineText);

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
};
}

