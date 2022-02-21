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
	private: System::Windows::Forms::ToolStripMenuItem^  二色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  filterToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  直方圖ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  均化ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存新檔SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  四色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  八色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  十六色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  三十二色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  六十四色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  一百二十八色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  向右旋轉ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  向左旋轉ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  旋轉180度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  水平翻轉ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  垂直翻轉ToolStripMenuItem;

	private: Bitplane^ f2;
			 Brightness^ f3;
			 Contrast^ f4;
			 Histogram^ f5;
			 help^ f6;
			 Scaling^ Scale;

	private: System::Windows::Forms::ToolStripMenuItem^  轉換函數ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  平均濾波器ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  高斯濾波器ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  邊緣處理ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobel濾波器ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  prewitt濾波器ToolStripMenuItem;


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
			this->ipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBtoGrayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contrastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->scaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rotateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->向右旋轉ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->向左旋轉ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->旋轉180度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->水平翻轉ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->垂直翻轉ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->直方圖ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->均化ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->轉換函數ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->平均濾波器ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->高斯濾波器ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->邊緣處理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobel濾波器ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prewitt濾波器ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->另存新檔SToolStripMenuItem
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
			this->另存新檔SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::另存新檔SToolStripMenuItem_Click);
			// 
			// ipToolStripMenuItem
			// 
			this->ipToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->rGBtoGrayToolStripMenuItem });
			this->ipToolStripMenuItem->Name = L"ipToolStripMenuItem";
			this->ipToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ipToolStripMenuItem->Text = L"色版(&C)";
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
			this->brightToolStripMenuItem->Name = L"brightToolStripMenuItem";
			this->brightToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->brightToolStripMenuItem->Text = L"亮度";
			this->brightToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::brightToolStripMenuItem_Click);
			// 
			// contrastToolStripMenuItem
			// 
			this->contrastToolStripMenuItem->Name = L"contrastToolStripMenuItem";
			this->contrastToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->contrastToolStripMenuItem->Text = L"對比";
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
			this->scaleToolStripMenuItem->Text = L"縮放影像";
			this->scaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::scaleToolStripMenuItem_Click);
			// 
			// rotateToolStripMenuItem
			// 
			this->rotateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->向右旋轉ToolStripMenuItem,
					this->向左旋轉ToolStripMenuItem, this->旋轉180度ToolStripMenuItem, this->水平翻轉ToolStripMenuItem, this->垂直翻轉ToolStripMenuItem
			});
			this->rotateToolStripMenuItem->Name = L"rotateToolStripMenuItem";
			this->rotateToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->rotateToolStripMenuItem->Text = L"旋轉";
			// 
			// 向右旋轉ToolStripMenuItem
			// 
			this->向右旋轉ToolStripMenuItem->Name = L"向右旋轉ToolStripMenuItem";
			this->向右旋轉ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->向右旋轉ToolStripMenuItem->Text = L"向右旋轉";
			this->向右旋轉ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::向右旋轉ToolStripMenuItem_Click);
			// 
			// 向左旋轉ToolStripMenuItem
			// 
			this->向左旋轉ToolStripMenuItem->Name = L"向左旋轉ToolStripMenuItem";
			this->向左旋轉ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->向左旋轉ToolStripMenuItem->Text = L"向左旋轉";
			this->向左旋轉ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::向左旋轉ToolStripMenuItem_Click);
			// 
			// 旋轉180度ToolStripMenuItem
			// 
			this->旋轉180度ToolStripMenuItem->Name = L"旋轉180度ToolStripMenuItem";
			this->旋轉180度ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->旋轉180度ToolStripMenuItem->Text = L"旋轉180度";
			this->旋轉180度ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::旋轉180度ToolStripMenuItem_Click);
			// 
			// 水平翻轉ToolStripMenuItem
			// 
			this->水平翻轉ToolStripMenuItem->Name = L"水平翻轉ToolStripMenuItem";
			this->水平翻轉ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->水平翻轉ToolStripMenuItem->Text = L"水平翻轉";
			this->水平翻轉ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::水平翻轉ToolStripMenuItem_Click);
			// 
			// 垂直翻轉ToolStripMenuItem
			// 
			this->垂直翻轉ToolStripMenuItem->Name = L"垂直翻轉ToolStripMenuItem";
			this->垂直翻轉ToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->垂直翻轉ToolStripMenuItem->Text = L"垂直翻轉";
			this->垂直翻轉ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::垂直翻轉ToolStripMenuItem_Click);
			// 
			// effectToolStripMenuItem
			// 
			this->effectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->negativeToolStripMenuItem,
					this->bitplanesToolStripMenuItem, this->quantizationToolStripMenuItem, this->直方圖ToolStripMenuItem
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
			this->bitplanesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bitplanesToolStripMenuItem_Click);
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
			// 直方圖ToolStripMenuItem
			// 
			this->直方圖ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->均化ToolStripMenuItem,
					this->轉換函數ToolStripMenuItem
			});
			this->直方圖ToolStripMenuItem->Name = L"直方圖ToolStripMenuItem";
			this->直方圖ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->直方圖ToolStripMenuItem->Text = L"直方圖";
			// 
			// 均化ToolStripMenuItem
			// 
			this->均化ToolStripMenuItem->Name = L"均化ToolStripMenuItem";
			this->均化ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->均化ToolStripMenuItem->Text = L"均化";
			this->均化ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::均化ToolStripMenuItem_Click);
			// 
			// 轉換函數ToolStripMenuItem
			// 
			this->轉換函數ToolStripMenuItem->Name = L"轉換函數ToolStripMenuItem";
			this->轉換函數ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->轉換函數ToolStripMenuItem->Text = L"轉換函數";
			this->轉換函數ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::轉換函數ToolStripMenuItem_Click);
			// 
			// filterToolStripMenuItem
			// 
			this->filterToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->平均濾波器ToolStripMenuItem,
					this->高斯濾波器ToolStripMenuItem, this->邊緣處理ToolStripMenuItem, this->sobel濾波器ToolStripMenuItem, this->prewitt濾波器ToolStripMenuItem
			});
			this->filterToolStripMenuItem->Name = L"filterToolStripMenuItem";
			this->filterToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->filterToolStripMenuItem->Text = L"濾波器(&E)";
			// 
			// 平均濾波器ToolStripMenuItem
			// 
			this->平均濾波器ToolStripMenuItem->Name = L"平均濾波器ToolStripMenuItem";
			this->平均濾波器ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->平均濾波器ToolStripMenuItem->Text = L"平均濾波器";
			this->平均濾波器ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::平均濾波器ToolStripMenuItem_Click_1);
			// 
			// 高斯濾波器ToolStripMenuItem
			// 
			this->高斯濾波器ToolStripMenuItem->Name = L"高斯濾波器ToolStripMenuItem";
			this->高斯濾波器ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->高斯濾波器ToolStripMenuItem->Text = L"高斯濾波器";
			this->高斯濾波器ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::高斯濾波器ToolStripMenuItem_Click_1);
			// 
			// 邊緣處理ToolStripMenuItem
			// 
			this->邊緣處理ToolStripMenuItem->Name = L"邊緣處理ToolStripMenuItem";
			this->邊緣處理ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->邊緣處理ToolStripMenuItem->Text = L"銳化";
			this->邊緣處理ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::邊緣處理ToolStripMenuItem_Click);
			// 
			// sobel濾波器ToolStripMenuItem
			// 
			this->sobel濾波器ToolStripMenuItem->Name = L"sobel濾波器ToolStripMenuItem";
			this->sobel濾波器ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sobel濾波器ToolStripMenuItem->Text = L"Sobel濾波器";
			this->sobel濾波器ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sobel濾波器ToolStripMenuItem_Click);
			// 
			// prewitt濾波器ToolStripMenuItem
			// 
			this->prewitt濾波器ToolStripMenuItem->Name = L"prewitt濾波器ToolStripMenuItem";
			this->prewitt濾波器ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->prewitt濾波器ToolStripMenuItem->Text = L"Prewitt濾波器";
			this->prewitt濾波器ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::prewitt濾波器ToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->aboutToolStripMenuItem->Text = L"說明";
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
	
	private: System::Void 另存新檔SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		sFileDlg->Title = "另存新檔 - 數位影像處理";
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
		childForm->Text = "灰階化";
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
		childForm->Text = "負片";
		childForm->Show();
}


