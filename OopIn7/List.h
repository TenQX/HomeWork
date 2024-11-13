#pragma once
#include "Node.h"
using namespace std;

template <typename T>
class List
{
private:
	Node<T>* first;
	Node<T>* last;
public:
	List();
	List(Node<T>* first);
	List(Node<T>* first, Node<T>* last);

	void setFirst(Node<T>* first);
	Node<T>* getFirst();
	void setLast(Node<T>* last);
	Node<T>* getLast();

	bool isClear();
	void print();
	void addElem(T val);
	int size();
	Node<T>* nodeByVal(T val);

	~List();
};


