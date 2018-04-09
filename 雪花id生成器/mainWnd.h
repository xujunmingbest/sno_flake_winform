#pragma once
#include "snow_flake.h"


namespace ѩ��id������ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// mainWnd ժҪ
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
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
		/// ������������ʹ�õ���Դ��
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
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainWnd::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->Text = L"ѩ��id������";
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