private: System::Void 均化ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "直方圖均化";
	childForm->Show();
}

private: System::Void 二色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "2色";
	childForm->Show();
}

private: System::Void 四色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "4色";
	childForm->Show();

}
private: System::Void 八色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "8色";
	childForm->Show();
}
private: System::Void 十六色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "16色";
	childForm->Show();
}
private: System::Void 三十二色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "32色";
	childForm->Show();
}
private: System::Void 六十四色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "64色";
	childForm->Show();
}

private: System::Void 一百二十八色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "128色";
	childForm->Show();
}
private: System::Void 向右旋轉ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "向右旋轉";
	childForm->Show();
}
private: System::Void 向左旋轉ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "向左旋轉";
	childForm->Show();
}
private: System::Void 旋轉180度ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "旋轉180度";
	childForm->Show();
}
private: System::Void 水平翻轉ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "水平翻轉";
	childForm->Show();
}
private: System::Void 垂直翻轉ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
	childForm->Text = "垂直翻轉";
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

private: System::Void 轉換函數ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
				childForm->Text = "縮放大小";
				childForm->Show();
			}

			break;
		}
	}
}

private: System::Void 平均濾波器ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
			childForm->Text = "平均濾波器";
			childForm->Show();
			
		}
	}
}
private: System::Void 高斯濾波器ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
			childForm->Text = "高斯濾波器";
			childForm->Show();
			
		}
	}
}
private: System::Void 邊緣處理ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			childForm->Text = "銳化";
			childForm->Show();
			
		}
	}
}
private: System::Void sobel濾波器ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			childForm->Text = "Sobel濾波器";
			childForm->Show();

		}
	}
}
private: System::Void prewitt濾波器ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			childForm->Text = "Prewitt濾波器";
			childForm->Show();

		}
	}
}
};
}