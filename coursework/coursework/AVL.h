#pragma once
#include <iostream>

#include "Node.h"
#include "isFoundInAvl.h"
#include <list>
#include <stack>
#include <cmath>
#include <string>
using namespace std;
class AVL {
private:
	Node* root = nullptr;
	int count = 0;
	int N;
/// <summary>
/// �������� list �� ������������ ������ � ������������ root.height
/// </summary>
public:
	AVL() {
		root = nullptr;
		count = 1;
		N = 10000;
	}
	AVL(int n) {
		root = nullptr;
		count = 1;
		N = n;
	}
	int get_count() const { return count; }
	void set_N(int N) { this->N = N; }
	// ���������� ��������
	void add(int val) {
		// ������ ������
		if (root == nullptr)
			root = new Node(val);
		// ������ �� ������
		else {
			Node* current = root;
			bool isEnd = false;  // ����� ������
			// ���� � ����������� ������� - false - ����, true - �����
			bool* patha = new bool[N];
			// ����������, ����� ��������� ����������� �� ������ ������ (���� �� ������ � ����� ������� ������)
			// ���� ����������� ������� - true
			bool isAdd = false;
			int c = 0;
			// ���� �� ��������� ����� ������
			while (!isEnd) {
				// ���� �������� �����
				if (val == current->get_value()) {
					current->set_same(current->get_same() + 1);
					count++;
					isEnd = true;
				}
				// ���� �������� ������ �����
				else if (val < current->get_value()) {
					// ����� �� �����
					if (current->get_left() == nullptr) {
						// �������� �������
						if (current->get_right() == nullptr)
							isAdd = true;
						current->set_left(new Node(val, current));
						count++;
						isEnd = true;
					}
					else {
						current = current->get_left();
						patha[c] = false;
					}
				}
				// ���� �������� ������ �����
				else {
					// ����� �� �����
					if (current->get_right() == nullptr) {
						// �������� �������
						if (current->get_left() == nullptr)
							isAdd = true;
						current->set_right(new Node(val, current));
						count++;
						isEnd = true;
					}
					else {
						current = current->get_right();
						patha[c] = true;
					}
				}
				
				// ���� �������� �������, ������ ����������� height
				if (isAdd) {
					current = root;
					current->set_height(current->get_height() + 1);
					//����������� �������� ������ height �� ���� �������
					for (int j = 0; j < c; j++) {
						if (patha[j])
							current = current->get_right();
						else
							current = current->get_left();
						current->set_height(current->get_height() + 1);
					}

					for (int j = 0; j < c; j++) {
						if(abs(needBalance(current)) >= 2)
							balance(current);
						current = current->get_parent();
						fixheight(current);
					}
					// ��� �����
					if (abs(needBalance(current)) >= 2)
						balance(current);
					fixheight(current);
				}
				c++;
			}
			delete[] patha;
		}
	}
	// ���������� �������� (��� ����������)
/*	void add(int val, int& sr, int& per) {
		// ������ ������
		if (root == nullptr)
			root = new Node(val);
		// ������ �� ������
		else {
			Node* current = root;
			bool isEnd = false;  // ����� ������
			// ���� � ����������� ������� - false - ����, true - �����
			bool* patha = new bool[N];
			// ����������, ����� ��������� ����������� �� ������ ������ (���� �� ������ � ����� ������� ������)
			// ���� ����������� ������� - true
			bool isAdd = false;
			int c = 0;
			// ���� �� ��������� ����� ������
			while (!isEnd) {
				// ���� �������� �����
				if (val == current->get_value()) {
					current->set_same(current->get_same() + 1);
					count++;
					isEnd = true;
					sr++;
				}
				// ���� �������� ������ �����
				else if (val < current->get_value()) {
					sr += 2;
					// ����� �� �����
					if (current->get_left() == nullptr) {
						// �������� �������
						if (current->get_right() == nullptr)
							isAdd = true;
						current->set_left(new Node(val, current));
						count++;
						isEnd = true;
					}
					else {
						current = current->get_left();
						patha[c] = false;
					}
				}
				// ���� �������� ������ �����
				else {
					sr += 2;
					// ����� �� �����
					if (current->get_right() == nullptr) {
						// �������� �������
						if (current->get_left() == nullptr)
							isAdd = true;
						current->set_right(new Node(val, current));
						count++;
						isEnd = true;
					}
					else {
						current = current->get_right();
						patha[c] = true;
					}
				}

				// ���� �������� �������, ������ ����������� height
				if (isAdd) {
					current = root;
					current->set_height(current->get_height() + 1);
					//����������� �������� ������ height �� ���� �������
					for (int j = 0; j < c; j++) {
						if (patha[j])
							current = current->get_right();
						else
							current = current->get_left();
						current->set_height(current->get_height() + 1);
					}

					for (int j = 0; j < c; j++) {
						if (abs(needBalance(current)) >= 2) {
							balance(current);
							per++;
						}
						current = current->get_parent();
						fixheight(current);
					}
					// ��� �����
					if (abs(needBalance(current)) >= 2) {
						balance(current);
						per++;
					}
					fixheight(current);
				}
				c++;
			}
			delete[] patha;
		}
	}*/

