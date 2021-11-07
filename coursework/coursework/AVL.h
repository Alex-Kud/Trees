#pragma once

#include "Node.h"
#include <stack>
#include <string>
using namespace std;
class AVL {
private:
	Node* root = nullptr; // Корень дерева
	int count = 0; // Текущее количество узлов
	int N; // Размерность дерева
public:
	// Конструкторы
	AVL();
	AVL(int n);
	int get_count() const { return count; }
	void set_N(int N) { this->N = N; }
	// Добавление значения
	void add(int val);
	// Добавление значения (для сортировки)
	void add(int val, int& sr, int& per);
	// Удаление значения
	void remove(int n, string& mess);
	// Поиск ключа (с сохранением пути до него)
	void avl_looking(int key, int* path, bool& is_found) const;
	// Поиск ключа (без сохранения пути до него)
	int avl_search(int key, double& sr) const;
	// Обход слева направо. Вернет список наименьших значений
	void left_to_right(int* data, int n) const;
	// Вывод дерева
	void print_tree(System::Windows::Forms::TextBox^ textBox) const;

private:
	// Проверка, нужна ли балансировка
	static int need_balance(Node* current);
	// Восстанавливает корректное значение поля height
	static void fix_height(Node* current);
	// Выполняет балансировку
	void balance(Node* current);
	// Левый поворот
	void LL (Node* current);
	// Правый поворот
	void RR (Node* current);
	// Рекурсивный обход
	static void in_order(const Node* current, int* data, const int num, int& c);
};