#include "MyForm.h"
#include <Windows.h>
#include <algorithm>
using namespace coursework; // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
// Требуемый метод для поддержки конструктора
void MyForm::InitializeComponent() {
	System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
	System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
	System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
	System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
	System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
	System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
	this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
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
	this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->tabControl1->SuspendLayout();
	this->tabPage1->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
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
	this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->tabControl1->Name = L"tabControl1";
	this->tabControl1->SelectedIndex = 0;
	this->tabControl1->Size = System::Drawing::Size(1929, 1175);
	this->tabControl1->TabIndex = 0;
	// 
	// tabPage1
	// 
	this->tabPage1->BackColor = System::Drawing::Color::LightGreen;
	this->tabPage1->Controls->Add(this->label8);
	this->tabPage1->Controls->Add(this->label7);
	this->tabPage1->Controls->Add(this->dataGridView3);
	this->tabPage1->Controls->Add(this->button4);
	this->tabPage1->Controls->Add(this->label3);
	this->tabPage1->Controls->Add(this->numericUpDown5);
	this->tabPage1->Controls->Add(this->groupBox4);
	this->tabPage1->Controls->Add(this->groupBox3);
	this->tabPage1->Location = System::Drawing::Point(4, 46);
	this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->tabPage1->Name = L"tabPage1";
	this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->tabPage1->Size = System::Drawing::Size(1921, 1125);
	this->tabPage1->TabIndex = 0;
	this->tabPage1->Text = L"Алгоритмы сортировки и поиска";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(868, 339);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(182, 37);
	this->label8->TabIndex = 6;
	this->label8->Text = L"сортировки";
	this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(879, 302);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(160, 37);
	this->label7->TabIndex = 5;
	this->label7->Text = L"100 после";
	this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// dataGridView3
	// 
	this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Info;
	this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
		this->Column7,
			this->Column8
	});
	this->dataGridView3->GridColor = System::Drawing::SystemColors::Info;
	this->dataGridView3->Location = System::Drawing::Point(862, 390);
	this->dataGridView3->Name = L"dataGridView3";
	this->dataGridView3->RowHeadersVisible = false;
	this->dataGridView3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
	this->dataGridView3->RowTemplate->Height = 28;
	this->dataGridView3->Size = System::Drawing::Size(199, 539);
	this->dataGridView3->TabIndex = 4;
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(862, 167);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(202, 114);
	this->button4->TabIndex = 3;
	this->button4->Text = L"Поиск и сортировка";
	this->button4->UseVisualStyleBackColor = true;
	this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_click);
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(855, 8);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(206, 74);
	this->label3->TabIndex = 2;
	this->label3->Text = L"Размерность\r\nмассива";
	this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// numericUpDown5
	// 
	this->numericUpDown5->BackColor = System::Drawing::SystemColors::Info;
	this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->numericUpDown5->Location = System::Drawing::Point(862, 85);
	this->numericUpDown5->Name = L"numericUpDown5";
	this->numericUpDown5->Size = System::Drawing::Size(202, 67);
	this->numericUpDown5->TabIndex = 1;
	// 
	// groupBox4
	// 
	this->groupBox4->BackColor = System::Drawing::Color::PaleGreen;
	this->groupBox4->Controls->Add(this->dataGridView2);
	this->groupBox4->Controls->Add(this->chart2);
	this->groupBox4->Location = System::Drawing::Point(1077, 8);
	this->groupBox4->Name = L"groupBox4";
	this->groupBox4->Size = System::Drawing::Size(832, 930);
	this->groupBox4->TabIndex = 0;
	this->groupBox4->TabStop = false;
	this->groupBox4->Text = L"Результаты сортировки";
	// 
	// dataGridView2
	// 
	this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Info;
	dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
	dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Info;
	dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
	dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
	dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::Info;
	dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
	this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
	this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
		this->Column4,
			this->Column5, this->Column6
	});
	this->dataGridView2->GridColor = System::Drawing::SystemColors::Info;
	this->dataGridView2->Location = System::Drawing::Point(6, 42);
	this->dataGridView2->Name = L"dataGridView2";
	this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
	this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
	this->dataGridView2->RowTemplate->Height = 38;
	this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
	this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
	this->dataGridView2->Size = System::Drawing::Size(826, 246);
	this->dataGridView2->TabIndex = 2;
	// 
	// Column4
	// 
	this->Column4->HeaderText = L"Время";
	this->Column4->MinimumWidth = 8;
	this->Column4->Name = L"Column4";
	this->Column4->Width = 90;
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
	chartArea5->Name = L"ChartArea1";
	this->chart2->ChartAreas->Add(chartArea5);
	legend5->Name = L"Legend1";
	this->chart2->Legends->Add(legend5);
	this->chart2->Location = System::Drawing::Point(6, 294);
	this->chart2->Name = L"chart2";
	series9->BorderWidth = 5;
	series9->ChartArea = L"ChartArea1";
	series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	series9->Legend = L"Legend1";
	series9->LegendText = L"СПВ";
	series9->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
	series9->Name = L"Series1";
	series10->BorderWidth = 5;
	series10->ChartArea = L"ChartArea1";
	series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	series10->Legend = L"Legend1";
	series10->LegendText = L"AVL ";
	series10->Name = L"Series2";
	this->chart2->Series->Add(series9);
	this->chart2->Series->Add(series10);
	this->chart2->Size = System::Drawing::Size(820, 627);
	this->chart2->TabIndex = 0;
	this->chart2->Text = L"chart2";
	// 
	// groupBox3
	// 
	this->groupBox3->BackColor = System::Drawing::Color::PaleGreen;
	this->groupBox3->Controls->Add(this->dataGridView1);
	this->groupBox3->Controls->Add(this->chart1);
	this->groupBox3->Location = System::Drawing::Point(8, 8);
	this->groupBox3->Name = L"groupBox3";
	this->groupBox3->Size = System::Drawing::Size(832, 930);
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
	this->dataGridView1->Name = L"dataGridView1";
	this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
	this->dataGridView1->RowHeadersWidth = 155;
	this->dataGridView1->RowTemplate->Height = 38;
	this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
	this->dataGridView1->Size = System::Drawing::Size(826, 246);
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
	chartArea6->Name = L"ChartArea1";
	this->chart1->ChartAreas->Add(chartArea6);
	legend6->Name = L"Legend1";
	this->chart1->Legends->Add(legend6);
	this->chart1->Location = System::Drawing::Point(0, 304);
	this->chart1->Name = L"chart1";
	series11->BorderWidth = 5;
	series11->ChartArea = L"ChartArea1";
	series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	series11->Legend = L"Legend1";
	series11->LegendText = L"ОБП";
	series11->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
	series11->Name = L"Series1";
	series12->BorderWidth = 5;
	series12->ChartArea = L"ChartArea1";
	series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
	series12->Legend = L"Legend1";
	series12->LegendText = L"AVL";
	series12->Name = L"Series2";
	this->chart1->Series->Add(series11);
	this->chart1->Series->Add(series12);
	this->chart1->Size = System::Drawing::Size(826, 617);
	this->chart1->TabIndex = 0;
	this->chart1->Text = L"chart1";
	// 
	// tabPage2
	// 
	this->tabPage2->BackColor = System::Drawing::Color::LightGreen;
	this->tabPage2->Controls->Add(this->groupBox2);
	this->tabPage2->Controls->Add(this->groupBox1);
	this->tabPage2->Location = System::Drawing::Point(4, 46);
	this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->tabPage2->Name = L"tabPage2";
	this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->tabPage2->Size = System::Drawing::Size(1921, 1125);
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
	this->groupBox2->Location = System::Drawing::Point(586, 25);
	this->groupBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->groupBox2->Name = L"groupBox2";
	this->groupBox2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->groupBox2->Size = System::Drawing::Size(1299, 905);
	this->groupBox2->TabIndex = 1;
	this->groupBox2->TabStop = false;
	this->groupBox2->Text = L"Визуализация дерева";
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(37, 479);
	this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(273, 37);
	this->label5->TabIndex = 3;
	this->label5->Text = L"После изменений:";
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(36, 51);
	this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(225, 37);
	this->label4->TabIndex = 2;
	this->label4->Text = L"До изменений:";
	// 
	// textBox2
	// 
	this->textBox2->BackColor = System::Drawing::SystemColors::Info;
	this->textBox2->Location = System::Drawing::Point(43, 512);
	this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->textBox2->Multiline = true;
	this->textBox2->Name = L"textBox2";
	this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
	this->textBox2->Size = System::Drawing::Size(1216, 380);
	this->textBox2->TabIndex = 1;
	// 
	// textBox1
	// 
	this->textBox1->BackColor = System::Drawing::SystemColors::Info;
	this->textBox1->Location = System::Drawing::Point(44, 94);
	this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->textBox1->Multiline = true;
	this->textBox1->Name = L"textBox1";
	this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
	this->textBox1->Size = System::Drawing::Size(1216, 380);
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
	this->groupBox1->Location = System::Drawing::Point(28, 25);
	this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->groupBox1->Name = L"groupBox1";
	this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->groupBox1->Size = System::Drawing::Size(522, 905);
	this->groupBox1->TabIndex = 0;
	this->groupBox1->TabStop = false;
	this->groupBox1->Text = L"Взаимодействие с деревом";
	// 
	// button6
	// 
	this->button6->Location = System::Drawing::Point(38, 598);
	this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->button6->Name = L"button6";
	this->button6->Size = System::Drawing::Size(436, 112);
	this->button6->TabIndex = 12;
	this->button6->Text = L"Начать сначала";
	this->button6->UseVisualStyleBackColor = true;
	this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_click);
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(33, 715);
	this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(200, 37);
	this->label6->TabIndex = 11;
	this->label6->Text = L"Информация";
	// 
	// textBox3
	// 
	this->textBox3->BackColor = System::Drawing::SystemColors::Info;
	this->textBox3->Location = System::Drawing::Point(38, 757);
	this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->textBox3->Multiline = true;
	this->textBox3->Name = L"textBox3";
	this->textBox3->Size = System::Drawing::Size(436, 89);
	this->textBox3->TabIndex = 10;
	this->textBox3->Text = L"[n] - количество повторов";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label2->Location = System::Drawing::Point(269, 415);
	this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(121, 64);
	this->label2->TabIndex = 8;
	this->label2->Text = L"НА:";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label1->Location = System::Drawing::Point(28, 410);
	this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(84, 64);
	this->label1->TabIndex = 7;
	this->label1->Text = L"С:";
	// 
	// numericUpDown4
	// 
	this->numericUpDown4->BackColor = System::Drawing::SystemColors::Info;
	this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->numericUpDown4->Location = System::Drawing::Point(280, 479);
	this->numericUpDown4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->numericUpDown4->Name = L"numericUpDown4";
	this->numericUpDown4->Size = System::Drawing::Size(194, 109);
	this->numericUpDown4->TabIndex = 6;
	// 
	// numericUpDown3
	// 
	this->numericUpDown3->BackColor = System::Drawing::SystemColors::Info;
	this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->numericUpDown3->Location = System::Drawing::Point(39, 479);
	this->numericUpDown3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->numericUpDown3->Name = L"numericUpDown3";
	this->numericUpDown3->Size = System::Drawing::Size(194, 109);
	this->numericUpDown3->TabIndex = 5;
	// 
	// numericUpDown2
	// 
	this->numericUpDown2->BackColor = System::Drawing::SystemColors::Info;
	this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->numericUpDown2->Location = System::Drawing::Point(280, 176);
	this->numericUpDown2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->numericUpDown2->Name = L"numericUpDown2";
	this->numericUpDown2->Size = System::Drawing::Size(194, 109);
	this->numericUpDown2->TabIndex = 4;
	// 
	// numericUpDown1
	// 
	this->numericUpDown1->BackColor = System::Drawing::SystemColors::Info;
	this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->numericUpDown1->Location = System::Drawing::Point(280, 54);
	this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->numericUpDown1->Name = L"numericUpDown1";
	this->numericUpDown1->Size = System::Drawing::Size(194, 109);
	this->numericUpDown1->TabIndex = 3;
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(39, 298);
	this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(435, 112);
	this->button3->TabIndex = 2;
	this->button3->Text = L"Изменить значение";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_click);
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(40, 176);
	this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(194, 112);
	this->button2->TabIndex = 1;
	this->button2->Text = L"Удалить значение";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_click);
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(42, 54);
	this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(194, 112);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Добавить значение";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_click);
	// 
	// Column7
	// 
	this->Column7->HeaderText = L"СПВ";
	this->Column7->MinimumWidth = 8;
	this->Column7->Name = L"Column7";
	this->Column7->Width = 60;
	// 
	// Column8
	// 
	this->Column8->HeaderText = L"AVL";
	this->Column8->MinimumWidth = 8;
	this->Column8->Name = L"Column8";
	this->Column8->Width = 54;
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(1924, 983);
	this->Controls->Add(this->tabControl1);
	this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	this->Name = L"MyForm";
	this->Text = L"CourseWork";
	this->tabControl1->ResumeLayout(false);
	this->tabPage1->ResumeLayout(false);
	this->tabPage1->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
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
void MyForm::my_form_load(Object^ sender, EventArgs^ e) {	}
// Добавление элемента
void MyForm::button1_click(Object^ sender, EventArgs^ e) {
	tree_demonstration->print_tree(textBox1);
	const int add_value = Convert::ToInt32(numericUpDown1->Value);
	const string message_add = "Элемент " + to_string(add_value) + " успешно добавлен";
	tree_demonstration->add(add_value);
	tree_demonstration->print_tree(textBox2);
	textBox3->Text = gcnew String(message_add.c_str());
}
// Удаление значения
void MyForm::button2_click(Object^ sender, EventArgs^ e) {
	string message_remove;
	if (tree_demonstration == nullptr) {
		message_remove = "Операция невозможна! Дерево пустое";
		textBox3->Text = gcnew String(message_remove.c_str());
		return;
	}
	else {
		tree_demonstration->print_tree(textBox1);
		const int remove_value = Convert::ToInt32(numericUpDown2->Value);
		message_remove = "Элемент " + to_string(remove_value) + " успешно удалён";
		tree_demonstration->remove(remove_value, message_remove);
		tree_demonstration->print_tree(textBox2);
		textBox3->Text = gcnew String(message_remove.c_str());
	}

}
// Изменение значения
void MyForm::button3_click(Object^ sender, EventArgs^ e) {
	string message_change;
	if (tree_demonstration == nullptr) {
		message_change = "Операция невозможна! Дерево пустое";
		textBox3->Text = gcnew String(message_change.c_str());
		return;
	}
	else {
		tree_demonstration->print_tree(textBox1);
		const int last = Convert::ToInt32(numericUpDown3->Value);
		const int future = Convert::ToInt32(numericUpDown4->Value);
		tree_demonstration->remove(last, message_change);
		if (message_change != "Значение не найдено, значит удалять нечего") {
			tree_demonstration->add(future);
			message_change = "Значение " + to_string(last) + " успешно заменено на " + to_string(future);
		}
		else
			message_change = "Значение " + to_string(last) + " не найдено! Операция невозможна!";
		tree_demonstration->print_tree(textBox2);

		textBox3->Text = gcnew String(message_change.c_str());
	}
}
// Поиск и сортировка
void MyForm::button4_click(Object^ sender, EventArgs^ e) {
	// Генерация строк таблица, если ещё не произошла
	if (search_table_flag) {
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
		for (int i = 0; i < 100; ++i)
			dataGridView3->Rows->Add();
		search_table_flag = false;
	}
	N = Convert::ToInt32(numericUpDown5->Value);
	int* arr_values = new int[N];	// Массив значений для поиск
	int* arr_sorting = new int[N];	// Массив значений для сортировки
	int* arr_keys = new int[N];		// Массив ключей для поиска
	for (int i = 0; i < N; ++i) {
		arr_values[i] = rand() % 100;
		arr_sorting[i] = arr_values[i];
		arr_keys[i] = rand() % 200;
	}

#pragma region Search
	chart1->Series["Series1"]->Points->Clear();	// Очистка графиков
	chart1->Series["Series2"]->Points->Clear();
	for (int i = N / 10; i <= N; i = i + N / 10) {
		// Поиск в AVL-дереве
		auto begin_search_tree_chart = chrono::high_resolution_clock::now(); // Время начала работы алгоритма
		tree = new AVL(i); // Создание нового дерева
		for (int j = 0; j < i; ++j) // Заполнение дерева
			tree->add(arr_values[j]); 
		double comparison_tree_search_chart = 0; // Количество сравнений
		int found_quantity_tree_chart = 0;	// Количество найденных ключей
		for (int j = 0; j < i; ++j) // Поиск ключей в дереве
			found_quantity_tree_chart += tree->avl_search(arr_keys[j], comparison_tree_search_chart);
		auto end_search_tree_chart = chrono::high_resolution_clock::now(); // Время завершения работы алгоритма
		auto time_search_tree_chart = chrono::duration_cast<chrono::duration < double>>(end_search_tree_chart - begin_search_tree_chart);
		chart1->Series["Series2"]->Points->AddXY(i, time_search_tree_chart.count() * 10000);

		// Бинарый поиск
		auto begin_binary_search_chart = chrono::high_resolution_clock::now(); // Время начала работы алгоритма
		sort(arr_values, arr_values + i); // Сортировка массива для бинарного поиска (сортировка прямым включением примерно в 3 раза дольше)
		double comparison_binary_search_chart = 0;	// Количество сравнений
		int found_quantity_binary_chart = 0;		// Количество найденных элементов
		for (int j = 0; j < i; ++j)	// Бианарный поиск
			found_quantity_binary_chart += opt_bin_looking(arr_values, i, arr_keys[j], comparison_binary_search_chart);
		auto end_binary_search_chart = chrono::high_resolution_clock::now(); // Время завершения работы алгоритма
		auto time_binary_search_chart = chrono::duration_cast<chrono::duration < double>>(end_binary_search_chart - begin_binary_search_chart);

		chart1->Series["Series1"]->Points->AddXY(i, time_binary_search_chart.count() * 10000);

		if (i == (N / 10) * 10) {
			// Заполнение таблицы с характеристиками поиска
			dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(time_binary_search_chart.count() * 10000);
			dataGridView1->Rows[0]->Cells[1]->Value = found_quantity_binary_chart;
			dataGridView1->Rows[0]->Cells[2]->Value = comparison_binary_search_chart / N;
			dataGridView1->Rows[1]->Cells[0]->Value = Convert::ToString(time_search_tree_chart.count() * 10000);
			dataGridView1->Rows[1]->Cells[1]->Value = found_quantity_tree_chart;
			dataGridView1->Rows[1]->Cells[2]->Value = comparison_tree_search_chart / N;
		}
	}
#pragma endregion

#pragma region Sorting
	chart2->Series["Series1"]->Points->Clear();	// Очистка графиков
	chart2->Series["Series2"]->Points->Clear();
	for (int i = N / 10; i <= N; i = i + N / 10) {
		for (int k = 0; k < N; ++k) // Обновление значений массива
			arr_sorting[k] = rand() % 100;

		// AVL-сортировка
		const auto begin_tree_sorting_chart = chrono::high_resolution_clock::now(); // Время начала работы алгоритма
		tree = new AVL(i);  // Создание нового дерева
		int comparisons_tree_sort_chart = 0, permutations_tree_chart = 0;
		for (int j = 0; j < i; ++j)	// Заполнение дерева
			tree->add(arr_sorting[j], comparisons_tree_sort_chart, permutations_tree_chart);
		const auto end_tree_sorting_chart = chrono::high_resolution_clock::now(); // Время завершения работы алгоритма
		const auto time_tree_sorting_chart = chrono::duration_cast<chrono::duration < double>>(end_tree_sorting_chart - begin_tree_sorting_chart);
		chart2->Series["Series2"]->Points->AddXY(i, time_tree_sorting_chart.count() * 10000);

		// Сортировка прямым включением
		const auto begin_direct_sorting_chart = chrono::high_resolution_clock::now();// Время начала работы алгоритма
		int comparisons_direct_sort_chart = 0, permutations_direct_sort_chart = 0;
		forward_include(arr_sorting, i, permutations_direct_sort_chart, comparisons_direct_sort_chart); // Сортировка прямым включением
		const auto end_direct_sorting_chart = chrono::high_resolution_clock::now(); // Время завершения работы алгоритма
		const auto time_direct_sorting_chart = chrono::duration_cast<chrono::duration < double>>(end_direct_sorting_chart - begin_direct_sorting_chart);

		chart2->Series["Series1"]->Points->AddXY(i, time_direct_sorting_chart.count() * 10000);

		if (i == (N / 10) * 10) {
			// Заполнение таблицы с характеристиками поиска
			dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString(time_direct_sorting_chart.count() * 10000);
			dataGridView2->Rows[0]->Cells[1]->Value = comparisons_direct_sort_chart;
			dataGridView2->Rows[0]->Cells[2]->Value = permutations_direct_sort_chart;
			dataGridView2->Rows[1]->Cells[0]->Value = Convert::ToString(time_tree_sorting_chart.count() * 10000);
			dataGridView2->Rows[1]->Cells[1]->Value = comparisons_tree_sort_chart;
			dataGridView2->Rows[1]->Cells[2]->Value = permutations_tree_chart;
			auto arr_avl_sort = new int[N];
			tree->left_to_right(arr_avl_sort, N);
			for (int k = 0; k < 100; ++k) {
				dataGridView3->Rows[k]->Cells[0]->Value = arr_sorting[k];
				dataGridView3->Rows[k]->Cells[1]->Value = arr_avl_sort[k];
			}
		}
	}
#pragma endregion
	delete[] arr_values; // Очистка памяти
	delete[] arr_sorting;
	delete[] arr_keys;
}
// Начать сначала
void MyForm::button6_click(Object^ sender, EventArgs^ e) {
	tree_demonstration = new AVL();
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "[n] - количество повторов \n Вы успешно начали заново";
}
// Оптимальный бинарный поиск
int MyForm::opt_bin_looking(int arr[], const int n, const int key, double& comparisons) {
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
void MyForm::forward_include(int a[], const int n, int& permutations, int& comparisons) {
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
void MyForm::forward_include(int a[], const int n) {
	for (int i = 1; i < n; i++) {
		const int data = a[i];
		int ind = i;
		while (ind > 0 && a[ind - 1] > data) {
			a[ind] = a[ind - 1];
			ind--;
		}
		a[ind] = data;
	}
}