#include "AVL.h"
// ������������
AVL::AVL() {
	root = nullptr;
	count = 1;
	N = 10000;
}
AVL::AVL(const int n) {
	root = nullptr;
	count = 1;
	N = n;
}
// ���������� ��������
void AVL::add(int val) {
	// ������ ������
	if (root == nullptr)
		root = new Node(val);
		// ������ �� ������
	else {
		Node* current = root;
		bool isEnd = false;  // ����� ������
		// ���� � ����������� ������� - false - ����, true - �����
		bool* path = new bool[N];
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
					path[c] = false;
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
					path[c] = true;
				}
			}
				
			// ���� �������� �������, ������ ����������� height
			if (isAdd) {
				current = root;
				current->set_height(current->get_height() + 1);
				//����������� �������� ������ height �� ���� �������
				for (int j = 0; j < c; j++) {
					if (path[j])
						current = current->get_right();
					else
						current = current->get_left();
					current->set_height(current->get_height() + 1);
				}

				for (int j = 0; j < c; j++) {
					if(abs(need_balance(current)) >= 2)
						balance(current);
					current = current->get_parent();
					fix_height(current);
				}
				// ��� �����
				if (abs(need_balance(current)) >= 2)
					balance(current);
				fix_height(current);
			}
			c++;
		}
		delete[] path;
	}
}
// ���������� �������� (��� ����������)
void AVL::add(int val, int& sr, int& per) {
	// ������ ������
	if (root == nullptr)
		root = new Node(val);
		// ������ �� ������
	else {
		Node* current = root;
		bool isEnd = false;  // ����� ������
		// ���� � ����������� ������� - false - ����, true - �����
		bool* path = new bool[N];
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
					path[c] = false;
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
					path[c] = true;
				}
			}

			// ���� �������� �������, ������ ����������� height
			if (isAdd) {
				current = root;
				current->set_height(current->get_height() + 1);
				//����������� �������� ������ height �� ���� �������
				for (int j = 0; j < c; j++) {
					if (path[j])
						current = current->get_right();
					else
						current = current->get_left();
					current->set_height(current->get_height() + 1);
				}

				for (int j = 0; j < c; j++) {
					if (abs(need_balance(current)) >= 2) {
						balance(current);
						per++;
					}
					current = current->get_parent();
					fix_height(current);
				}
				// ��� �����
				if (abs(need_balance(current)) >= 2) {
					balance(current);
					per++;
				}
				fix_height(current);
			}
			c++;
		}
		delete[] path;
	}
}
// �������� ��������
void AVL::remove(int n, string& mess) {
	double sr = 0; // ���� ����
	int* pa = new int[N]; // 0 - ����, 1 - �����
	for (int i = 0; i < N; ++i)
		pa[i] = -1;
	bool isFound;
	avl_looking(n, pa, isFound);
	if (!isFound) {
		mess = "�������� �� �������, ������ ������� ������";
		return;
	}
	else {
		Node* current = root;
		int l = 0;
		while (pa[l] != -1) {
			if (pa[l] == 1) // ���� �����
				current = current->get_right();
			else if (pa[l] == 0)
				current = current->get_left();
			++l;
		}

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

			for (int i = 0; i < l - 1; i++) {
				if (abs(need_balance(temp)) >= 2)
					balance(temp);
				temp = temp->get_parent();
				fix_height(temp);
			}
			//��� �����
			if (abs(need_balance(temp)) >= 2)
				balance(temp);
			fix_height(temp);
		}
			//��� ������ ����������
		else if (current->get_left() == nullptr) {
			Node* temp = current->get_parent();
			if (current == root) {
				current->get_right()->set_parent(nullptr);
				root = current->get_right();
				fix_height(root);
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
				fix_height(root);
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
				if (abs(need_balance(temp1)) >= 2)
					balance(temp1);
				temp1 = temp1->get_parent();
				fix_height(temp1);
			}
			if (abs(need_balance(temp1)) >= 2)
				balance(temp1);
			fix_height(temp1);
		}
	}
	delete[] pa;
}
// ����� �����
void AVL::avl_looking(int key, int* path, bool& is_found) const {
	Node* current = root;
	//���� �� � ������ ����
	bool isHere = false;
	int c = 0;
	while (!isHere) {
		if (current == nullptr)
			break;
		else if (current->get_value() == key)
			isHere = true;
		else if (current->get_value() < key) {
			current = current->get_right();
			path[c] = true;
		}
		else if (current->get_value() > key) {

			current = current->get_left();
			path[c] = false;
		}
		c++;
	}
	is_found = isHere;
}
// ����� �����
int AVL::avl_search(int key, double& sr) const {
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
// ����� ����� �������. ������ ������ ���������� ��������
void AVL::left_to_right(int* data, int n) const {
	const Node* current = root;
	for (int i = 0; i < n; ++i)
		data[i] = -1;
	int count = 0;
	in_order(current, data, n, count);
}
// ����� ������
void AVL::print_tree(System::Windows::Forms::TextBox^ textBox) const {
	textBox->Text = "";
	stack <Node*> global_stack; // ����� ���� ��� �������� ������
	global_stack.push(root);
	bool is_row_empty = false;
	string out;
	while (!is_row_empty) {
		stack <Node*> local_stack; // ��������� ���� ��� ������� �������� ��������
		is_row_empty = true;
		while (!global_stack.empty()) { // ������ � ����� ����� ���� ��������
			Node* temp = global_stack.top(); // ����� ���������, ��� ���� ������ ��� �� �����
			global_stack.pop();

			if (temp != nullptr) {
				out.append(to_string(temp->get_value())); // ������� ��� �������� � �������
				out.push_back('[');
				out.append(to_string(temp->get_same()));
				out.push_back(']');
				out.push_back(';');

				local_stack.push(temp->get_left()); // ��������� � ��������� ����, ���������� �������� ��������
				local_stack.push(temp->get_right());
				if (temp->get_left() != nullptr ||
					temp->get_right() != nullptr)
					is_row_empty = false;
			}
			else {
				out.append("____; "); // - ���� ������� ������
				local_stack.push(nullptr);
				local_stack.push(nullptr);
			}
		}
		textBox->Text += gcnew System::String(out.c_str()) + System::Environment::NewLine;
		out = "";
		while (!local_stack.empty()) {
			global_stack.push(local_stack.top()); // ���������� ��� �������� �� ���������� ����� � ����������
			local_stack.pop();
		}
	}
}

// ��������, ����� �� ������������
inline int AVL::need_balance(Node* current) {
	if (current == nullptr) return 0;
	const int h_left = (current->get_left() == nullptr) ? -1 : current->get_left()->get_height();
	const int h_right = (current->get_right() == nullptr) ? -1 : current->get_right()->get_height();
	return h_right - h_left;
}
// ��������������� ���������� �������� ���� height
inline void AVL::fix_height(Node* current) {
	if (current == nullptr) return;
	const int h1 = (current->get_left() == nullptr) ? -1 : current->get_left()->get_height();
	const int h2 = (current->get_right() == nullptr) ? -1 : current->get_right()->get_height();
	current->set_height((h1 > h2 ? h1 : h2) + 1);
}
// ��������� ������������
inline void AVL::balance(Node* current) {
	fix_height(current);
	if (need_balance(current) == 2) {
		if (need_balance(current->get_right()) < 0)
			RR(current->get_right());
		LL(current);
	}
	if (need_balance(current) == -2) {
		if (need_balance(current->get_left()) > 0)
			LL(current->get_left());
		RR(current);
	}
}
// ����� �������
inline void AVL::LL(Node* current) {
	if (current == root) {
		current = current->get_right();
		Node* temp = current->get_left();
		current->set_left(current->get_parent());
		current->get_left()->set_right(nullptr);
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
		fix_height(current);
		fix_height(temp);
	}
}
// ������ �������
inline void AVL::RR(Node* current) {
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
		fix_height(current);
		fix_height(temp);
	}
}
// ����������� �����
void AVL::in_order(const Node* current, int* data, const int num, int& c) {
	if (current->get_left() == nullptr) {
		data[c] = current->get_value();
		c++;
		for (int i = 0; i < current->get_same(); i++) {
			data[c] = current->get_value();
			c++;
		}
		if (current->get_right() != nullptr)
			in_order(current->get_right(), data, num, c);
		return;
	}
	if (c == num) return;
	if (current->get_left() != nullptr)
		in_order(current->get_left(), data, num, c);
	data[c] = current->get_value();
	c++;
	for (int i = 0; i < current->get_same(); i++) {
		data[c] = current->get_value();
		c++;
	}
	if (c == num) return;
	if (current->get_right() != nullptr)
		in_order(current->get_right(), data, num, c);
	if (c == num) return;
}