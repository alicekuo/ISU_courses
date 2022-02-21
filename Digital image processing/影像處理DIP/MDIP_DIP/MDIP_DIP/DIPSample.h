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
	/// Form1 的摘要
	///
	/// 警告: 如果您變更這個類別的名稱，就必須變更與這個類別所依據之所有 .resx 檔案關聯的
	///          Managed 資源編譯器工具的 'Resource File Name' 屬性。
	///          否則，這些設計工具
	///          將無法與這個表單關聯的當地語系化資源
	///          正確互動。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
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
	private: System::Windows::Forms::ToolStripMenuItem^  二色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  filterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  smallToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^	 bigToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  曲線ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  變亮ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  變暗ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  直方圖ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  均化ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存新檔SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  離開XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  四色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  八色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  十六色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  三十二色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  六十四色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  一百二十八色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  向右旋轉ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  向左旋轉ToolStripMenuItem;





		/*private:
		   List<MSForm> childlist = new List<MSForm>();*/

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改這個方法的內容。
		///
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->另存新檔SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->離開XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->rGBtoGrayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->變亮ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->變暗ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contrastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->scaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->smallToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bigToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rotateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->向右旋轉ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->effectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->negativeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bitplanesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quantizationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->二色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->四色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->八色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->十六色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->三十二色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->六十四色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->一百二十八色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->曲線ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->直方圖ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->均化ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oFileDlg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sFileDlg = (gcnew System::Windows::Forms::SaveFileDialog());
			this->stStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->stStripLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->向左旋轉ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->另存新檔SToolStripMenuItem, this->離開XToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->fileToolStripMenuItem->Text = L"檔案(&F)";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->openToolStripMenuItem->Text = L"開啟舊檔(&O)";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// 另存新檔SToolStripMenuItem
			// 
			this->另存新檔SToolStripMenuItem->Name = L"另存新檔SToolStripMenuItem";
			this->另存新檔SToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->另存新檔SToolStripMenuItem->Text = L"另存新檔(&S)";
			// 
			// 離開XToolStripMenuItem
			// 
			this->離開XToolStripMenuItem->Name = L"離開XToolStripMenuItem";
			this->離開XToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->離開XToolStripMenuItem->Text = L"離開(&X)";
			// 
			// ipToolStripMenuItem
			// 
			this->ipToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->rToolStripMenuItem,
					this->gToolStripMenuItem, this->bToolStripMenuItem, this->toolStripSeparator1, this->rGBtoGrayToolStripMenuItem
			});
			this->ipToolStripMenuItem->Name = L"ipToolStripMenuItem";
			this->ipToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ipToolStripMenuItem->Text = L"色版(&C)";
			// 
			// rToolStripMenuItem
			// 
			this->rToolStripMenuItem->Name = L"rToolStripMenuItem";
			this->rToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->rToolStripMenuItem->Text = L"紅化";
			// 
			// gToolStripMenuItem
			// 
			this->gToolStripMenuItem->Name = L"gToolStripMenuItem";
			this->gToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->gToolStripMenuItem->Text = L"綠化";
			// 
			// bToolStripMenuItem
			// 
			this->bToolStripMenuItem->Name = L"bToolStripMenuItem";
			this->bToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->bToolStripMenuItem->Text = L"藍化";
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
			this->rGBtoGrayToolStripMenuItem->Text = L"灰階化";
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
			this->adjustToolStripMenuItem->Text = L"調整(&R)";
			// 
			// brightToolStripMenuItem
			// 
			this->brightToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->變亮ToolStripMenuItem,
					this->變暗ToolStripMenuItem
			});
			this->brightToolStripMenuItem->Name = L"brightToolStripMenuItem";
			this->brightToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->brightToolStripMenuItem->Text = L"亮度";
			// 
			// 變亮ToolStripMenuItem
			// 
			this->變亮ToolStripMenuItem->Name = L"變亮ToolStripMenuItem";
			this->變亮ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->變亮ToolStripMenuItem->Text = L"變亮";
			this->變亮ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::變亮ToolStripMenuItem_Click);
			// 
			// 變暗ToolStripMenuItem
			// 
			this->變暗ToolStripMenuItem->Name = L"變暗ToolStripMenuItem";
			this->變暗ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->變暗ToolStripMenuItem->Text = L"變暗";
			this->變暗ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::變暗ToolStripMenuItem_Click);
			// 
			// contrastToolStripMenuItem
			// 
			this->contrastToolStripMenuItem->Name = L"contrastToolStripMenuItem";
			this->contrastToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->contrastToolStripMenuItem->Text = L"對比";
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
			this->scaleToolStripMenuItem->Text = L"縮放影像";
			// 
			// smallToolStripMenuItem
			// 
			this->smallToolStripMenuItem->Name = L"smallToolStripMenuItem";
			this->smallToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->smallToolStripMenuItem->Text = L"縮小";
			// 
			// bigToolStripMenuItem
			// 
			this->bigToolStripMenuItem->Name = L"bigToolStripMenuItem";
			this->bigToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->bigToolStripMenuItem->Text = L"放大";
			// 
			// rotateToolStripMenuItem
			// 
			this->rotateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->向右旋轉ToolStripMenuItem,
					this->向左旋轉ToolStripMenuItem
			});
			this->rotateToolStripMenuItem->Name = L"rotateToolStripMenuItem";
			this->rotateToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->rotateToolStripMenuItem->Text = L"旋轉";
			// 
			// 向右旋轉ToolStripMenuItem
			// 
			this->向右旋轉ToolStripMenuItem->Name = L"向右旋轉ToolStripMenuItem";
			this->向右旋轉ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->向右旋轉ToolStripMenuItem->Text = L"向右旋轉";
			this->向右旋轉ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::向右旋轉ToolStripMenuItem_Click);
			// 
			// effectToolStripMenuItem
			// 
			this->effectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->negativeToolStripMenuItem,
					this->bitplanesToolStripMenuItem, this->quantizationToolStripMenuItem, this->曲線ToolStripMenuItem, this->直方圖ToolStripMenuItem
			});
			this->effectToolStripMenuItem->Name = L"effectToolStripMenuItem";
			this->effectToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->effectToolStripMenuItem->Text = L"效果(&I)";
			// 
			// negativeToolStripMenuItem
			// 
			this->negativeToolStripMenuItem->Name = L"negativeToolStripMenuItem";
			this->negativeToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->negativeToolStripMenuItem->Text = L"負片";
			this->negativeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::negativeToolStripMenuItem_Click);
			// 
			// bitplanesToolStripMenuItem
			// 
			this->bitplanesToolStripMenuItem->Name = L"bitplanesToolStripMenuItem";
			this->bitplanesToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->bitplanesToolStripMenuItem->Text = L"位元切面";
			// 
			// quantizationToolStripMenuItem
			// 
			this->quantizationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->二色ToolStripMenuItem,
					this->四色ToolStripMenuItem, this->八色ToolStripMenuItem, this->十六色ToolStripMenuItem, this->三十二色ToolStripMenuItem, this->六十四色ToolStripMenuItem,
					this->一百二十八色ToolStripMenuItem
			});
			this->quantizationToolStripMenuItem->Name = L"quantizationToolStripMenuItem";
			this->quantizationToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->quantizationToolStripMenuItem->Text = L"量化";
			// 
			// 二色ToolStripMenuItem
			// 
			this->二色ToolStripMenuItem->Name = L"二色ToolStripMenuItem";
			this->二色ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->二色ToolStripMenuItem->Text = L"2色";
			this->二色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::二色ToolStripMenuItem_Click);
			// 
			// 四色ToolStripMenuItem
			// 
			this->四色ToolStripMenuItem->Name = L"四色ToolStripMenuItem";
			this->四色ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->四色ToolStripMenuItem->Text = L"4色";
			this->四色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::四色ToolStripMenuItem_Click);
			// 
			// 八色ToolStripMenuItem
			// 
			this->八色ToolStripMenuItem->Name = L"八色ToolStripMenuItem";
			this->八色ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->八色ToolStripMenuItem->Text = L"8色";
			this->八色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::八色ToolStripMenuItem_Click);
			// 
			// 十六色ToolStripMenuItem
			// 
			this->十六色ToolStripMenuItem->Name = L"十六色ToolStripMenuItem";
			this->十六色ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->十六色ToolStripMenuItem->Text = L"16色";
			this->十六色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::十六色ToolStripMenuItem_Click);
			// 
			// 三十二色ToolStripMenuItem
			// 
			this->三十二色ToolStripMenuItem->Name = L"三十二色ToolStripMenuItem";
			this->三十二色ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->三十二色ToolStripMenuItem->Text = L"32色";
			this->三十二色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::三十二色ToolStripMenuItem_Click);
			// 
			// 六十四色ToolStripMenuItem
			// 
			this->六十四色ToolStripMenuItem->Name = L"六十四色ToolStripMenuItem";
			this->六十四色ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->六十四色ToolStripMenuItem->Text = L"64色";
			this->六十四色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::六十四色ToolStripMenuItem_Click);
			// 
			// 一百二十八色ToolStripMenuItem
			// 
			this->一百二十八色ToolStripMenuItem->Name = L"一百二十八色ToolStripMenuItem";
			this->一百二十八色ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->一百二十八色ToolStripMenuItem->Text = L"128色";
			this->一百二十八色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::一百二十八色ToolStripMenuItem_Click);
			// 
			// 曲線ToolStripMenuItem
			// 
			this->曲線ToolStripMenuItem->Name = L"曲線ToolStripMenuItem";
			this->曲線ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->曲線ToolStripMenuItem->Text = L"曲線";
			this->曲線ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::曲線ToolStripMenuItem_Click);
			// 
			// 直方圖ToolStripMenuItem
			// 
			this->直方圖ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->均化ToolStripMenuItem });
			this->直方圖ToolStripMenuItem->Name = L"直方圖ToolStripMenuItem";
			this->直方圖ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->直方圖ToolStripMenuItem->Text = L"直方圖";
			// 
			// 均化ToolStripMenuItem
			// 
			this->均化ToolStripMenuItem->Name = L"均化ToolStripMenuItem";
			this->均化ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->均化ToolStripMenuItem->Text = L"均化";
			this->均化ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::均化ToolStripMenuItem_Click);
			// 
			// filterToolStripMenuItem
			// 
			this->filterToolStripMenuItem->Name = L"filterToolStripMenuItem";
			this->filterToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->filterToolStripMenuItem->Text = L"濾波器(&E)";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->aboutToolStripMenuItem->Text = L"說明";
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
			// 向左旋轉ToolStripMenuItem
			// 
			this->向左旋轉ToolStripMenuItem->Name = L"向左旋轉ToolStripMenuItem";
			this->向左旋轉ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->向左旋轉ToolStripMenuItem->Text = L"向左旋轉";
			this->向左旋轉ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::向左旋轉ToolStripMenuItem_Click);
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
			this->Text = L"數位影像處理";
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
		oFileDlg->Title = "開啟舊檔 - 數位影像處理";
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
	
