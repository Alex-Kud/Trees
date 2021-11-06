#include "Node.h"

Node::Node(const int value) {
	this->value = value;
	height = 0;
	left = nullptr;
	right = nullptr;
	parent = nullptr;
	same = 0;
}

Node::Node(const int value, Node* par) {
	this->value = value;
	height = 0;
	left = nullptr;
	right = nullptr;
	parent = par;
	same = 0;
}