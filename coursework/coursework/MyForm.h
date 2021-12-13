#pragma once
#include <chrono>
#include "AVL.h"
namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace Collections;
	using namespace Windows::Forms;
	using namespace Data;
	using namespace Drawing;

	public ref class MyForm : public Form {
	public:
		MyForm(void) {
			tree = new AVL();
			tree_demo = new AVL();
			N = 10000;
			InitializeComponent();
			numericUpDown1->Minimum = 0;
			numericUpDown1->Maximum = 1000;
			numericUpDown2->Minimum = 0;
			numericUpDown2->Maximum = 1000;
			numericUpDown3->Minimum = 0;
			numericUpDown3->Maximum = 1000;
			numericUpDown4->Minimum = 0;
			numericUpDown4->Maximum = 1000;
			numericUpDown5->Minimum = 100;
			numericUpDown5->Maximum = 50000;
		}
	private:
		AVL* tree;		// Объявление дерева для поиска сортировки
		AVL* tree_demo;	// Объявление дерева для демонстрации работы
		int N;
		bool search_table_flag = true;

		Button^ button1, ^ button2, ^ button3, ^ button4, ^ button6;
		DataGridView^ dataGridView1, ^ dataGridView2;
		DataGridViewTextBoxColumn^ Column1, ^ Column2, ^ Column3;

		GroupBox^ groupBox1, ^ groupBox2, ^ groupBox3, ^ groupBox4;
		NumericUpDown^ numericUpDown1, ^ numericUpDown2, ^ numericUpDown3, ^ numericUpDown4, ^ numericUpDown5;
		TabControl^ tabControl1;
		TabPage^ tabPage1, ^ tabPage2;

		TextBox^ textBox1, ^ textBox2, ^ textBox3;
		Windows::Forms::Label^ label1;
		Windows::Forms::Label^ label2;
		Windows::Forms::Label^ label3;
		Windows::Forms::Label^ label4;
		Windows::Forms::Label^ label5;
		Windows::Forms::Label^ label6;
		DataVisualization::Charting::Chart^ chart2;
		DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;

		// Обязательная переменная конструктора.
		   System::ComponentModel::Container^ components;
	protected:
		~MyForm() {
			if (!components) return;
			tree->clear(tree->get_root());				// Освобождение памяти дерева для поиска и сортировок
			tree_demo->clear(tree_demo->get_root());	// Освобождение памяти дерева для демонстрации работы
			delete components;
		}
		// Требуемый метод для поддержки конструктора
		void InitializeComponent(void);
		static Void my_form_load(Object^ sender, EventArgs^ e);
		// Добавление элемента
		Void button1_click(Object^ sender, EventArgs^ e);
		// Удаление значения
		Void button2_click(Object^ sender, EventArgs^ e);
		// Изменение значения
		Void button3_click(Object^ sender, EventArgs^ e);
		// Поиск и сортировка
		Void button4_click(Object^ sender, EventArgs^ e);
		// Начать сначала
		Void button6_click(Object^ sender, EventArgs^ e);
		// Оптимальный бинарный поиск
		static int opt_bin_looking(int arr[], const int n, const int key, double& comparisons);
		// Сортировка прямым включением
		static void forward_include(int a[], const int n, int& permutations, int& comparisons);
		static void forward_include(int a[], const int n);
	};
}