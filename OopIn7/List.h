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
	List(T* arr, int size);

	void setFirst(Node<T>* first);
	Node<T>* getFirst();
	void setLast(Node<T>* last);
	Node<T>* getLast();

	bool isClear();
	void print();
	void addElem(T val);
	int size();
	Node<T>* nodeByVal(T val);
	void deleteFirst();
	void deleteLast();
	Node<T>* operator[](int ind);
	int indByVal(T val);
	void swapNodes(int ind1, int ind2);
	~List();
};


