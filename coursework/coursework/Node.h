#pragma once

class Node {
private:
    int value;          // Значение
    int height;         // Высота
    Node* left;         // Лево
    Node* right;        // Право
	Node* parent;       // Родитель
public:
    // Конструктор для 1 значения
	Node (const int value);

    // Конструктор для всех остальных элементов
    Node (const int value, Node* par);

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
};