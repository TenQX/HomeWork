#pragma once
#include<iostream>
using namespace std;

template<typename T>
struct TreeNode {
	T value;
	TreeNode<T>* left;
	TreeNode<T>* right;
	TreeNode(T value) : value(value), left(nullptr), right(nullptr) {};
	TreeNode(T value, TreeNode<T>* left, TreeNode<T>* right) : value(value), left(left), right(right) {};
};

template <typename T>
class Bin {
private:
	TreeNode<T>* root = nullptr;
public:
	TreeNode<T>* getRoot();
	void setRoot(TreeNode<T>* p);
	void insert(T value, TreeNode<T>* root);
	Bin(T* arr, int size);
	void Print();

};

template<typename T>
inline TreeNode<T>* Bin<T>::getRoot()
{
	return this->root;
}

template<typename T>
inline void Bin<T>::setRoot(TreeNode<T>* p)
{
	this->root = p;
}

template<typename T>
inline void Bin<T>::insert(T value, TreeNode<T>* aRoot)
{
	TreeNode<T>* p = new TreeNode<T>(value);
	if (aRoot->left == nullptr && aRoot->right == nullptr) {
		if (p->value >= aRoot->value) aRoot->right == p;
		else aRoot->left == p;
		return;
	};
	if (p->value >= aRoot->value) {
		if (aRoot->right == nullptr) aRoot->right = p;
		else insert(p->value, aRoot->right);
	}
	else {
		if (aRoot->left == nullptr) aRoot->left = p;
		else insert(p->value, aRoot->left);
	}
}

template<typename T>
inline Bin<T>::Bin(T* arr, int size)
{
	this->setRoot(new TreeNode<T>(arr[0]));
	for (int b = 1; b < size; b++) {
		insert(arr[b], p);
	}
}

template<typename T>
inline void Bin<T>::Print()
{

	if  != null
		inorderTraversal(x.left)
		print x.key
		inorderTraversal(x.right)
}


