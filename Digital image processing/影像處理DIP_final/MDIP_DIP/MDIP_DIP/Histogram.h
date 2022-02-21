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
	/// Histogram 的摘要
	/// </summary>
	public ref class Histogram : public System::Windows::Forms::Form
	{
	public:
		Histogram(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}
	private:
		Bitmap^ pBitmap;
		Point PicLoc;
		int w, h;
		int ox = 0, oy = 0;
		int x0 = 0, y0 = 256, x1 = 0, x2 = 256, y1 = 256, y2 = 0, x3 = 256, y3 = 0;
		bool md;
		bool sp = true;

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Histogram()
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
	internal: System::Windows::Forms::GroupBox^  groupBox1;
	internal: System::Windows::Forms::PictureBox^  pictureBox3;
	
	internal: int top;
	internal: int *f, *gh, *g;;
	internal: bool IP;
	internal: Bitmap^ NpBitmap;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(32, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(280, 229);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(396, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(320, 228);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(396, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"確定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Histogram::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(396, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Histogram::button2_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Location = System::Drawing::Point(32, 265);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(280, 274);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"直方圖";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Location = System::Drawing::Point(7, 22);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(256, 256);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Histogram::pictureBox3_Paint);
			this->pictureBox3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Histogram::pictureBox3_MouseDown);
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Histogram::pictureBox3_MouseMove);
			this->pictureBox3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Histogram::pictureBox3_MouseUp);
			// 
			// Histogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 551);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Histogram";
			this->Text = L"直方圖+轉換函數";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}

		private: System::Void pictureBox3_Paint(Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			// Create a local version of the graphics object for the PictureBox.
			Graphics^ g = e->Graphics;

			// Draw a line in the PictureBox.

			g->DrawLine(System::Drawing::Pens::Red, x0, y0, x1, y1);
			g->DrawLine(System::Drawing::Pens::Red, x2, y2, x3, y3);
			g->DrawLine(System::Drawing::Pens::Red, x1, y1, x2, y2);

		}
	private: System::Void pictureBox3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		PicLoc = pictureBox3->Location;
		this->pictureBox3->BringToFront();
		w = NpBitmap->Width;
		h = NpBitmap->Height;
		g = new int[w*h];
		md = true;
	}
	private: System::Void pictureBox3_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		md = false;
		if (sp)
		{
			x1 = e->X;
			y1 = e->Y;
			if (x1 > x2 - 1)
				x1 = x2 - 1;
			else if (x1 < 0)
				x1 = 0;
			if (y1 > 255)
				y1 = 255;
			else if (y1 < 0)
				y1 = 0;
			sp = false;
		}
		else
		{
			x2 = e->X;
			y2 = e->Y;
			if (x2 > 255)
				x2 = 255;
			else if (x2 < x1 + 1)
				x2 = x1 + 1;
			if (y2 > 255)
				y2 = 255;
			else if (y2 <0)
				y2 = 0;
			sp = true;
		}
		this->pictureBox3->Image = pictureBox3->Image;
		this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Histogram::pictureBox3_Paint);

		this->groupBox1->Controls->Add(this->pictureBox3);
		pictureBox3->Location = PicLoc;
		Curve(f, w, h, g);
		pictureBox2->Image = array22bmp(g, w, h);
	}
	private: System::Void pictureBox3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (md) {
			if (sp) {
				x1 = e->X;
				y1 = e->Y;
				if (x1 > x2 - 1)
					x1 = x2 - 1;
				else if (x1 < 0)
					x1 = 0;
				if (y1 > 255)
					y1 = 255;
				else if (y1 < 0)
					y1 = 0;
			}
			else
			{
				x2 = e->X;
				y2 = e->Y;
				if (x2 > 255)
					x2 = 255;
				else if (x2 < x1 + 1)
					x2 = x1 + 1;
				if (y2 > 255)
					y2 = 255;
				else if (y2 <0)
					y2 = 0;
			}
			this->pictureBox3->Image = pictureBox3->Image;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Histogram::pictureBox3_Paint);
			Curve(f, w, h, g);
			pictureBox2->Image = array22bmp(g, w, h);
		}
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
	private: void Curve(int *f, int w, int h, int *g)
	{
		for (int i = 0; i < w*h; i++)
		{
			g[(i / w) * h + i % w] = f[(i / w) * h + i % w];

			g[(i / w) * h + i % w] = (int)(((float)((255 - y2) - (255 - y1)) / (x2 - x1))*f[(i / w) * h + i % w] + (float)(255 - y2) - ((float)((255 - y2) - (255 - y1)) / (x2 - x1))*x2);

			if (g[(i / w) * h + i % w] > 255)
				g[(i / w) * h + i % w] = 255;
			if (g[(i / w) * h + i % w] < 0)
				g[(i / w) * h + i % w] = 0;
		}
	}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	IP = false;
	Close();
}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	IP = true;
	Close();
}
};
}
