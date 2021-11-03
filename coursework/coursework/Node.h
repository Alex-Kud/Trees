#pragma once

class Node {

private:
public:
    int value;          // Значение
    int height;         // Высота
    Node* left;         // Лево
    Node* right;        // Право
	Node* parent;       // Родитель
    int same;           // Количество одинаковых элементов
public:
    // Конструктор для 1 значения
	Node (const int value) {
        this->value = value;
        height = 0;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
        same = 0;
    }

    // Конструктор для всех остальных элементов
    Node (const int value, Node* par) {
        this->value = value;
        height = 0;
        left = nullptr;
        right = nullptr;
        parent = par;
        same = 0;
    }
    
    int get_value() const { return this->value; }
    void set_value(const int value) { this->value = value; }

    int get_height() const { return this->height; }
    void set_height(const int height) { this->height = height; }

    Node* get_left() const { return this->left; }
    void set_left(Node* left) { this->left = left; }

    Node* get_right() const { return this->right; }
    void set_right(Node* right) { this->right = right; }

    Node* get_parent() const { return this->parent; }
    void set_parent(Node* parent) { this->parent = parent; }

    int get_same() const { return this->same; }
    void set_same(const int same) { this->same = same; }
};
