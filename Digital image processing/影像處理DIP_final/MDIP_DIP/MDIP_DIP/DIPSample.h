#pragma once
#include "MSForm.h"
#include "dip_proc.h"
#include "Bitplane.h"
#include "Brightness.h"
#include "Contrast.h"
#include "Histogram.h"
#include "Scaling.h"
#include "help.h"

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
	internal: System::Windows::Forms::ToolStripStatusLabel^  stStripLabel;
	private: System::Windows::Forms::ToolStripMenuItem^  ipToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rGBtoGrayToolStripMenuItem;
	internal: Bitmap^ NpBitmap;
	internal: int w, h;

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

	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �t�s�s��SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �|��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �K��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �Q����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �T�Q�G��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���Q�|��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �@�ʤG�Q�K��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �V�k����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �V������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����180��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����½��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����½��ToolStripMenuItem;

	private: Bitplane^ f2;
			 Brightness^ f3;
			 Contrast^ f4;
			 Histogram^ f5;
			 help^ f6;
			 Scaling^ Scale;

	private: System::Windows::Forms::ToolStripMenuItem^  �ഫ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����o�i��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����o�i��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��t�B�zToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobel�o�i��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  prewitt�o�i��ToolStripMenuItem;


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
			this->ipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBtoGrayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contrastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->scaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rotateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�V�k����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�V������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����180��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����½��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����½��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ഫ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����o�i��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����o�i��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��t�B�zToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobel�o�i��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prewitt�o�i��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oFileDlg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sFileDlg = (gcnew System::Windows::Forms::SaveFileDialog());
			this->stStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->stStripLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
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
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->�t�s�s��SToolStripMenuItem
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
			this->�t�s�s��SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�t�s�s��SToolStripMenuItem_Click);
			// 
			// ipToolStripMenuItem
			// 
			this->ipToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->rGBtoGrayToolStripMenuItem });
			this->ipToolStripMenuItem->Name = L"ipToolStripMenuItem";
			this->ipToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ipToolStripMenuItem->Text = L"�⪩(&C)";
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
			this->brightToolStripMenuItem->Name = L"brightToolStripMenuItem";
			this->brightToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->brightToolStripMenuItem->Text = L"�G��";
			this->brightToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::brightToolStripMenuItem_Click);
			// 
			// contrastToolStripMenuItem
			// 
			this->contrastToolStripMenuItem->Name = L"contrastToolStripMenuItem";
			this->contrastToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->contrastToolStripMenuItem->Text = L"���";
			this->contrastToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::contrastToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(119, 6);
			// 
			// scaleToolStripMenuItem
			// 
			this->scaleToolStripMenuItem->Name = L"scaleToolStripMenuItem";
			this->scaleToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->scaleToolStripMenuItem->Text = L"�Y��v��";
			this->scaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::scaleToolStripMenuItem_Click);
			// 
			// rotateToolStripMenuItem
			// 
			this->rotateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�V�k����ToolStripMenuItem,
					this->�V������ToolStripMenuItem, this->����180��ToolStripMenuItem, this->����½��ToolStripMenuItem, this->����½��ToolStripMenuItem
			});
			this->rotateToolStripMenuItem->Name = L"rotateToolStripMenuItem";
			this->rotateToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->rotateToolStripMenuItem->Text = L"����";
			// 
			// �V�k����ToolStripMenuItem
			// 
			this->�V�k����ToolStripMenuItem->Name = L"�V�k����ToolStripMenuItem";
			this->�V�k����ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->�V�k����ToolStripMenuItem->Text = L"�V�k����";
			this->�V�k����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�V�k����ToolStripMenuItem_Click);
			// 
			// �V������ToolStripMenuItem
			// 
			this->�V������ToolStripMenuItem->Name = L"�V������ToolStripMenuItem";
			this->�V������ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->�V������ToolStripMenuItem->Text = L"�V������";
			this->�V������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�V������ToolStripMenuItem_Click);
			// 
			// ����180��ToolStripMenuItem
			// 
			this->����180��ToolStripMenuItem->Name = L"����180��ToolStripMenuItem";
			this->����180��ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->����180��ToolStripMenuItem->Text = L"����180��";
			this->����180��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����180��ToolStripMenuItem_Click);
			// 
			// ����½��ToolStripMenuItem
			// 
			this->����½��ToolStripMenuItem->Name = L"����½��ToolStripMenuItem";
			this->����½��ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->����½��ToolStripMenuItem->Text = L"����½��";
			this->����½��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����½��ToolStripMenuItem_Click);
			// 
			// ����½��ToolStripMenuItem
			// 
			this->����½��ToolStripMenuItem->Name = L"����½��ToolStripMenuItem";
			this->����½��ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->����½��ToolStripMenuItem->Text = L"����½��";
			this->����½��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����½��ToolStripMenuItem_Click);
			// 
			// effectToolStripMenuItem
			// 
			this->effectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->negativeToolStripMenuItem,
					this->bitplanesToolStripMenuItem, this->quantizationToolStripMenuItem, this->�����ToolStripMenuItem
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
			this->bitplanesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bitplanesToolStripMenuItem_Click);
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
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->�ഫ���ToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// �ഫ���ToolStripMenuItem
			// 
			this->�ഫ���ToolStripMenuItem->Name = L"�ഫ���ToolStripMenuItem";
			this->�ഫ���ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->�ഫ���ToolStripMenuItem->Text = L"�ഫ���";
			this->�ഫ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ഫ���ToolStripMenuItem_Click);
			// 
			// filterToolStripMenuItem
			// 
			this->filterToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�����o�i��ToolStripMenuItem,
					this->�����o�i��ToolStripMenuItem, this->��t�B�zToolStripMenuItem, this->sobel�o�i��ToolStripMenuItem, this->prewitt�o�i��ToolStripMenuItem
			});
			this->filterToolStripMenuItem->Name = L"filterToolStripMenuItem";
			this->filterToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->filterToolStripMenuItem->Text = L"�o�i��(&E)";
			// 
			// �����o�i��ToolStripMenuItem
			// 
			this->�����o�i��ToolStripMenuItem->Name = L"�����o�i��ToolStripMenuItem";
			this->�����o�i��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�����o�i��ToolStripMenuItem->Text = L"�����o�i��";
			this->�����o�i��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����o�i��ToolStripMenuItem_Click_1);
			// 
			// �����o�i��ToolStripMenuItem
			// 
			this->�����o�i��ToolStripMenuItem->Name = L"�����o�i��ToolStripMenuItem";
			this->�����o�i��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�����o�i��ToolStripMenuItem->Text = L"�����o�i��";
			this->�����o�i��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����o�i��ToolStripMenuItem_Click_1);
			// 
			// ��t�B�zToolStripMenuItem
			// 
			this->��t�B�zToolStripMenuItem->Name = L"��t�B�zToolStripMenuItem";
			this->��t�B�zToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��t�B�zToolStripMenuItem->Text = L"�U��";
			this->��t�B�zToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��t�B�zToolStripMenuItem_Click);
			// 
			// sobel�o�i��ToolStripMenuItem
			// 
			this->sobel�o�i��ToolStripMenuItem->Name = L"sobel�o�i��ToolStripMenuItem";
			this->sobel�o�i��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sobel�o�i��ToolStripMenuItem->Text = L"Sobel�o�i��";
			this->sobel�o�i��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sobel�o�i��ToolStripMenuItem_Click);
			// 
			// prewitt�o�i��ToolStripMenuItem
			// 
			this->prewitt�o�i��ToolStripMenuItem->Name = L"prewitt�o�i��ToolStripMenuItem";
			this->prewitt�o�i��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->prewitt�o�i��ToolStripMenuItem->Text = L"Prewitt�o�i��";
			this->prewitt�o�i��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::prewitt�o�i��ToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->aboutToolStripMenuItem->Text = L"����";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
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
	
	private: System::Void �t�s�s��SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		sFileDlg->Title = "�t�s�s�� - �Ʀ�v���B�z";
		sFileDlg->Filter = "bmp files (*.bmp)|*.bmp";
		sFileDlg->FilterIndex = 1;
		sFileDlg->RestoreDirectory = true;
		sFileDlg->DefaultExt = "*.bmp";
		if (sFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MSForm^ childForm = gcnew MSForm();
			NpBitmap->Save(sFileDlg->FileName);
		}
	}

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
				f = bmp2array(cF->pBitmap);
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

	private:int* bmp2array(Bitmap^ bmp)
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
			imgData[i] = (int)(0.299 * red + 0.587 * green + 0.114 * blue + 0.5);
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
				f = bmp2array(cF->pBitmap);
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