/*	private: System::Void 另存新檔SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		// Declare the child form as a new one.  
		//SaveFileDialog^ sFD;
		//Bitmap^ pBitmap;
		sFileDlg->CheckFileExists = true;
		sFileDlg->CheckPathExists = true;
		sFileDlg->Title = "另存新檔 - 數位影像處理";
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
		childForm->Text = "灰階化";
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
		childForm->Text = "負片";
		childForm->Show();
}





private: System::Void 曲線ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "曲線";
	childForm->Show();

	/*
	Curve_Adjustment ^ f2 = gcnew Curve_Adjustment();
	f2->Show();
	*/
}

private: System::Void 變亮ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "亮度增加";
	childForm->Show();
}
private: System::Void 變暗ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "亮度降低";
	childForm->Show();
}
private: System::Void 均化ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "直方圖均化";
	childForm->Show();
}

private: System::Void 二色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "2色";
	childForm->Show();
}

private: System::Void 四色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "4色";
	childForm->Show();

}
private: System::Void 八色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "8色";
	childForm->Show();
}
private: System::Void 十六色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "16色";
	childForm->Show();
}
private: System::Void 三十二色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "32色";
	childForm->Show();
}
private: System::Void 六十四色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "64色";
	childForm->Show();
}

private: System::Void 一百二十八色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "128色";
	childForm->Show();
}
private: System::Void 向右旋轉ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "向右旋轉";
	childForm->Show();
}
private: System::Void 向左旋轉ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "向左旋轉";
	childForm->Show();
}
};
}