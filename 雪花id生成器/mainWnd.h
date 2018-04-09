#pragma once
#include "snow_flake.h"


namespace 雪花id生成器 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// mainWnd 摘要
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		String^ GenerateSnowId() {
			utils::unique_id_t* u_id_ptr = new utils::unique_id_t();
			u_id_ptr->set_epoch(uint64_t(1367505795100));
			u_id_ptr->set_machine(int32_t(100));
			return u_id_ptr->generate().ToString();
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~mainWnd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Ebrima", 8.25F));
			this->button1->Location = System::Drawing::Point(212, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 67);
			this->button1->TabIndex = 0;
			this->button1->Text = L"点我生成";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainWnd::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(65, 117);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(437, 38);
			this->textBox1->TabIndex = 1;
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(575, 330);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"mainWnd";
			this->Text = L"雪花id生成器";
			this->Load += gcnew System::EventHandler(this, &mainWnd::mainWnd_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = GenerateSnowId();
	}
	private: System::Void mainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