private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
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
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			Lrotation(f, w, h, g);
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
private: System::Void ����180��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			Rotation_T(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "����180��";
	childForm->Show();
}
private: System::Void ����½��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			Rotation_Horizontal(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "����½��";
	childForm->Show();
}
private: System::Void ����½��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			Rotation_Vertical(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			break;
		}
	}

	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	childForm->pBitmap = NpBitmap;
	childForm->Text = "����½��";
	childForm->Show();
}
private: System::Void bitplanesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;
	int bit = 1;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			f2 = gcnew Bitplane(f);	
			g = new int[w*h];
			bitplane(f, w, h, g, bit);
			NpBitmap = array2bmp(g, w, h);

			f2->pictureBox1->Image = cF->pBitmap;	//
			f2->NpBitmap = array2bmp(g, w, h);	//
			f2->ShowDialog();	//
			bit = f2->bit;
			if (f2->IP == true)
			{
				bitplane(f, w, h, g, bit);
				NpBitmap = array2bmp(g, w, h);
				cF->pBitmap = NpBitmap;
				cF->pictureBox1->Image = NpBitmap;
				/*
				MSForm^ childForm = gcnew MSForm();
				childForm->MdiParent = this;
				childForm->pf1 = stStripLabel;
				childForm->pBitmap = NpBitmap;
				childForm->Show();
				*/
			}
			break;
		}
	}

	/*
	int *f, *g;
	int bit = 1;
	for each (MSForm^ cF in MdiChildren)
	{
	if (cF->Focused)
	{
	f = bmp2array(cF->pBitmap);
	g = new int[w*h];
	bitplane(f, w, h, g, bit);
	NpBitmap = array2bmp(g, w, h);
	break;
	}
	}
	Bitplane^ f3 = gcnew Bitplane(f);
	f3->MdiParent = this;
	f3->pictureBox1->Image = array2bmp(f, w, h);
	f3->NpBitmap = NpBitmap;
	f3->Show();
	MSForm^ childForm = gcnew MSForm();
	childForm->MdiParent = this;
	childForm->pf1 = stStripLabel;
	if (f3->Enabled ==  true)
	{
	while (f3->IP == true)
	{
	childForm->pBitmap = f3->NpBitmap;
	}

	}
	if (f3->Enabled==false){
	childForm->Show();
	}
	*/
}

