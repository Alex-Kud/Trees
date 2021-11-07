#pragma once

#include "Node.h"
#include <stack>
#include <string>
using namespace std;
class AVL {
private:
	Node* root = nullptr; // ������ ������
	int count = 0; // ������� ���������� �����
	int N; // ����������� ������
public:
	// ������������
	AVL();
	AVL(int n);
	int get_count() const { return count; }
	void set_N(int N) { this->N = N; }
	// ���������� ��������
	void add(int val);
	// ���������� �������� (��� ����������)
	void add(int val, int& sr, int& per);
	// �������� ��������
	void remove(int n, string& mess);
	// ����� ����� (� ����������� ���� �� ����)
	void avl_looking(int key, int* path, bool& is_found) const;
	// ����� ����� (��� ���������� ���� �� ����)
	int avl_search(int key, double& sr) const;
	// ����� ����� �������. ������ ������ ���������� ��������
	void left_to_right(int* data, int n) const;
	// ����� ������
	void print_tree(System::Windows::Forms::TextBox^ textBox) const;

private:
	// ��������, ����� �� ������������
	static int need_balance(Node* current);
	// ��������������� ���������� �������� ���� height
	static void fix_height(Node* current);
	// ��������� ������������
	void balance(Node* current);
	// ����� �������
	void LL (Node* current);
	// ������ �������
	void RR (Node* current);
	// ����������� �����
	static void in_order(const Node* current, int* data, const int num, int& c);
};