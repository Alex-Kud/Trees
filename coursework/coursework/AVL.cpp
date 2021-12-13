#include "AVL.h"
// Конструкторы
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
// Добавление значения
void AVL::add(int val) {
	// Дерево пустое
	if (root == nullptr)
		root = new Node(val);
		// Дерево не пустое
	else {
		Node* current = root;
		bool isEnd = false;  // Конец дерева
		// Путь к добавленной вершине - false - лево, true - право
		bool* path = new bool[N];
		// Переменная, чтобы проверить увеличилась ли высота дерева (была на уровне с новой ячейкой другая)
		// Если добавляется уровень - true
		bool is_add = false;
		int c = 0;
		// Пока не достигнут конец дерева
		while (!isEnd) {
			// Если значение меньше корня
			if (val < current->get_value()) {
				// Дошли до конца
				if (current->get_left() == nullptr) {
					// Добавили уровень
					if (current->get_right() == nullptr)
						is_add = true;
					current->set_left(new Node(val, current));
					count++;
					isEnd = true;
				}
				else {
					current = current->get_left();
					path[c] = false;
				}
			}
			// Если значение больше или = корню
			else {
				// Дошли до конца
				if (current->get_right() == nullptr) {
					// Добавили уровень
					if (current->get_left() == nullptr)
						is_add = true;
					current->set_right(new Node(val, current));
					count++;
					isEnd = true;
				}
				else {
					current = current->get_right();
					path[c] = true;
				}
			}
				
			// Если добавили уровень, значит увеличиваем height
			if (is_add) {
				current = root;
				current->set_height(current->get_height() + 1);
				// Увеличиваем значение высоты height на всех уровнях
				for (int j = 0; j < c; j++) {
					if (path[j])
						current = current->get_right();
					else
						current = current->get_left();
					current->set_height(current->get_height() + 1);
				}
				// Балансировка при необходимости
				for (int j = 0; j < c; j++) {
					if(abs(need_balance(current)) >= 2)
						balance(current);
					current = current->get_parent();
					fix_height(current);
				}
				// Для корня
				if (abs(need_balance(current)) >= 2)
					balance(current);
				fix_height(current);
			}
			c++;
		}
		delete[] path; // Освобождение памяти
	}
}
// Добавление значения (для сортировки)
void AVL::add(int val, int& sr, int& per) {
	// Дерево пустое
	if (root == nullptr)
		root = new Node(val);
		// Дерево не пустое
	else {
		Node* current = root;
		bool isEnd = false;  // Конец дерева
		// Путь к добавленной вершине - false - лево, true - право
		bool* path = new bool[N];
		// Переменная, чтобы проверить увеличилась ли высота дерева (была на уровне с новой ячейкой другая)
		// Если добавляется уровень - true
		bool isAdd = false;
		int c = 0;
		// Пока не достигнут конец дерева
		while (!isEnd) {
			// Если значение меньше корня
			if (val < current->get_value()) {
				sr++;
				// Дошли до конца
				if (current->get_left() == nullptr) {
					// Добавили уровень
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
			// Если значение больше или = корня
			else {
				sr++;
				// Дошли до конца
				if (current->get_right() == nullptr) {
					// Добавили уровень
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

			// Если добавили уровень, значит увеличиваем height
			if (isAdd) {
				current = root;
				current->set_height(current->get_height() + 1);
				//Увеличиваем значение высоты height на всех уровнях
				for (int j = 0; j < c; j++) {
					if (path[j])
						current = current->get_right();
					else
						current = current->get_left();
					current->set_height(current->get_height() + 1);
				}
				// Балансировка при необходимости
				for (int j = 0; j < c; j++) {
					if (abs(need_balance(current)) >= 2) {
						balance(current);
						per++;
					}
					current = current->get_parent();
					fix_height(current);
				}
				// Для корня
				if (abs(need_balance(current)) >= 2) {
					balance(current);
					per++;
				}
				fix_height(current);
			}
			c++;
		}
		delete[] path; // освобождение памяти
	}
}
// Удаление значения
void AVL::remove(int n, string& mess) {
	int* pa = new int[N]; // 0 - лево, 1 - право
	for (int i = 0; i < N; ++i)
		pa[i] = -1;
	bool is_found;
	avl_looking(n, pa, is_found);
	if (!is_found) {
		mess = "Значение не найдено! Операция невозможна!";
		return;
	}
	else {
		Node* current = root;
		int l = 0;
		while (pa[l] != -1) {
			if (pa[l] == 1) // Если право
				current = current->get_right();
			else if (pa[l] == 0)
				current = current->get_left();
			++l;
		}

		// Последний элемент
		if (current->get_left() == nullptr && current->get_right() == nullptr) {
			Node* temp = current->get_parent();
			if (current == root) {
				root = nullptr;	// Для корня
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
			// Для корня
			if (abs(need_balance(temp)) >= 2)
				balance(temp);
			fix_height(temp);
		}
		// Нет левого поддереваа
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
		// Нет правого поддерева
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
		// Есть 2 поддерева
		else {
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
			// Балансировка при необходимости
			while (temp1->get_parent() != nullptr) {
				if (abs(need_balance(temp1)) >= 2)
					balance(temp1);
				temp1 = temp1->get_parent();
				fix_height(temp1);
			}
			// Для корня
			if (abs(need_balance(temp1)) >= 2)
				balance(temp1);
			fix_height(temp1);
		}
	}
	delete[] pa; // Освобождение памяти
}
// Поиск ключа (с сохранением пути до него)
void AVL::avl_looking(const int key, int* path, bool& is_found) const {
	Node* current = root;
	// Есть ли в дереве ключ
	bool is_here = false;
	int c = 0;
	// Пока ключ не найден
	while (!is_here) {
		// Если узла не существует
		if (current == nullptr)
			break;
		// Если ключ найден
		else if (current->get_value() == key)
			is_here = true;
		// Если значение в текщем узле меньше ключа
		else if (current->get_value() < key) {
			current = current->get_right();
			path[c] = true;
		}
		// Если значение в текщем узле больше ключа
		else if (current->get_value() > key) {
			current = current->get_left();
			path[c] = false;
		}
		c++;
	}
	is_found = is_here; // Возврат статуса найденности ключа
}
// Поиск ключа (без сохранения пути до него)
int AVL::avl_search(const int key, double& sr) const {
	Node* current = root;
	// Есть ли в дереве ключ
	bool is_here = false;
	// Пока ключ не найден
	while (!is_here) {
		// Если узла не существует
		if (current == nullptr) {
			sr++;
			break;
		}
		// Если ключ найден
		else if (current->get_value() == key) {
			sr += 2;
			is_here = true;
		}
		// Если значение в текщем узле меньше ключа
		else if (current->get_value() < key) {
			sr += 3;
			current = current->get_right();
		}
		// Если значение в текщем узле больше ключа
		else if (current->get_value() > key) {
			sr += 3;
			current = current->get_left();
		}
	}
	return (is_here) ? 1 : 0; // Возвращает 1, если ключ найден и 0, если не найден
}
// Обход слева направо. Вернет упорядоченный массив первых n значений
void AVL::left_to_right(int* data, const int n) const {
	const Node* current = root;
	for (int i = 0; i < n; ++i)
		data[i] = -1;
	int count = 0;
	in_order(current, data, n, count);
}
// Вывод дерева
void AVL::print_tree(System::Windows::Forms::TextBox^ textBox) const {
	textBox->Text = "";
	stack <Node*> shared_stack; // Общий стек для значений дерева
	shared_stack.push(root);
	bool empty = false;
	string out; // Переменная для вывода
	while (!empty) {
		stack <Node*> internal_stack; // Для задания потомков элемента
		empty = true;
		while (!shared_stack.empty()) { // Общий стек не пуст
			Node* temp = shared_stack.top(); // Переход к следующему элементу
			shared_stack.pop();	// Удаление предыдущего

			if (temp != nullptr) {
				out.append(to_string(temp->get_value())); // Добавление значения элемента в переменную для вывода
				out.push_back(';');

				internal_stack.push(temp->get_left()); // Добавление наследников во внутренний стек
				internal_stack.push(temp->get_right());
				if (temp->get_left() != nullptr ||
					temp->get_right() != nullptr)
					empty = false;
			}
			else {
				out.append("___; "); // Если значения не найдено
				internal_stack.push(nullptr);
				internal_stack.push(nullptr);
			}
		}
		textBox->Text += gcnew System::String(out.c_str()) + System::Environment::NewLine; // Вывод одного уровня
		out = "";
		while (!internal_stack.empty()) {
			shared_stack.push(internal_stack.top()); // Перенос элементов из внутреннего стека в общий
			internal_stack.pop();
		}
	}
}
// Очистка дерева
void AVL::clear(const Node* r) {
	const Node* current = r;
	if (current->get_left() != nullptr) clear(current->get_left());
	if (current->get_right() != nullptr) clear(current->get_right());
	delete r;
}

// Проверка, нужна ли балансировка
inline int AVL::need_balance(Node* current) {
	if (current == nullptr) return 0;
	const int h_left = (current->get_left() == nullptr) ? -1 : current->get_left()->get_height();
	const int h_right = (current->get_right() == nullptr) ? -1 : current->get_right()->get_height();
	return h_right - h_left;
}
// Восстанавливает корректное значение поля height
inline void AVL::fix_height(Node* current) {
	if (current == nullptr) return;
	const int h1 = (current->get_left() == nullptr) ? -1 : current->get_left()->get_height();
	const int h2 = (current->get_right() == nullptr) ? -1 : current->get_right()->get_height();
	current->set_height((h1 > h2 ? h1 : h2) + 1);
}
// Выполняет балансировку
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
// Левый поворот
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
		Node* cur_pred = current->get_parent();

		if (cur_pred->get_left() != nullptr && cur_pred->get_left() == current)
			cur_pred->set_left(current->get_right());
		else
			cur_pred->set_right(current->get_right());
		Node* temp = current->get_right();
		current->set_parent(temp);
		if (temp->get_left() != nullptr) {
			current->set_right(temp->get_left());
			current->get_right()->set_parent(current);
		}
		else
			current->set_right(nullptr);
		temp->set_parent(cur_pred);
		temp->set_left(current);
		fix_height(current);
		fix_height(temp);
	}
}
// Правый поворот
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
		Node* cur_pred = current->get_parent();
		Node* temp = current->get_left();
		if (cur_pred->get_left() != nullptr && cur_pred->get_left() == current)
			cur_pred->set_left(current->get_left());
		else
			cur_pred->set_right(current->get_left());
		current->set_parent(temp);
		if (temp->get_right() != nullptr) {
			current->set_left(temp->get_right());
			current->get_left()->set_parent(current);
		}
		else
			current->set_left(nullptr);
		temp->set_parent(cur_pred);
		temp->set_right(current);
		fix_height(current);
		fix_height(temp);
	}
}
// Рекурсивный обход
void AVL::in_order(const Node* current, int* data, const int num, int& c) {
	if (current->get_left() == nullptr) {
		data[c] = current->get_value();
		c++;
		if (current->get_right() != nullptr)
			in_order(current->get_right(), data, num, c);
		return;
	}
	if (c == num) return;
	if (current->get_left() != nullptr)
		in_order(current->get_left(), data, num, c);
	data[c] = current->get_value();
	c++;
	if (c == num) return;
	if (current->get_right() != nullptr)
		in_order(current->get_right(), data, num, c);
	if (c == num) return;
}