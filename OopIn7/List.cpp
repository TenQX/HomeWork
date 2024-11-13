#include "List.h"

using namespace std;

template<typename T>
List<T>::List()
{
	this->first = nullptr;
}

template<typename T>
List<T>::List(Node<T>* first)
{
	this->first = first;
}

template<typename T>
List<T>::List(Node<T>* first, Node<T>* last)
{
	this->first = first;
	this->last = last;
}

template<typename T>
void List<T>::setFirst(Node<T>* first)
{
	this->first = first;
}

template<typename T>
Node<T>* List<T>::getFirst()
{
	return this->first;
}

template<typename T>
void List<T>::setLast(Node<T>* last)
{
	this->last = last;
}

template<typename T>
Node<T>* List<T>::getLast()
{
	return this->last;
}

template<typename T>
bool List<T>::isClear()
{
	return this->first == nullptr;
}

template<typename T>
void List<T>::print()
{
	Node<T> p = this->first;
	while (p != this->last) {
		cout << p->value << " ";
		p = p->next;
	}
	cout << this->last->value;
}

template<typename T>
void List<T>::addElem(T val)
{
	Node<T>* p(val);
	this->last->next = p;
	this->last = p;
}

template<typename T>
int List<T>::size()
{
	Node<T>* p = this->first;
	int a = 1;
	while (p != this->last) {
		a++;
	}
}

template<typename T>
Node<T>* List<T>::nodeByVal(T val)
{
	
}



template<typename T>
List<T>::~List()
{

}
