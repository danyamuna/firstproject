#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Text;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ calculatorText;
	protected:
	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ num6;

	private: System::Windows::Forms::Button^ num5;

	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num9;


	private: System::Windows::Forms::Button^ num8;

	private: System::Windows::Forms::Button^ num7;

	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ sub;
	private: System::Windows::Forms::Button^ sum;
	private: System::Windows::Forms::Button^ multi;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ zero;

	private: System::Windows::Forms::Button^ res;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->calculatorText = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::Button());
			this->multi = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// calculatorText
			// 
			this->calculatorText->AllowDrop = true;
			this->calculatorText->BackColor = System::Drawing::SystemColors::ControlLight;
			this->calculatorText->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->calculatorText->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->calculatorText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculatorText->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calculatorText->Location = System::Drawing::Point(12, 9);
			this->calculatorText->Name = L"calculatorText";
			this->calculatorText->Size = System::Drawing::Size(178, 60);
			this->calculatorText->TabIndex = 0;
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(15, 94);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(30, 40);
			this->num1->TabIndex = 1;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = true;
			this->num1->Click += gcnew System::EventHandler(this, &MyForm::num1_Click);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(61, 94);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(30, 40);
			this->num2->TabIndex = 2;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = true;
			this->num2->Click += gcnew System::EventHandler(this, &MyForm::num2_Click);
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(108, 94);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(30, 40);
			this->num3->TabIndex = 3;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = true;
			this->num3->Click += gcnew System::EventHandler(this, &MyForm::num3_Click);
			// 
			// num6
			// 
			this->num6->Location = System::Drawing::Point(61, 140);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(30, 40);
			this->num6->TabIndex = 6;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = true;
			this->num6->Click += gcnew System::EventHandler(this, &MyForm::num6_Click);
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(15, 140);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(30, 40);
			this->num5->TabIndex = 5;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = true;
			this->num5->Click += gcnew System::EventHandler(this, &MyForm::num5_Click);
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(154, 94);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(30, 40);
			this->num4->TabIndex = 4;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = true;
			this->num4->Click += gcnew System::EventHandler(this, &MyForm::num4_Click);
			// 
			// num9
			// 
			this->num9->Location = System::Drawing::Point(15, 186);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(30, 40);
			this->num9->TabIndex = 9;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = true;
			this->num9->Click += gcnew System::EventHandler(this, &MyForm::num9_Click);
			// 
			// num8
			// 
			this->num8->Location = System::Drawing::Point(154, 140);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(30, 40);
			this->num8->TabIndex = 8;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = true;
			this->num8->Click += gcnew System::EventHandler(this, &MyForm::num8_Click);
			// 
			// num7
			// 
			this->num7->Location = System::Drawing::Point(108, 140);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(30, 40);
			this->num7->TabIndex = 7;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = true;
			this->num7->Click += gcnew System::EventHandler(this, &MyForm::num7_Click);
			// 
			// division
			// 
			this->division->Location = System::Drawing::Point(108, 232);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(30, 40);
			this->division->TabIndex = 12;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			// 
			// sub
			// 
			this->sub->Location = System::Drawing::Point(61, 232);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(30, 40);
			this->sub->TabIndex = 11;
			this->sub->Text = L"-";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->Click += gcnew System::EventHandler(this, &MyForm::sub_Click);
			// 
			// sum
			// 
			this->sum->Location = System::Drawing::Point(15, 232);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(30, 40);
			this->sum->TabIndex = 10;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = true;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm::sum_Click);
			// 
			// multi
			// 
			this->multi->Location = System::Drawing::Point(154, 232);
			this->multi->Name = L"multi";
			this->multi->Size = System::Drawing::Size(30, 40);
			this->multi->TabIndex = 16;
			this->multi->Text = L"*";
			this->multi->UseVisualStyleBackColor = true;
			this->multi->Click += gcnew System::EventHandler(this, &MyForm::multi_Click);
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(154, 186);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(30, 40);
			this->clear->TabIndex = 15;
			this->clear->Text = L"CLR";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// zero
			// 
			this->zero->Location = System::Drawing::Point(61, 186);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(30, 40);
			this->zero->TabIndex = 14;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// res
			// 
			this->res->Location = System::Drawing::Point(108, 186);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(30, 40);
			this->res->TabIndex = 17;
			this->res->Text = L"=";
			this->res->UseVisualStyleBackColor = true;
			this->res->Click += gcnew System::EventHandler(this, &MyForm::res_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(202, 288);
			this->Controls->Add(this->res);
			this->Controls->Add(this->multi);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->division);
			this->Controls->Add(this->sub);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->calculatorText);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ firstNum = "";
		String^ secondNum = "";
		double result = 0.0;
		char function = 0;
		String^ userinput = "";
private: System::Void num1_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "1";
	calculatorText->Text += userinput;
}
private: System::Void num2_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "2";
	calculatorText->Text += userinput;
}
private: System::Void num3_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "3";
	calculatorText->Text += userinput;
}
private: System::Void num4_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "4";
	calculatorText->Text += userinput;
}
private: System::Void num5_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "5";
	calculatorText->Text += userinput;
}
private: System::Void num6_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "6";
	calculatorText->Text += userinput;
}
private: System::Void num7_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "7";
	calculatorText->Text += userinput;
}
private: System::Void num8_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "8";
	calculatorText->Text += userinput;
}
private: System::Void num9_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "9";
	calculatorText->Text += userinput;
}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += "0";
	calculatorText->Text += userinput;
}
private: System::Void point_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	userinput += ".";
	calculatorText->Text += userinput;
}

private: System::Void sum_Click(System::Object^ sender, System::EventArgs^ e) {
	function = '+';
	firstNum = userinput;
	userinput = "";
}
private: System::Void sub_Click(System::Object^ sender, System::EventArgs^ e) {
	function = '-';
	firstNum = userinput;
	userinput = "";
}

private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
	function = '/';
	firstNum = userinput;
	userinput = "";
}
private: System::Void multi_Click(System::Object^ sender, System::EventArgs^ e) {
	function = '*';
	firstNum = userinput;
	userinput = "";
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	calculatorText->Text = "";
	result = 0;
	firstNum = "";
	secondNum = "";
	userinput = "";

}
	private: System::Void res_Click(System::Object^ sender, System::EventArgs^ e) {

		secondNum = userinput;//وضع الرقم الثاني ضمن المتغير
		double firstNumDou, secondNumDou;

		firstNumDou = Convert::ToDouble(firstNum);
		secondNumDou = Convert::ToDouble(secondNum);


		if (function == '+')
		{
			result = firstNumDou + secondNumDou;
			calculatorText->Text = Convert::ToString(result);
		}
		else if (function == '-')
		{
			result = firstNumDou - secondNumDou;
			calculatorText->Text = Convert::ToString(result);
		}

		else if (function == '*')
		{
			result = firstNumDou * secondNumDou;
			calculatorText->Text = Convert::ToString(result);

		}
		else if (function == '/')
		{
			if (firstNumDou == 0 || secondNumDou == 0)
			{
				calculatorText->Text = "Error";
				return;
			}
			else
			{
				result = firstNumDou / secondNumDou;
				calculatorText->Text = Convert::ToString(result);
			}
		}
	}

};
}