private: System::Void contrastToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {////
	int *f, *g;
	int top = 1;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);

			f4 = gcnew Contrast();
			f4->f = f;	//

			g = new int[w*h];
			contrast(f, w, h, g, top);//
			NpBitmap = array2bmp(g, w, h);

			f4->pictureBox1->Image = cF->pBitmap;	//
			f4->NpBitmap = array2bmp(g, w, h);	//
			f4->ShowDialog();	//
			top = f4->top;
			if (f4->IP == true)
			{
				contrast(f, w, h, g, top);
				NpBitmap = array2bmp(g, w, h);
				cF->pBitmap = NpBitmap;
				cF->pictureBox1->Image = NpBitmap;
				/*
				MSForm^ childForm = gcnew MSForm();
				childForm->MdiParent = this;
				childForm->pf1 = stStripLabel;
				childForm->pBitmap = NpBitmap;
				childForm->Show();
				*/
			}
			break;
		}
	}
}

private: System::Void brightToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;
	int top = 1;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);

			f3 = gcnew Brightness();
			f3->f = f;	//

			g = new int[w*h];
			brightness(f, w, h, g, top);//
			NpBitmap = array2bmp(g, w, h);

			f3->pictureBox1->Image = cF->pBitmap;	//
			f3->NpBitmap = array2bmp(g, w, h);	//
			f3->ShowDialog();	//
			top = f3->top;
			if (f3->IP == true)
			{
				brightness(f, w, h, g, top);
				NpBitmap = array2bmp(g, w, h);
				cF->pBitmap = NpBitmap;
				cF->pictureBox1->Image = NpBitmap;
				/*
				MSForm^ childForm = gcnew MSForm();
				childForm->MdiParent = this;
				childForm->pf1 = stStripLabel;
				childForm->pBitmap = NpBitmap;
				childForm->Show();
				*/
			}
			break;
		}
	}
	
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	f6 = gcnew help();
	f6->ShowDialog();
}

