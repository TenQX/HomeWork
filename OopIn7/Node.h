#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Node {
private:
	T value;
	Node<T>* next;
public:
	Node();
	Node(T value);
	void setValue(T value);
	T getValue();
	void setNext(Node<T>* next);
	Node<T>* getNext();

	~Node();
};