	// ���������� �������� (��� ����������)
	void add(int val, int& sr, int& per) {
		//bool* patha = new bool[N];
		// ������ ������
		if (root == nullptr)
			root = new Node(val);
		// ������ �� ������
		else {
			Node* current = root;
			bool isEnd = false;  // ����� ������
			// ���� � ����������� ������� - false - ����, true - �����
			bool* patha = new bool[N];
			// ����������, ����� ��������� ����������� �� ������ ������ (���� �� ������ � ����� ������� ������)
			// ���� ����������� ������� - true
			bool isAdd = false;
			int c = 0;
			// ���� �� ��������� ����� ������
			while (!isEnd) {
				// ���� �������� �����
				if (val == current->get_value()) {
					current->set_same(current->get_same() + 1);
					count++;
					isEnd = true;
					sr++;
				}
				// ���� �������� ������ �����
				else if (val < current->get_value()) {
					sr += 2;
					// ����� �� �����
					if (current->get_left() == nullptr) {
						// �������� �������
						if (current->get_right() == nullptr)
							isAdd = true;
						current->set_left(new Node(val, current));
						count++;
						isEnd = true;
					}
					else {
						current = current->get_left();
						patha[c] = false;
					}
				}
				// ���� �������� ������ �����
				else {
					sr += 2;
					// ����� �� �����
					if (current->get_right() == nullptr) {
						// �������� �������
						if (current->get_left() == nullptr)
							isAdd = true;
						current->set_right(new Node(val, current));
						count++;
						isEnd = true;
					}
					else {
						current = current->get_right();
						patha[c] = true;
					}
				}

				// ���� �������� �������, ������ ����������� height
				if (isAdd) {
					current = root;
					current->set_height(current->get_height() + 1);
					list<bool>::iterator it;
					//����������� �������� ������ height �� ���� �������

					for (int j = 0; j < c; j++) {
						if (patha[j])
							current = current->get_right();
						else
							current = current->get_left();
						current->set_height(current->get_height() + 1);
					}

					for (int j = 0; j < c; j++) {
						if (abs(needBalance(current)) >= 2) {
							balance(current);
							per++;
						}
						current = current->get_parent();
						fixheight(current);
					}
					// ��� �����
					if (abs(needBalance(current)) >= 2) {
						balance(current);
						per++;
					}
					fixheight(current);
				}
				c++;
			}
			delete[] patha;
		}
	}
	// �������� ��������
	void remove(int n, string &mess) {
		double sr = 0; // ���� ����
		isFoundInAvl p = avlLooking(n, sr);
		if (!p.isFound) {
			mess = "�������� �� �������, ������ ������� ������";
			return;
		}
		else {
			Node* current = root;
			list<bool>::iterator it;
			for (it = p.path.begin(); it != p.path.end(); ++it)
				if (*it)
					current = current->get_right();
				else
					current = current->get_left();

			//���� ����������
			if (current->get_same() != 0) {
				current->set_same(current->get_same() - 1);
				return;
			}
			//��������� �������
			else if (current->get_left() == nullptr && current->get_right() == nullptr) {
				Node* temp = current->get_parent();
				if (current == root) {
					root = nullptr;	// ��� �����
					return;
				}
				else if (temp->get_left() == nullptr) {
					current->set_parent(nullptr);
					temp->set_right(nullptr);
				}
				else {
					current->set_parent(nullptr);
					temp->set_left(nullptr);
				}

				for (int i = 0; i < p.path.size() - 1; i++) {
					if (abs(needBalance(temp)) >= 2)
						balance(temp);
					temp = temp->get_parent();
					fixheight(temp);
				}
				//��� �����
				if (abs(needBalance(temp)) >= 2)
					balance(temp);
				fixheight(temp);
			}
			//��� ������ ����������
			else if (current->get_left() == nullptr) {
				Node* temp = current->get_parent();
				if (current == root) {
					current->get_right()->set_parent(nullptr);
					root = current->get_right();
					fixheight(root);
				}
				else if (temp->get_left() == current) {
					temp->set_left(current->get_right());
					current->get_right()->set_parent(temp);
					current->set_parent(nullptr);
					current->set_right(nullptr);
				}
				else {
					temp->set_right(current->get_right());
					current->get_right()->set_parent(temp);
					current->set_parent(nullptr);
					current->set_left(nullptr);
				}
			}
			//��� ������� ���������
			else if (current->get_right() == nullptr) {
				Node* temp = current->get_parent();
				if (current == root) {
					current->get_left()->set_parent(nullptr);
					root = current->get_left();
					fixheight(root);
				}
				else if (temp->get_right() == current) {
					temp->set_right(current->get_left());
					current->get_left()->set_parent(temp);
					current->set_parent(nullptr);
					current->set_left(nullptr);
				}
				else {
					temp->set_left(current->get_left());
					current->get_left()->set_parent(temp);
					current->set_parent(nullptr);
					current->set_right(nullptr);
				}
			}
			else {
				// ���� 2 ���������
				Node* temp = current->get_right();
				while (temp->get_left() != nullptr)
					temp = temp->get_left();
				current->set_value(temp->get_value());
				Node* temp1 = temp->get_parent();
				if (temp1 == current) {
					temp1->get_right()->set_parent(nullptr);
					temp1->set_right(nullptr);
				}
				else {
					temp1->set_left(nullptr);
					temp->set_parent(nullptr);
				}

				while (temp1->get_parent() != nullptr) {
					if (abs(needBalance(temp1)) >= 2)
						balance(temp1);
					temp1 = temp1->get_parent();
					fixheight(temp1);
				}
				if (abs(needBalance(temp1)) >= 2)
					balance(temp1);
				fixheight(temp1);
			}
		}
	}
	// ����� �����
	isFoundInAvl avlLooking(int key, double& sr) {
		list<bool> path;
		Node* current = root;
		//���� �� � ������ ����
		bool isHere = false;
		while (!isHere) {
			if (current == nullptr) {
				sr++;
				break;
			}
			else if (current->get_value() == key) {
				sr += 2;
				isHere = true;
			}
			else if (current->get_value() < key) {
				sr += 3;
				current = current->get_right();
				path.push_back(true);
			}
			else if (current->get_value() > key) {
				sr += 3;
				current = current->get_left();
				path.push_back(false);
			}
		}

		return (isHere) ? isFoundInAvl(isHere, path) : isFoundInAvl(isHere);
	}
	// ����� �����
	int avlSearch(int key, double& sr) {
		Node* current = root;
		//���� �� � ������ ����
		bool isHere = false;
		while (!isHere) {
			if (current == nullptr) {
				sr++;
				break;
			}
			else if (current->get_value() == key) {
				sr += 2;
				isHere = true;
			}
			else if (current->get_value() < key) {
				sr += 3;
				current = current->get_right();
			}
			else if (current->get_value() > key) {
				sr += 3;
				current = current->get_left();
			}
		}
		return (isHere) ? 1 : 0;
	}
	// ����� ����� �������
	// ������ ������ ���������� ��������
	void leftToRight(list<int> & data, int num) {
		Node* current = root;
		inOrder(current, data, num);
	}
	// ����� ������
	void printTree(System::Windows::Forms::TextBox^ textBox) { // ����� ��� ������ ������ � �������
		textBox->Text = "";
		stack <Node*> globalStack; // ����� ���� ��� �������� ������
		globalStack.push(root);
		bool isRowEmpty = false;
		string out;
		while (!isRowEmpty) {
			stack <Node*> localStack; // ��������� ���� ��� ������� �������� ��������
			isRowEmpty = true;
			while (!globalStack.empty()) { // ������ � ����� ����� ���� ��������
				Node* temp = globalStack.top(); // ����� ���������, ��� ���� ������ ��� �� �����
				globalStack.pop();


				if (temp != nullptr) {
					out.append(to_string(temp->get_value())); // ������� ��� �������� � �������
					out.push_back('[');
					out.append(to_string(temp->get_same()));
					out.push_back(']');
					out.push_back(';');

					localStack.push(temp->get_left()); // ��������� � ��������� ����, ���������� �������� ��������
					localStack.push(temp->get_right());
					if (temp->get_left() != nullptr ||
						temp->get_right() != nullptr)
						isRowEmpty = false;
				}
				else {
					out.append("____; "); // - ���� ������� ������
					localStack.push(nullptr);
					localStack.push(nullptr);
				}
			}
			textBox->Text += gcnew System::String(out.c_str()) + System::Environment::NewLine;
			out = "";
			while (!localStack.empty()) {
				globalStack.push(localStack.top()); // ���������� ��� �������� �� ���������� ����� � ����������
				localStack.pop();
			}
		}
	}

private:
	// ��������, ����� �� ������������
	int needBalance(Node* cur) {
		if (cur == nullptr) return 0;
		int hLeft = (cur->get_left() == nullptr) ? -1 : cur->get_left()->get_height();
		int hRight = (cur->get_right() == nullptr) ? -1 : cur->get_right()->get_height();
		return hRight - hLeft;
	}
	// ��������������� ���������� �������� ���� height
	void fixheight(Node* cur) {
		if (cur == nullptr) return;
		int h1 = (cur->get_left() == nullptr) ? -1 : cur->get_left()->get_height();
		int h2 = (cur->get_right() == nullptr) ? -1 : cur->get_right()->get_height();
		cur->set_height((h1 > h2 ? h1 : h2) + 1);
	}
	// ��������� ������������
	void balance(Node* current) {
		fixheight(current);
		if (needBalance(current) == 2) {
			if (needBalance(current->get_right()) < 0)
				RR(current->get_right());
			LL(current);
		}
		if (needBalance(current) == -2) {
			if (needBalance(current->get_left()) > 0)
				LL(current->get_left());
			RR(current);
		}
	}
	
