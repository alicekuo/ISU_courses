#pragma once
#include "MSForm.h"
#include "dip_proc.h"

namespace MDIP_DIP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Form1 ���K�n
	///
	/// ĵ�i: �p�G�z�ܧ�o�����O���W�١A�N�����ܧ�P�o�����O�Ҩ̾ڤ��Ҧ� .resx �ɮ����p��
	///          Managed �귽�sĶ���u�㪺 'Resource File Name' �ݩʡC
	///          �_�h�A�o�ǳ]�p�u��
	///          �N�L�k�P�o�Ӫ�����p����a�y�t�Ƹ귽
	///          ���T���ʡC
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
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
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  oFileDlg;
	private: System::Windows::Forms::SaveFileDialog^  sFileDlg;
	internal: System::Windows::Forms::StatusStrip^  stStrip;
	private:
	internal: System::Windows::Forms::ToolStripStatusLabel^  stStripLabel;
	private: System::Windows::Forms::ToolStripMenuItem^  ipToolStripMenuItem;
	internal:

	internal:

	internal:
	private: System::Windows::Forms::ToolStripMenuItem^  rGBtoGrayToolStripMenuItem;
	internal: Bitmap^ NpBitmap;
	internal: int w, h;
	private: System::Windows::Forms::ToolStripMenuItem^  rToolStripMenuItem;
	internal:
	private: System::Windows::Forms::ToolStripMenuItem^  gToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  brightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contrastToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rotateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  effectToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  negativeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bitplanesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quantizationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �G��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  filterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  smallToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^	 bigToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���uToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ܫGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ܷtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �t�s�s��SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���}XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �|��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �K��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �Q����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �T�Q�G��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���Q�|��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �@�ʤG�Q�K��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �V�k����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �V������ToolStripMenuItem;





		/*private:
		   List<MSForm> childlist = new List<MSForm>();*/

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�o�Ӥ�k�����e�C
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�t�s�s��SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���}XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->rGBtoGrayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ܫGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ܷtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contrastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->scaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->smallToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bigToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rotateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�V�k����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->effectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->negativeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bitplanesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quantizationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�G��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�|��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�K��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Q����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�T�Q�G��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���Q�|��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�@�ʤG�Q�K��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���uToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oFileDlg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sFileDlg = (gcnew System::Windows::Forms::SaveFileDialog());
			this->stStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->stStripLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->�V������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->stStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fileToolStripMenuItem,
					this->ipToolStripMenuItem, this->adjustToolStripMenuItem, this->effectToolStripMenuItem, this->filterToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(381, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->�t�s�s��SToolStripMenuItem, this->���}XToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->fileToolStripMenuItem->Text = L"�ɮ�(&F)";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->openToolStripMenuItem->Text = L"�}������(&O)";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// �t�s�s��SToolStripMenuItem
			// 
			this->�t�s�s��SToolStripMenuItem->Name = L"�t�s�s��SToolStripMenuItem";
			this->�t�s�s��SToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->�t�s�s��SToolStripMenuItem->Text = L"�t�s�s��(&S)";
			// 
			// ���}XToolStripMenuItem
			// 
			this->���}XToolStripMenuItem->Name = L"���}XToolStripMenuItem";
			this->���}XToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->���}XToolStripMenuItem->Text = L"���}(&X)";
			// 
			// ipToolStripMenuItem
			// 
			this->ipToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->rToolStripMenuItem,
					this->gToolStripMenuItem, this->bToolStripMenuItem, this->toolStripSeparator1, this->rGBtoGrayToolStripMenuItem
			});
			this->ipToolStripMenuItem->Name = L"ipToolStripMenuItem";
			this->ipToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ipToolStripMenuItem->Text = L"�⪩(&C)";
			// 
			// rToolStripMenuItem
			// 
			this->rToolStripMenuItem->Name = L"rToolStripMenuItem";
			this->rToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->rToolStripMenuItem->Text = L"����";
			// 
			// gToolStripMenuItem
			// 
			this->gToolStripMenuItem->Name = L"gToolStripMenuItem";
			this->gToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->gToolStripMenuItem->Text = L"���";
			// 
			// bToolStripMenuItem
			// 
			this->bToolStripMenuItem->Name = L"bToolStripMenuItem";
			this->bToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->bToolStripMenuItem->Text = L"�Ť�";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(107, 6);
			// 
			// rGBtoGrayToolStripMenuItem
			// 
			this->rGBtoGrayToolStripMenuItem->Name = L"rGBtoGrayToolStripMenuItem";
			this->rGBtoGrayToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->rGBtoGrayToolStripMenuItem->Text = L"�Ƕ���";
			this->rGBtoGrayToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::rGBtoGrayToolStripMenuItem_Click);
			// 
			// adjustToolStripMenuItem
			// 
			this->adjustToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->brightToolStripMenuItem,
					this->contrastToolStripMenuItem, this->toolStripSeparator2, this->scaleToolStripMenuItem, this->rotateToolStripMenuItem
			});
			this->adjustToolStripMenuItem->Name = L"adjustToolStripMenuItem";
			this->adjustToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->adjustToolStripMenuItem->Text = L"�վ�(&R)";
			// 
			// brightToolStripMenuItem
			// 
			this->brightToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�ܫGToolStripMenuItem,
					this->�ܷtToolStripMenuItem
			});
			this->brightToolStripMenuItem->Name = L"brightToolStripMenuItem";
			this->brightToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->brightToolStripMenuItem->Text = L"�G��";
			// 
			// �ܫGToolStripMenuItem
			// 
			this->�ܫGToolStripMenuItem->Name = L"�ܫGToolStripMenuItem";
			this->�ܫGToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->�ܫGToolStripMenuItem->Text = L"�ܫG";
			this->�ܫGToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ܫGToolStripMenuItem_Click);
			// 
			// �ܷtToolStripMenuItem
			// 
			this->�ܷtToolStripMenuItem->Name = L"�ܷtToolStripMenuItem";
			this->�ܷtToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->�ܷtToolStripMenuItem->Text = L"�ܷt";
			this->�ܷtToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ܷtToolStripMenuItem_Click);
			// 
			// contrastToolStripMenuItem
			// 
			this->contrastToolStripMenuItem->Name = L"contrastToolStripMenuItem";
			this->contrastToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->contrastToolStripMenuItem->Text = L"���";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(149, 6);
			// 
			// scaleToolStripMenuItem
			// 
			this->scaleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->smallToolStripMenuItem,
					this->bigToolStripMenuItem
			});
			this->scaleToolStripMenuItem->Name = L"scaleToolStripMenuItem";
			this->scaleToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->scaleToolStripMenuItem->Text = L"�Y��v��";
			// 
			// smallToolStripMenuItem
			// 
			this->smallToolStripMenuItem->Name = L"smallToolStripMenuItem";
			this->smallToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->smallToolStripMenuItem->Text = L"�Y�p";
			// 
			// bigToolStripMenuItem
			// 
			this->bigToolStripMenuItem->Name = L"bigToolStripMenuItem";
			this->bigToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->bigToolStripMenuItem->Text = L"��j";
			// 
			// rotateToolStripMenuItem
			// 
			this->rotateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�V�k����ToolStripMenuItem,
					this->�V������ToolStripMenuItem
			});
			this->rotateToolStripMenuItem->Name = L"rotateToolStripMenuItem";
			this->rotateToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->rotateToolStripMenuItem->Text = L"����";
			// 
			// �V�k����ToolStripMenuItem
			// 
			this->�V�k����ToolStripMenuItem->Name = L"�V�k����ToolStripMenuItem";
			this->�V�k����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�V�k����ToolStripMenuItem->Text = L"�V�k����";
			this->�V�k����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�V�k����ToolStripMenuItem_Click);
			// 
			// effectToolStripMenuItem
			// 
			this->effectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->negativeToolStripMenuItem,
					this->bitplanesToolStripMenuItem, this->quantizationToolStripMenuItem, this->���uToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->effectToolStripMenuItem->Name = L"effectToolStripMenuItem";
			this->effectToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->effectToolStripMenuItem->Text = L"�ĪG(&I)";
			// 
			// negativeToolStripMenuItem
			// 
			this->negativeToolStripMenuItem->Name = L"negativeToolStripMenuItem";
			this->negativeToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->negativeToolStripMenuItem->Text = L"�t��";
			this->negativeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::negativeToolStripMenuItem_Click);
			// 
			// bitplanesToolStripMenuItem
			// 
			this->bitplanesToolStripMenuItem->Name = L"bitplanesToolStripMenuItem";
			this->bitplanesToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->bitplanesToolStripMenuItem->Text = L"�줸����";
			// 
			// quantizationToolStripMenuItem
			// 
			this->quantizationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->�G��ToolStripMenuItem,
					this->�|��ToolStripMenuItem, this->�K��ToolStripMenuItem, this->�Q����ToolStripMenuItem, this->�T�Q�G��ToolStripMenuItem, this->���Q�|��ToolStripMenuItem,
					this->�@�ʤG�Q�K��ToolStripMenuItem
			});
			this->quantizationToolStripMenuItem->Name = L"quantizationToolStripMenuItem";
			this->quantizationToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->quantizationToolStripMenuItem->Text = L"�q��";
			// 
			// �G��ToolStripMenuItem
			// 
			this->�G��ToolStripMenuItem->Name = L"�G��ToolStripMenuItem";
			this->�G��ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->�G��ToolStripMenuItem->Text = L"2��";
			this->�G��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�G��ToolStripMenuItem_Click);
			// 
			// �|��ToolStripMenuItem
			// 
			this->�|��ToolStripMenuItem->Name = L"�|��ToolStripMenuItem";
			this->�|��ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->�|��ToolStripMenuItem->Text = L"4��";
			this->�|��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�|��ToolStripMenuItem_Click);
			// 
			// �K��ToolStripMenuItem
			// 
			this->�K��ToolStripMenuItem->Name = L"�K��ToolStripMenuItem";
			this->�K��ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->�K��ToolStripMenuItem->Text = L"8��";
			this->�K��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�K��ToolStripMenuItem_Click);
			// 
			// �Q����ToolStripMenuItem
			// 
			this->�Q����ToolStripMenuItem->Name = L"�Q����ToolStripMenuItem";
			this->�Q����ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->�Q����ToolStripMenuItem->Text = L"16��";
			this->�Q����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�Q����ToolStripMenuItem_Click);
			// 
			// �T�Q�G��ToolStripMenuItem
			// 
			this->�T�Q�G��ToolStripMenuItem->Name = L"�T�Q�G��ToolStripMenuItem";
			this->�T�Q�G��ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->�T�Q�G��ToolStripMenuItem->Text = L"32��";
			this->�T�Q�G��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�T�Q�G��ToolStripMenuItem_Click);
			// 
			// ���Q�|��ToolStripMenuItem
			// 
			this->���Q�|��ToolStripMenuItem->Name = L"���Q�|��ToolStripMenuItem";
			this->���Q�|��ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->���Q�|��ToolStripMenuItem->Text = L"64��";
			this->���Q�|��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::���Q�|��ToolStripMenuItem_Click);
			// 
			// �@�ʤG�Q�K��ToolStripMenuItem
			// 
			this->�@�ʤG�Q�K��ToolStripMenuItem->Name = L"�@�ʤG�Q�K��ToolStripMenuItem";
			this->�@�ʤG�Q�K��ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->�@�ʤG�Q�K��ToolStripMenuItem->Text = L"128��";
			this->�@�ʤG�Q�K��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�@�ʤG�Q�K��ToolStripMenuItem_Click);
			// 
			// ���uToolStripMenuItem
			// 
			this->���uToolStripMenuItem->Name = L"���uToolStripMenuItem";
			this->���uToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->���uToolStripMenuItem->Text = L"���u";
			this->���uToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::���uToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// filterToolStripMenuItem
			// 
			this->filterToolStripMenuItem->Name = L"filterToolStripMenuItem";
			this->filterToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->filterToolStripMenuItem->Text = L"�o�i��(&E)";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->aboutToolStripMenuItem->Text = L"����";
			// 
			// oFileDlg
			// 
			this->oFileDlg->FileName = L"openFileDialog1";
			// 
			// sFileDlg
			// 
			this->sFileDlg->FileName = L"saveFileDialog1";
			// 
			// stStrip
			// 
			this->stStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->stStripLabel });
			this->stStrip->Location = System::Drawing::Point(0, 312);
			this->stStrip->Name = L"stStrip";
			this->stStrip->Size = System::Drawing::Size(381, 22);
			this->stStrip->TabIndex = 2;
			this->stStrip->Text = L"statusStrip1";
			// 
			// stStripLabel
			// 
			this->stStripLabel->Name = L"stStripLabel";
			this->stStripLabel->Size = System::Drawing::Size(73, 17);
			this->stStripLabel->Text = L"stStripLabel";
			// 
			// �V������ToolStripMenuItem
			// 
			this->�V������ToolStripMenuItem->Name = L"�V������ToolStripMenuItem";
			this->�V������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�V������ToolStripMenuItem->Text = L"�V������";
			this->�V������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�V������ToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 334);
			this->Controls->Add(this->stStrip);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"�Ʀ�v���B�z";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->stStrip->ResumeLayout(false);
			this->stStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		this->IsMdiContainer = true;
		this->WindowState = FormWindowState::Maximized;
		this->stStripLabel->Text = "";
	}

	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		// Declare the child form as a new one.  
		//OpenFileDialog^ oFD;
		//Bitmap^ pBitmap;
		oFileDlg->CheckFileExists = true;
		oFileDlg->CheckPathExists = true;
		oFileDlg->Title = "�}������ - �Ʀ�v���B�z";
		oFileDlg->ValidateNames = true;
		oFileDlg->Filter = "BMP files (*.bmp)|*.bmp";
		oFileDlg->FileName = "";
		if (oFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MSForm^ childForm = gcnew MSForm();
			childForm->MdiParent = this;
			childForm->pf1 = stStripLabel;
			NpBitmap = bmp_read(oFileDlg);
			childForm->pBitmap = NpBitmap;
			w = NpBitmap->Width;
			h = NpBitmap->Height;
			childForm->Show();
		}
	}
	
