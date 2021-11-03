#pragma once
#include <chrono>
#include "AVL.h"
#include "isFoundInAvl.h"
#include <algorithm>
#include <vector>
namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			N = 10000;
			tree = new AVL();
			tree_demonstration = new AVL();
			InitializeComponent();
			//numericUpDown5->Minimum = 100;
			numericUpDown5->Maximum = 500000;
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button4;
	public:



	private:
		AVL* tree;
		AVL* tree_demonstration ;
		int N;
		bool search_table_flag = true;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;














	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;



		   

		   
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm() {
			if (!components) return;
			delete components;
		}
		
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1286, 764);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->numericUpDown5);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1278, 726);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Алгоритмы сортировки и поиска";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(575, 160);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 74);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Поиск и сортировка";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(570, 5);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 50);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Размерность\r\nмассива";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown5->Location = System::Drawing::Point(575, 82);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(135, 47);
			this->numericUpDown5->TabIndex = 1;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridView2);
			this->groupBox4->Controls->Add(this->chart2);
			this->groupBox4->Location = System::Drawing::Point(718, 5);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(555, 715);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Результаты сортировки";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView2->Location = System::Drawing::Point(4, 52);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView2->RowHeadersWidth = 155;
			this->dataGridView2->RowTemplate->Height = 38;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->Size = System::Drawing::Size(551, 160);
			this->dataGridView2->TabIndex = 2;
			// 
			// chart2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(58, 361);
			this->chart2->Margin = System::Windows::Forms::Padding(2);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(464, 334);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Controls->Add(this->chart1);
			this->groupBox3->Location = System::Drawing::Point(5, 5);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(555, 715);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Результаты поиска";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 52);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->RowHeadersWidth = 155;
			this->dataGridView1->RowTemplate->Height = 38;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(551, 160);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Время";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 110;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Найдено ключей";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"В среднем сравнений";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 160;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(37, 361);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->LegendText = L"ОБП";
			series2->Name = L"Series1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->LegendText = L"AVL";
			series3->Name = L"Series2";
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(464, 334);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1278, 726);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Работа с деревом";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(391, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(866, 688);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Визуализация дерева";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 386);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(812, 285);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(29, 61);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(812, 285);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(19, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(348, 688);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Взаимодействие с деревом";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(28, 524);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(288, 82);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Визуализировать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(180, 365);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 42);
			this->label2->TabIndex = 8;
			this->label2->Text = L"НА:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 365);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 42);
			this->label1->TabIndex = 7;
			this->label1->Text = L"С:";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown4->Location = System::Drawing::Point(187, 410);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(129, 80);
			this->numericUpDown4->TabIndex = 6;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown3->Location = System::Drawing::Point(28, 410);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(129, 80);
			this->numericUpDown3->TabIndex = 5;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(187, 166);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(129, 80);
			this->numericUpDown2->TabIndex = 4;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(187, 48);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(129, 80);
			this->numericUpDown1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(288, 82);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Изменить значение";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(28, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 82);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Удалить значение";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 82);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить значение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Время";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Сравнения";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 120;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Перестановки/Балансировки";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 200;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 761);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"CourseWork";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	const int add_value = Convert::ToInt32(numericUpDown1->Value);
	tree_demonstration->add(add_value);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if(search_table_flag) {
		tree->set_N(N);
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->HeaderCell->Value = "Бинарный";
		dataGridView1->Rows[0]->HeaderCell->Size.Width = 240;
		dataGridView1->Rows->Add();
		dataGridView1->Rows[1]->HeaderCell->Value = "AVL-дерево";
		dataGridView1->Rows[1]->HeaderCell->Size.Width = 240;
		dataGridView2->Rows->Add();
		dataGridView2->Rows[0]->HeaderCell->Value = "Прямое";
		dataGridView2->Rows[0]->HeaderCell->Size.Width = 240;
		dataGridView2->Rows->Add();
		dataGridView2->Rows[1]->HeaderCell->Value = "AVL-дерево";
		dataGridView2->Rows[1]->HeaderCell->Size.Width = 240;
		search_table_flag = false;
	}
	tree = new AVL(N);
	N = Convert::ToInt32(numericUpDown5->Value);
	int* arr_values = new int[N];
	int* arr_sorting = new int[N];
	int* arr_keys = new int[N];
	for (int i = 0; i < N; ++i) {
		arr_values[i] = rand() % 100;
		arr_sorting[i] = arr_values[i];
		arr_keys[i] = rand() % 200;
	}
#pragma region Table searching
	// Поиск в AVL-дереве
	const auto beginSearchTree = chrono::high_resolution_clock::now();
	for (int i = 0; i < N; ++i)
		tree->add(arr_values[i]);
	double sr = 0;
	int found_quantity = 0;
	for (int i = 0; i < N; ++i) {
		//const isFoundInAvl found = tree->avlLooking(arr_keys[i], sr);
		//if (found.isFound) found_quantity++;
		found_quantity += tree->avlSearch(arr_keys[i], sr);
	}
	const auto endSearchTree = chrono::high_resolution_clock::now();
	const auto timeSearchTree = chrono::duration_cast<chrono::duration < double>>(endSearchTree - beginSearchTree);
	// Бинарый поиск
	const auto beginBinarySearch = chrono::high_resolution_clock::now();
	sort(arr_values, arr_values + N);
	double srav = 0;
	int found_quantity_binary = 0;
	for (int i = 0; i < N; ++i)
		found_quantity_binary += optBinLooking(arr_values, N, arr_keys[i], srav);
	const auto endBinarySearch = chrono::high_resolution_clock::now();
	const auto timeBinarySearch = chrono::duration_cast<chrono::duration < double>>(endBinarySearch - beginBinarySearch);
