#pragma once
#include <chrono>
#include "AVL.h"
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
			numericUpDown5->Maximum = 50000;
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
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


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->tabPage1->BackColor = System::Drawing::Color::LightGreen;
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
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(575, 143);
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
			this->numericUpDown5->BackColor = System::Drawing::SystemColors::Info;
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
			this->groupBox4->BackColor = System::Drawing::Color::PaleGreen;
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
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView2->GridColor = System::Drawing::SystemColors::Info;
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
			this->Column6->HeaderText = L"Перестановки/\nБалансировки";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 328;
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::SystemColors::Info;
			this->chart2->BorderlineColor = System::Drawing::SystemColors::Info;
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(4, 216);
			this->chart2->Margin = System::Windows::Forms::Padding(2);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->LegendText = L"СПВ";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->LegendText = L"AVL ";
			series2->Name = L"Series2";
			this->chart2->Series->Add(series1);
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(547, 495);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::PaleGreen;
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
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Info;
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
			this->chart1->BackColor = System::Drawing::SystemColors::Info;
			this->chart1->BorderlineColor = System::Drawing::SystemColors::Info;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(0, 216);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->LegendText = L"ОБП";
			series3->Name = L"Series1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->LegendText = L"AVL";
			series4->Name = L"Series2";
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(551, 495);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LightGreen;
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1278, 726);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Работа с деревом";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::PaleGreen;
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(391, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(866, 688);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Визуализация дерева";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 358);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"После изменений:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"До изменений:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->Location = System::Drawing::Point(29, 386);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(812, 285);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(29, 61);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(812, 285);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::PaleGreen;
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3);
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
			// button6
			// 
			this->button6->Location = System::Drawing::Point(28, 490);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(288, 82);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Начать сначала";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 584);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Информация";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Info;
			this->textBox3->Location = System::Drawing::Point(28, 612);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(288, 59);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"[n] - количество повторов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(180, 341);
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
			this->label1->Location = System::Drawing::Point(21, 341);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 42);
			this->label1->TabIndex = 7;
			this->label1->Text = L"С:";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::SystemColors::Info;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown4->Location = System::Drawing::Point(187, 386);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(129, 80);
			this->numericUpDown4->TabIndex = 6;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::SystemColors::Info;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown3->Location = System::Drawing::Point(28, 386);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(129, 80);
			this->numericUpDown3->TabIndex = 5;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::Info;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(187, 136);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(129, 80);
			this->numericUpDown2->TabIndex = 4;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::Info;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(187, 35);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(129, 80);
			this->numericUpDown1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 240);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(288, 82);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Изменить значение";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(28, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 82);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Удалить значение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 82);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить значение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {	}

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
	auto arr_values = new int[N];
	auto arr_sorting = new int[N];
	auto arr_keys = new int[N];
	for (int i = 0; i < N; ++i) {
		arr_values[i] = rand() % 100;
		arr_sorting[i] = arr_values[i];
		arr_keys[i] = rand() % 200;
	}
#pragma region Table searching
	// Поиск в AVL-дереве
	const auto begin_search_tree = chrono::high_resolution_clock::now();
	for (int i = 0; i < N; ++i)
		tree->add(arr_values[i]);
	double sr = 0;
	int found_quantity = 0;
	for (int i = 0; i < N; ++i)
		found_quantity += tree->avlSearch(arr_keys[i], sr);
	const auto end_search_tree = chrono::high_resolution_clock::now();
	const auto time_search_tree = chrono::duration_cast<chrono::duration < double>>(end_search_tree - begin_search_tree);
	// Бинарый поиск
	const auto beginBinarySearch = chrono::high_resolution_clock::now();
	sort(arr_values, arr_values + N);
	double srav = 0;
	int found_quantity_binary = 0;
	for (int i = 0; i < N; ++i)
		found_quantity_binary += opt_bin_looking(arr_values, N, arr_keys[i], srav);
	const auto end_binary_search = chrono::high_resolution_clock::now();
	const auto time_binary_search = chrono::duration_cast<chrono::duration < double>>(end_binary_search - beginBinarySearch);
#pragma endregion

