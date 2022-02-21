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
	/// Bitplane 的摘要
	/// </summary>
	public ref class Bitplane : public System::Windows::Forms::Form
	{
	public:
		Bitplane(int *ff)
		{
			InitializeComponent();
			f = ff;
			//
			//TODO:  在此加入建構函式程式碼
			//
		}
	private:
		Bitmap^ pBitmap;
		int *f, *g;
		int w, h;
	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Bitplane()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::PictureBox^  pictureBox2;
	internal: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Button^  button2;
	internal: System::Windows::Forms::HScrollBar^  hScrollBar1;
	internal: int bit;
	internal: bool IP;
	internal: Bitmap^ NpBitmap;
	protected:
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(325, 279);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(424, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(332, 279);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(343, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"確定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Bitplane::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(343, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Bitplane::button2_Click);
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->LargeChange = 1;
			this->hScrollBar1->Location = System::Drawing::Point(12, 315);
			this->hScrollBar1->Maximum = 8;
			this->hScrollBar1->Minimum = 1;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(744, 33);
			this->hScrollBar1->TabIndex = 0;
			this->hScrollBar1->Value = 1;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Bitplane::hScrollBar1_Scroll);
			// 
			// Bitplane
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 367);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Bitplane";
			this->Text = L"位元切面";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void hScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		bit = 1;
		w = NpBitmap->Width;
		h = NpBitmap->Height;
		g = new int[w*h];
		int value = hScrollBar1->Value;
		for (int i = 1; i < value; i++)
			bit = bit * 2;

		bitplane2(f, w, h, g, bit);

		NpBitmap = array22bmp(g, w, h);
		pictureBox2->Image = NpBitmap;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		IP = true;
		Close();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		IP = false;
		hScrollBar1->Value = 1;
		Close();
	}

	private: void bitplane2(int *f, int w, int h, int *g, int bit)
	{
		for (int i = 0; i < w*h; i++)
			g[(i / w) * h + i % w] = ((int)((float)f[(i / w) * h + i % w] / bit + 0.5) % 2) * 255;
	}

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


};
}
