#include "Node.h"
using namespace std;

template<typename T>
Node<T>::Node() {}

template<typename T>
Node<T>::Node(T value)
{
	this->value = value;
}

template<typename T>
void Node<T>::setValue(T value)
{
	this->value = value;
}

template<typename T>
T Node<T>::getValue()
{
	return this->value;
}

template<typename T>
void Node<T>::setNext(Node* next)
{
	this->next = next;
}

template<typename T>
Node<T>* Node<T>::getNext()
{
	return this->next;
}

template<typename T>
Node<T>::~Node()
{

}

