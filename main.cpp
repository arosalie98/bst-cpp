#include "bst.h"

int main() {
  BST ll = BST("root node", 50);

  cout << "root node data: " <<  ll.root->data << ", value: " <<  ll.root->value << endl;

  ll.insert("rchild 1", 55);
  ll.insert("lchild 1", 45);

  cout << "root->rchild data: " << ll.root->rchild->data
       << ", value: " << ll.root->rchild->value << endl;

  cout << "root->lchild data: " << ll.root->lchild->data
       << ", value: " << ll.root->lchild->value << endl;

  ll.insert("rchild 2", 52);
  ll.insert("lchild 2", 48);

  Node *rchildTwo = ll.root->rchild->lchild;
  cout << "root->rchild->lchild data: " << rchildTwo->data
       << ", value: " << rchildTwo->value << endl;

  Node *lchildTwo = ll.root->lchild->rchild;
  cout << "root->lchild->rchild data: " << lchildTwo->data
       << ", value: " << lchildTwo->value << endl;

  cout << "depth of root node is: " << ll.depthOf(50) << endl;
  cout << "depth of root->rchild is: " << ll.depthOf(55) << endl;
  cout << "depth of root->lchild is: " << ll.depthOf(45) << endl;

  cout << "depth of root->rchild->lchild is: " << ll.depthOf(52) << endl;
  cout << "depth of root->lchild->rchild is: " << ll.depthOf(48) << endl;

  ll.insert("rchild 3", 53);
  ll.insert("rchild 4", 54);

  cout << "depth of root->rchild->lchild->rchild is: " << ll.depthOf(53) << endl;
  cout << "depth of root->rchild->lchild->rchild->rchild is: " << ll.depthOf(54) << endl;

  return 0;
}