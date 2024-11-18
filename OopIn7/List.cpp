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
List<T>::List(T* arr, int size) {
	Node<T>* next = new Node<T>(arr[size - 1], nullptr);
	for (int b = size - 2; b >= 0; i--) {
		Node<T>* newNode = new Node<T>(arr[i], next);
		next = newNode;
	}
	this->first = next;
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
	do while (p != this->last) {
		cout << p->value << " ";
		p = p->next;
	}
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
	int a = 0;
	do while (p != this->last) {
		a++;
		p = p->next;
	}
}

template<typename T>
Node<T>* List<T>::nodeByVal(T val)
{
	Node<T>* p = this->first;
	do while (p != this->last) {
		if (p->getValue == val) {
			return p;
		}
		p = p->next;
	}
}

template<typename T>
void List<T>::deleteFirst()
{
	Node<T>* buf = this->getFirst()->getNext();
	delete this->getFirst;
	this->setFirst(buf);
	delete buf;
}

template<typename T>
Node<T>* List<T>::operator[](int ind)
{
	Node<T>* p = this->getFirst;
	for (int b = 0; b <= ind; b++) {
		p = p->getNext;
	}
	delete p->getNext;
	this->setLast(p);
}

template<typename T>
void List<T>::deleteLast()
{
	delete *this[this->size - 1]->getNext;
	this->setLast(*this[this->size - 1]);
}

template<typename T>
int List<T>::indByVal(T val)
{
	Node<T>* p = this->first;
	int ans = 0;
	do while (p != this->last) {
		ans++;
		if (p->getValue == val) {
			return ans;
		}
		p = p->next;
	}
}

template<typename T>
void List<T>::swapNodes(int ind1, int ind2)
{
	Node<T>* prev = nullptr;
	Node<T>* current = this->first;
	Node<T>* iterator = this->first;
	while (iterator->next != nullptr) {

	}
}







template<typename T>
List<T>::~List()
{

}
