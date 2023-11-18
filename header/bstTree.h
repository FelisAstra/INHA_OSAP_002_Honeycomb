#ifndef BSTTREE_H_
#define BSTTREE_H_

int multiple(int a, int b); // ���̷��� �ڵ�

/* Node ����ü */
template <typename T>
struct Node {
  T key;
  Node* left;
  Node* right;
  int height;
};

/* BST Ŭ���� */
template <typename T>
class BinarySearchTree {
 public:
  BinarySearchTree();
  // ��� �Լ� ���� �ʿ�
 private:
  typedef Node<T>* NodePtr;
  NodePtr root;
};
#endif  // BSTTREE_H_