	// ����� �������
	void LL (Node* current) {
		if (current == root) {
			current = current->get_right();
			Node* temp = current->get_left();
			current->set_left(current->get_parent());
			current->get_left()->set_right(nullptr) ;
			current->set_parent(nullptr);
			current->get_left()->set_parent(current);
			current->get_left()->set_right(temp);
			if (temp != nullptr)
				temp->set_parent(current->get_left());
			root = current;
		}
		else {
			Node* curPred = current->get_parent();
			
			if (curPred->get_left() != nullptr && curPred->get_left() == current)
				curPred->set_left(current->get_right());
			else
				curPred->set_right(current->get_right());
			Node* temp = current->get_right();
			current->set_parent(temp);
			if (temp->get_left() != nullptr) {
				current->set_right(temp->get_left());
				current->get_right()->set_parent(current);
			}
			else
				current->set_right(nullptr);
			temp->set_parent(curPred);
			temp->set_left(current);
			fixheight(current);
			fixheight(temp);
		}
	}
	// ������ �������
	void RR (Node* current) {
		if (current == root) {
			current = current->get_left();
			Node* temp = current->get_right();
			current->set_right(current->get_parent());
			current->get_right()->set_left(nullptr);
			current->set_parent(nullptr);
			current->get_right()->set_parent(current);
			current->get_right()->set_left(temp);
			if (temp != nullptr)
				temp->set_parent(current->get_right());
			root = current;
		}
		else {
			Node* curPred = current->get_parent();
			Node* temp = current->get_left();
			if (curPred->get_left() != nullptr && curPred->get_left() == current)
				curPred->set_left(current->get_left());
			else
				curPred->set_right(current->get_left());
			current->set_parent(temp);
			if (temp->get_right() != nullptr) {
				current->set_left(temp->get_right());
				current->get_left()->set_parent(current);
			}
			else
				current->set_left(nullptr);
			temp->set_parent(curPred);
			temp->set_right(current);
			fixheight(current);
			fixheight(temp);
		}
	}
	// ����������� �����
	void inOrder(const Node* current, list<int> data, const int num) {
		if (current->get_left() == nullptr) {
			data.push_back(current->get_value());
			for (int i = 0; i < current->get_same(); i++)
				data.push_back(current->get_value());
			if (current->get_right() != nullptr)
				inOrder(current->get_right(), data, num);
			return;
		}
		if (data.size() == num) return;
		if (current->get_left() != nullptr)
			inOrder(current->get_left(), data, num);
		data.push_back(current->get_value());
		for (int i = 0; i < current->get_same(); i++)
			data.push_back(current->get_value());
		if (data.size() == num) return;
		if (current->get_right() != nullptr)
			inOrder(current->get_right(), data, num);
		if (data.size() == num) return;
	}





};