/*	private: System::Void �t�s�s��SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		// Declare the child form as a new one.  
		//SaveFileDialog^ sFD;
		//Bitmap^ pBitmap;
		sFileDlg->CheckFileExists = true;
		sFileDlg->CheckPathExists = true;
		sFileDlg->Title = "�t�s�s�� - �Ʀ�v���B�z";
		sFileDlg->ValidateNames = true;
		sFileDlg->Filter = "*.bmp";
		sFileDlg->FileName = "";
		if (sFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MSForm^ childForm = gcnew MSForm();
			childForm->MdiParent = this;
			childForm->pf1 = stStripLabel;
			NpBitmap = bmp_save(sFileDlg);
			childForm->pBitmap = NpBitmap;
			w = NpBitmap->Width;
			h = NpBitmap->Height;
			childForm->Show();
		}
	}*/



	private: Bitmap^ bmp_read(OpenFileDialog^ oFileDlg) {
		String^ fileloc = oFileDlg->FileName;
		Bitmap^ pBitmap0 = gcnew Bitmap(fileloc);
		this->Text = oFileDlg->SafeFileName;
		return pBitmap0;
	}
	private: System::Void rGBtoGrayToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		int *f, *g;

		for each (MSForm^ cF in MdiChildren)
		{
			if (cF->Focused)
			{
				f = bmp2_1array(cF->pBitmap);
				g = new int[w*h];
				encode(f, w, h, g);
				NpBitmap = array2bmp(g, w, h);
				break;
			}
		}

		MSForm^ childForm = gcnew MSForm();
		childForm->MdiParent = this;
		childForm->pf1 = stStripLabel;
		childForm->pBitmap = NpBitmap;
		childForm->Text = "�Ƕ���";
		childForm->Show();
	}

	private:int* bmp2_1array(Bitmap^ bmp)
	{
		int w = bmp->Width, h = bmp->Height;
		int *imgData = new int[w*h];
		BitmapData^ bmpData =
			bmp->LockBits(Rectangle(0, 0, w, h), ImageLockMode::ReadOnly, PixelFormat::Format24bppRgb);
		//int ByteOfSkip = bmpData->Stride - bmpData->Width * 3;

		int stride = bmpData->Stride;
		array<unsigned char> ^rawData = gcnew array<unsigned char>(stride * h);
		System::Runtime::InteropServices::Marshal::Copy(bmpData->Scan0, rawData, 0, rawData->Length);

		int size = w * h;

		for (int i = 0; i < size; i++)
		{
			int loc = (bmpData->Stride * (i / w)) + ((i % w) * 3);
			int red = rawData[loc + 2];
			int green = rawData[loc + 1];
			int blue = rawData[loc];
			imgData[i] = (int)(0.299 * red + 0.587 * green + 0.114 * blue);
		}

		bmp->UnlockBits(bmpData);
		return imgData;
	}
			

	private:Bitmap^ array2bmp(int *g, int w, int h)
	{
		Bitmap^ bmp = gcnew Bitmap(w, h, PixelFormat::Format24bppRgb);

		BitmapData^ bmpData =
			bmp->LockBits(Rectangle(0, 0, w, h), ImageLockMode::WriteOnly, PixelFormat::Format24bppRgb);

		int stride = bmpData->Stride;
		array<Byte> ^rawData = gcnew array<Byte>(stride * h);

		int size = w * h;

		for (int i = 0; i < size; i++)
		{
			int loc = (bmpData->Stride * (i / w)) + ((i % w) * 3);
			rawData[loc + 2] = Convert::ToByte(g[i]);
			rawData[loc + 1] = Convert::ToByte(g[i]);
			rawData[loc] = Convert::ToByte(g[i]);
		}

		System::Runtime::InteropServices::Marshal::Copy(rawData, 0, bmpData->Scan0, rawData->Length);
		bmp->UnlockBits(bmpData);
		return bmp;
	}
	

	private: System::Void negativeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		int *f, *g;

		for each (MSForm^ cF in MdiChildren)
		{
			if (cF->Focused)
			{
				f = bmp2_1array(cF->pBitmap);
				g = new int[w*h];
				negative(f, w, h, g);
				NpBitmap = array2bmp(g, w, h);
				break;
			}
		}
		MSForm^ childForm = gcnew MSForm();
		childForm->MdiParent = this;
		childForm->pf1 = stStripLabel;
		childForm->pBitmap = NpBitmap;
		childForm->Text = "�t��";
		childForm->Show();
}