private: System::Void �ഫ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g, *gh;
	int top = 1;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);

			f5 = gcnew Histogram();
			f5->f = f;	//

			g = new int[w*h];
			gh = new int[w*h];
			histogram(f, w, h, gh);
			contrast(f, w, h, g, top);//
			NpBitmap = array2bmp(g, w, h);

			f5->gh = gh;
			f5->pictureBox1->Image = cF->pBitmap;	//
			f5->pictureBox2->Image = cF->pBitmap;
			f5->pictureBox3->Image = array2bmp(gh, w, h);
			f5->NpBitmap = array2bmp(g, w, h);	//
			f5->ShowDialog();	//
			g = f5->g;

			if (f5->IP == true)
			{
				NpBitmap = array2bmp(g, w, h);
				cF->pBitmap = NpBitmap;
				cF->pictureBox1->Image = NpBitmap;
				/*
				MSForm^ childForm = gcnew MSForm();
				childForm->MdiParent = this;
				childForm->pf1 = stStripLabel;
				childForm->pBitmap = NpBitmap;
				childForm->Show();
				*/
			}
			break;
		}
	}
}
private: System::Void scaleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g, new_zise;
	float scale_Value;

	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			Scale = gcnew Scaling();
			Scale->ShowDialog();
			scale_Value = Scale->Scale_value;


			if (Scale->expand) {

				int gw = (int)(w*scale_Value);
				int gh = (int)(h*scale_Value);
				new_zise = gw * gh;
				g = new int[new_zise];

				Scale_Calculate(f, w, h, gw, gh, g);
				NpBitmap = array2bmp(g, gw, gh);
			}
			else {
				int gw = (int)(w / scale_Value);
				int gh = (int)(h / scale_Value);
				new_zise = gw * gh;
				g = new int[new_zise];

				Scale_Calculate(f, w, h, gw, gh, g);
				NpBitmap = array2bmp(g, gw, gh);
			}


			if (Scale->IP == true)
			{
				MSForm^ childForm = gcnew MSForm();
				childForm->MdiParent = this;
				childForm->pf1 = stStripLabel;
				childForm->pBitmap = NpBitmap;
				childForm->Text = "�Y��j�p";
				childForm->Show();
			}

			break;
		}
	}
}

private: System::Void �����o�i��ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;
	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			average(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			//cF->pBitmap = NpBitmap;
			//cF->pictureBox1->Image = NpBitmap;
			
			MSForm^ childForm = gcnew MSForm();
			childForm->MdiParent = this;
			childForm->pf1 = stStripLabel;
			childForm->pBitmap = NpBitmap;
			childForm->Text = "�����o�i��";
			childForm->Show();
			
		}
	}
}
private: System::Void �����o�i��ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;
	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			Gaussian(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			//cF->pBitmap = NpBitmap;
			//cF->pictureBox1->Image = NpBitmap;
			
			MSForm^ childForm = gcnew MSForm();
			childForm->MdiParent = this;
			childForm->pf1 = stStripLabel;
			childForm->pBitmap = NpBitmap;
			childForm->Text = "�����o�i��";
			childForm->Show();
			
		}
	}
}
private: System::Void ��t�B�zToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;
	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			edge_enhancement(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			//cF->pBitmap = NpBitmap;
			//cF->pictureBox1->Image = NpBitmap;
			
			MSForm^ childForm = gcnew MSForm();
			childForm->MdiParent = this;
			childForm->pf1 = stStripLabel;
			childForm->pBitmap = NpBitmap;
			childForm->Text = "�U��";
			childForm->Show();
			
		}
	}
}
private: System::Void sobel�o�i��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;
	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			Sobel(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			//cF->pBitmap = NpBitmap;
			//cF->pictureBox1->Image = NpBitmap;

			MSForm^ childForm = gcnew MSForm();
			childForm->MdiParent = this;
			childForm->pf1 = stStripLabel;
			childForm->pBitmap = NpBitmap;
			childForm->Text = "Sobel�o�i��";
			childForm->Show();

		}
	}
}
private: System::Void prewitt�o�i��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	int *f, *g;
	for each (MSForm^ cF in MdiChildren)
	{
		if (cF->Focused)
		{
			f = bmp2array(cF->pBitmap);
			g = new int[w*h];
			prewitt(f, w, h, g);
			NpBitmap = array2bmp(g, w, h);
			//cF->pBitmap = NpBitmap;
			//cF->pictureBox1->Image = NpBitmap;

			MSForm^ childForm = gcnew MSForm();
			childForm->MdiParent = this;
			childForm->pf1 = stStripLabel;
			childForm->pBitmap = NpBitmap;
			childForm->Text = "Prewitt�o�i��";
			childForm->Show();

		}
	}
}
};
}