#pragma region Input into table searching
	dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(time_binary_search.count()*10000);
	dataGridView1->Rows[0]->Cells[1]->Value = found_quantity_binary;
	dataGridView1->Rows[0]->Cells[2]->Value = srav / N;
	dataGridView1->Rows[1]->Cells[0]->Value = Convert::ToString(time_search_tree.count()*10000);
	dataGridView1->Rows[1]->Cells[1]->Value = found_quantity;
	dataGridView1->Rows[1]->Cells[2]->Value = sr / N;
#pragma endregion

#pragma region Graphic searching
	chart1->Series["Series1"]->Points->Clear();
	chart1->Series["Series2"]->Points->Clear();
	for (int i = N / 10; i <= N; i = i + N / 10) {
		// Поиск в AVL-дереве
		auto begin_binary_search2 = chrono::high_resolution_clock::now();
		sort(arr_values, arr_values + i);
		double srav2 = 0;
		int found_quantity_binary2 = 0;
		for (int j = 0; j < i; ++j)
			found_quantity_binary2 += opt_bin_looking(arr_values, i, arr_keys[j], srav2);
		auto endBinarySearch2 = chrono::high_resolution_clock::now();
		auto timeBinarySearch2 = chrono::duration_cast<chrono::duration < double>>(endBinarySearch2 - begin_binary_search2);
		chart1->Series["Series1"]->Points->AddXY( i, timeBinarySearch2.count() * 10000);
		// Бинарый поиск
		auto beginSearchTree2 = chrono::high_resolution_clock::now();
		tree = new AVL(N);
		for (int j = 0; j < i; ++j)
			tree->add(arr_values[j]);
		double sr2 = 0;
		int found_quantity2 = 0;
		for (int j = 0; j < i; ++j)
			found_quantity2 += tree->avlSearch(arr_keys[j], sr2);
		auto endSearchTree2 = chrono::high_resolution_clock::now();
		auto timeSearchTree2 = chrono::duration_cast<chrono::duration < double>>(endSearchTree2 - beginSearchTree2);
		chart1->Series["Series2"]->Points->AddXY(i, timeSearchTree2.count() * 10000);
	}
#pragma endregion

#pragma region Table sorting
	// AVL-сортировка
	const auto begin_tree_sorting = chrono::high_resolution_clock::now();
	int comparisons_tree_sort = 0, permutations_tree = 0;
	tree = new AVL(N);
	for (int i = 0; i < N; ++i)
		tree->add(arr_sorting[i], comparisons_tree_sort, permutations_tree);
	const auto end_tree_sorting = chrono::high_resolution_clock::now();
	const auto time_tree_sorting = chrono::duration_cast<chrono::duration < double>>(end_tree_sorting - begin_tree_sorting);
	// Сортировка прямым включением
	const auto begin_direct_sorting = chrono::high_resolution_clock::now();
	int comparisons_direct_sort = 0, permutations_direct_sort = 0;
	forward_include(arr_sorting, N, permutations_direct_sort, comparisons_direct_sort);
	const auto end_direct_sorting = chrono::high_resolution_clock::now();
	const auto time_direct_sorting = chrono::duration_cast<chrono::duration < double>>(end_direct_sorting - begin_direct_sorting);
#pragma endregion

#pragma region Input into table sorting
	dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString(time_direct_sorting.count() * 10000);
	dataGridView2->Rows[0]->Cells[1]->Value = comparisons_direct_sort;
	dataGridView2->Rows[0]->Cells[2]->Value = permutations_direct_sort;
	dataGridView2->Rows[1]->Cells[0]->Value = Convert::ToString(time_tree_sorting.count() * 10000);
	dataGridView2->Rows[1]->Cells[1]->Value = comparisons_tree_sort;
	dataGridView2->Rows[1]->Cells[2]->Value = permutations_tree;
#pragma endregion