private: System::Void ���uToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			Curve(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "���u";
	childForm->Show();

	/*
	Curve_Adjustment ^ f2 = gcnew Curve_Adjustment();
	f2->Show();
	*/
}

private: System::Void �ܫGToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			brightup(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "�G�׼W�[";
	childForm->Show();
}
private: System::Void �ܷtToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			brightdown(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "�G�׭��C";
	childForm->Show();
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			HistogramEqualization(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "����ϧ���";
	childForm->Show();
}

private: System::Void �G��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			twocolor(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "2��";
	childForm->Show();
}

private: System::Void �|��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			fourcolor(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "4��";
	childForm->Show();

}
private: System::Void �K��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			eightcolor(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "8��";
	childForm->Show();
}
private: System::Void �Q����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			sixteencolor(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "16��";
	childForm->Show();
}
private: System::Void �T�Q�G��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			threetwocolor(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "32��";
	childForm->Show();
}
private: System::Void ���Q�|��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			sixfourcolor(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "64��";
	childForm->Show();
}

private: System::Void �@�ʤG�Q�K��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			onetwoeightcolor(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "128��";
	childForm->Show();
}
private: System::Void �V�k����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			Rrotation(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "�V�k����";
	childForm->Show();
}
private: System::Void �V������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2_1array(cF->pBitmap);
			g = new int[w*h];
			//Lrotation(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "�V������";
	childForm->Show();
}
};
}