#pragma endregion

#pragma region Input into table searching
	dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(timeBinarySearch.count()*10000);
	dataGridView1->Rows[0]->Cells[1]->Value = found_quantity_binary;
	dataGridView1->Rows[0]->Cells[2]->Value = srav / N;
	dataGridView1->Rows[1]->Cells[0]->Value = Convert::ToString(timeSearchTree.count()*10000);
	dataGridView1->Rows[1]->Cells[1]->Value = found_quantity;
	dataGridView1->Rows[1]->Cells[2]->Value = sr / N;
#pragma endregion

#pragma region Graphic searching
	chart1->Series["Series1"]->Points->Clear();
	chart1->Series["Series2"]->Points->Clear();
	for (int i = N; i > 1; i = i - N / 10) {
		// Поиск в AVL-дереве
		auto beginBinarySearch2 = chrono::high_resolution_clock::now();
		sort(arr_values, arr_values + N/i);
		double srav2 = 0;
		int found_quantity_binary2 = 0;
		for (int j = 0; j < N/i; ++j)
			found_quantity_binary2 += optBinLooking(arr_values, N/i, arr_keys[j], srav2);
		auto endBinarySearch2 = chrono::high_resolution_clock::now();
		auto timeBinarySearch2 = chrono::duration_cast<chrono::duration < double>>(endBinarySearch2 - beginBinarySearch2);
		chart1->Series["Series1"]->Points->AddXY( 100*(N/i), timeBinarySearch2.count());
		// Бинарый поиск
		auto beginSearchTree2 = chrono::high_resolution_clock::now();
		tree = new AVL(N);
		for (int j = 0; j < N/i; ++j)
			tree->add(arr_values[j]);
		double sr2 = 0;
		int found_quantity2 = 0;
		for (int j = 0; j < N/i; ++j)
			found_quantity2 += tree->avlSearch(arr_keys[j], sr2);
		auto endSearchTree2 = chrono::high_resolution_clock::now();
		auto timeSearchTree2 = chrono::duration_cast<chrono::duration < double>>(endSearchTree2 - beginSearchTree2);
		chart1->Series["Series2"]->Points->AddXY(100 * (N / i), timeSearchTree2.count());
	}
#pragma endregion

#pragma region Table sorting
	// AVL-сортировка
	const auto beginTreeSorting = chrono::high_resolution_clock::now();
	int sravTreeSort = 0, perestTree = 0;
	for (int i = 0; i < N; ++i)
		tree->add(arr_sorting[i], sravTreeSort, perestTree);
	const auto endTreeSorting = chrono::high_resolution_clock::now();
	const auto timeTreeSorting = chrono::duration_cast<chrono::duration < double>>(endTreeSorting - beginTreeSorting);
	// Прямая сортировка
	const auto beginDirectSorting = chrono::high_resolution_clock::now();
	int sravDirectSort = 0, perest = 0;
	forwardInclude(arr_sorting, N, perest, sravDirectSort);
	const auto endDirectSorting = chrono::high_resolution_clock::now();
	const auto timeDirectSorting = chrono::duration_cast<chrono::duration < double>>(endDirectSorting - beginDirectSorting);
#pragma endregion

#pragma region Input into table sorting
	dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString(timeDirectSorting.count() * 10000);
	dataGridView2->Rows[0]->Cells[1]->Value = sravDirectSort;
	dataGridView2->Rows[0]->Cells[2]->Value = perest;
	dataGridView2->Rows[1]->Cells[0]->Value = Convert::ToString(timeTreeSorting.count() * 10000);
	dataGridView2->Rows[1]->Cells[1]->Value = sravTreeSort;
	dataGridView2->Rows[1]->Cells[2]->Value = perestTree;
#pragma endregion

#pragma region Grafic sorting
#pragma endregion
}

	// Оптимальный бинарный поиск
	int optBinLooking(int arr[], const int n, const int key, double& srav) {
		int L = 0, R = n;
		while (R > L) {
			srav += 2;
			const int i = (L + R) / 2;
			if (arr[i] >= key)
				R = i;
			else
				L = i + 1;
		}
		srav++;
		if (arr[R] == key)
			return 1;
		return 0;
   }

	// Сортировка прямым включением
	void forwardInclude(int a[], const int n, int &perest, int& srav) {
		for (int i = 1; i < n; i++) {
			const int data = a[i];
			int ind = i;
			while (ind > 0 && a[ind - 1] > data) {
				a[ind] = a[ind - 1];
				ind--;
				srav++;
			}
			if (a[ind] != data)
				perest++;
			a[ind] = data;
		}
	}



private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	tree_demonstration->show(textBox1, tree_demonstration->get_count());

}
};
}