#pragma region Grafic sorting
	chart2->Series["Series1"]->Points->Clear();
	chart2->Series["Series2"]->Points->Clear();
	for (int i = N / 10; i <= N; i = i + N / 10) {
		for (int k = 0; k < N; ++k) 
			arr_sorting[k] = rand() % 100;
		// AVL-сортировка
		const auto begin_tree_sorting_chart = chrono::high_resolution_clock::now();
		tree = new AVL(i);
		int comparisons_tree_sort_chart = 0, permutations_tree_chart = 0;
		for (int j = 0; j < i; ++j)
			tree->add(arr_sorting[j], comparisons_tree_sort, permutations_tree);
		double sr2 = 0;
		int found_quantity2 = 0;
		for (int j = 0; j < i; ++j)
			found_quantity2 += tree->avlSearch(arr_keys[j], sr2);
		const auto end_tree_sorting_chart = chrono::high_resolution_clock::now();
		const auto time_tree_sorting_chart = chrono::duration_cast<chrono::duration < double>>(end_tree_sorting_chart - begin_tree_sorting_chart);
		chart2->Series["Series2"]->Points->AddXY(i, time_tree_sorting_chart.count() * 10000);

		// Сортировка прямым включением
		const auto begin_direct_sorting_chart = chrono::high_resolution_clock::now();
		int comparisons_direct_sort_chart = 0, permutations_direct_sort_chart = 0;
		forward_include(arr_sorting, /*N/ */ i, permutations_direct_sort, comparisons_direct_sort);
		const auto end_direct_sorting_chart = chrono::high_resolution_clock::now();
		const auto time_direct_sorting_chart = chrono::duration_cast<chrono::duration < double>>(end_direct_sorting_chart - begin_direct_sorting_chart);

		chart2->Series["Series1"]->Points->AddXY(i, time_direct_sorting_chart.count() * 10000);
	}
#pragma endregion
}

	
	// Добавление элемента
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	tree_demonstration->printTree(textBox1);
	const int add_value = Convert::ToInt32(numericUpDown1->Value);
	const string message_add = "Элемент " + to_string(add_value) + " успешно добавлен";
	tree_demonstration->add(add_value);
	tree_demonstration->printTree(textBox2);
	textBox3->Text = gcnew System::String(message_add.c_str());
}
	// Удаление значения
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	string message_remove;
	if (tree_demonstration == nullptr) {
		message_remove = "Операция невозможна! Дерево пустое";
		textBox3->Text = gcnew System::String(message_remove.c_str());
		return;
	}
	else{
		tree_demonstration->printTree(textBox1);
		const int remove_value = Convert::ToInt32(numericUpDown2->Value);
		message_remove = "Элемент " + to_string(remove_value) + " успешно удалён";
		tree_demonstration->remove(remove_value, message_remove);
		tree_demonstration->printTree(textBox2);
		textBox3->Text = gcnew System::String(message_remove.c_str());
	}

}
	// Изменение значения
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	string message_change;
	if (tree_demonstration == nullptr) {
		message_change = "Операция невозможна! Дерево пустое";
		textBox3->Text = gcnew System::String(message_change.c_str());
		return;
	}
	else {
		tree_demonstration->printTree(textBox1);
		const int last = Convert::ToInt32(numericUpDown3->Value);
		const int future = Convert::ToInt32(numericUpDown4->Value);
		tree_demonstration->remove(last, message_change);
		if (message_change != "Значение не найдено, значит удалять нечего") {
			tree_demonstration->add(future);
			message_change = "Значение " + to_string(last) + " успешно заменено на " + to_string(future);
		}
		else 
			message_change = "Значение " + to_string(last) + " не найдено! Операция невозможна!";
		tree_demonstration->printTree(textBox2);
		
		textBox3->Text = gcnew System::String(message_change.c_str());
	}
}
	// Начать сначала
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	tree_demonstration = new AVL();
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "[n] - количество повторов \n Вы успешно начали заново";;
}

	// Оптимальный бинарный поиск
	static int opt_bin_looking(int arr[], const int n, const int key, double& comparisons) {
		int L = 0, R = n;
		while (R > L) {
			comparisons += 2;
			const int i = (L + R) / 2;
			if (arr[i] >= key)
				R = i;
			else
				L = i + 1;
		}
		comparisons++;
		if (arr[R] == key)
			return 1;
		return 0;
   }

	// Сортировка прямым включением
	static void forward_include(int a[], const int n, int &permutations, int& comparisons) {
		for (int i = 1; i < n; i++) {
			const int data = a[i];
			int ind = i;
			while (ind > 0 && a[ind - 1] > data) {
				a[ind] = a[ind - 1];
				ind--;
				comparisons++;
			}
			if (a[ind] != data)
				permutations++;
			a[ind] = data;
		}
	}
};
}