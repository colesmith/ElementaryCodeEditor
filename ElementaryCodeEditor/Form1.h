#pragma once

namespace ElementaryCodeEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ToolStripMenuItem^  �½�NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ΪToolStripMenuItem;
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
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->�༭EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʽOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ΪToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ҳ������UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ճ��PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ɾ��LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������һ��NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�滻ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ת��GToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ȫѡAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʱ������DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->���л���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->״̬��SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ElementaryCodeEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->�ļ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->�½�NToolStripMenuItem, 
				this->��OToolStripMenuItem, this->����SToolStripMenuItem, this->���ΪToolStripMenuItem, this->toolStripSeparator1, this->ҳ������UToolStripMenuItem, 
				this->��ӡPToolStripMenuItem, this->toolStripSeparator2, this->�˳�XToolStripMenuItem});
			this->�ļ�ToolStripMenuItem->Name = L"�ļ�ToolStripMenuItem";
			this->�ļ�ToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->�ļ�ToolStripMenuItem->Text = L"�ļ�(F)";
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
			// ��ʽOToolStripMenuItem
			// 
			this->��ʽOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->���л���ToolStripMenuItem, 
				this->����FToolStripMenuItem});
			this->��ʽOToolStripMenuItem->Name = L"��ʽOToolStripMenuItem";
			this->��ʽOToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->��ʽOToolStripMenuItem->Text = L"��ʽ(O)";
			// 
			// �鿴VToolStripMenuItem
			// 
			this->�鿴VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->״̬��SToolStripMenuItem});
			this->�鿴VToolStripMenuItem->Name = L"�鿴VToolStripMenuItem";
			this->�鿴VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->�鿴VToolStripMenuItem->Text = L"�鿴(V)";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�鿴����HToolStripMenuItem, 
				this->����ElementaryCodeEditorToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->����ToolStripMenuItem->Text = L"����(H)";
			// 
			// �½�NToolStripMenuItem
			// 
			this->�½�NToolStripMenuItem->Name = L"�½�NToolStripMenuItem";
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�½�NToolStripMenuItem->Text = L"�½�(N)";
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��OToolStripMenuItem->Text = L"��(O)";
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����SToolStripMenuItem->Text = L"����(S)";
			// 
			// ���ΪToolStripMenuItem
			// 
			this->���ΪToolStripMenuItem->Name = L"���ΪToolStripMenuItem";
			this->���ΪToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���ΪToolStripMenuItem->Text = L"���Ϊ(A)";
			// 
			// ҳ������UToolStripMenuItem
			// 
			this->ҳ������UToolStripMenuItem->Name = L"ҳ������UToolStripMenuItem";
			this->ҳ������UToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ҳ������UToolStripMenuItem->Text = L"ҳ������(U)";
			// 
			// ��ӡPToolStripMenuItem
			// 
			this->��ӡPToolStripMenuItem->Name = L"��ӡPToolStripMenuItem";
			this->��ӡPToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��ӡPToolStripMenuItem->Text = L"��ӡ(P)";
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�˳�XToolStripMenuItem->Text = L"�˳�(X)";
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
			// ���л���ToolStripMenuItem
			// 
			this->���л���ToolStripMenuItem->Name = L"���л���ToolStripMenuItem";
			this->���л���ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���л���ToolStripMenuItem->Text = L"���л���";
			// 
			// ����FToolStripMenuItem
			// 
			this->����FToolStripMenuItem->Name = L"����FToolStripMenuItem";
			this->����FToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����FToolStripMenuItem->Text = L"����(F)";
			// 
			// ״̬��SToolStripMenuItem
			// 
			this->״̬��SToolStripMenuItem->Name = L"״̬��SToolStripMenuItem";
			this->״̬��SToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->״̬��SToolStripMenuItem->Text = L"״̬��(S)";
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

