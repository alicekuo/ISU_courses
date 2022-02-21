#pragma once
#include "MSForm.h"
namespace MDIP_DIP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Brightness 的摘要
	/// </summary>
	public ref class Brightness : public System::Windows::Forms::Form
	{
	public:
		Brightness(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Brightness()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::PictureBox^  pictureBox2;
	internal: System::Windows::Forms::HScrollBar^  hScrollBar1;
	internal: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Button^  button2;
	internal: int top, *f;
	internal: bool IP;
	internal: Bitmap^ NpBitmap;

	private:
		Bitmap^ pBitmap;
		int *g;
		int w, h;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(31, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(317, 301);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(453, 25);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 301);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->LargeChange = 1;
			this->hScrollBar1->Location = System::Drawing::Point(30, 360);
			this->hScrollBar1->Minimum = -100;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(766, 47);
			this->hScrollBar1->TabIndex = 2;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Brightness::hScrollBar1_Scroll_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(362, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"確定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Brightness::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(362, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Brightness::button2_Click_1);
			// 
			// Brightness
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 429);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Brightness";
			this->Text = L"亮度";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: Bitmap^ array22bmp(int *g, int w, int h)
{
	Bitmap^ bmp = gcnew Bitmap(w, h, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
	System::Drawing::Imaging::BitmapData^ bmpData =
		bmp->LockBits(Rectangle(0, 0, w, h), System::Drawing::Imaging::ImageLockMode::WriteOnly, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
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


private: void bright2(int *f, int w, int h, int *g, int value)
{
	for (int i = 0; i < w*h; i++)
	{
		if (value >= 0)
			g[(i / w) * h + i % w] = (int)(((255 - value / 100 * 255) / 255)*f[(i / w) * h + i % w] + 255 - ((255 - (double)value / 100 * 255) / 255) * 255);
		else
			g[(i / w) * h + i % w] = (int)(((255 + (double)value / 100 * 255) / 255)*f[(i / w) * h + i % w] + (255 + (double)value / 100 * 255) - ((255 + (double)value / 100 * 255) / 255) * 255);

		if (g[(i / w) * h + i % w] > 255)
			g[(i / w) * h + i % w] = 255;
		if (g[(i / w) * h + i % w] < 0)
			g[(i / w) * h + i % w] = 0;
	}
}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		IP = true;
		Close();
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	IP = false;
	hScrollBar1->Value = 1;
	Close();
}
private: System::Void hScrollBar1_Scroll_1(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
	w = NpBitmap->Width;
	h = NpBitmap->Height;
	g = new int[w*h];
	top = hScrollBar1->Value;
	bright2(f, w, h, g, top);

	NpBitmap = array22bmp(g, w, h);
	pictureBox2->Image = NpBitmap;
}
};
}
