#include "../header/bstTree.h"
using namespace std;

// ���̷��� �ڵ�
int multiple(int a, int b) {
	return a * b;
}

/* ������ */
template <typename T>
BinarySearchTree<T>::BinarySearchTree(){
	root = nullptr; 
};