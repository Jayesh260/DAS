#include <iostream>
using namespace std;
struct node {
  int key;
  struct node *left, *right;
};
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);
  return node;
}
void traverse(struct node *root) {
  if (root != NULL) {
    traverse(root->left);
    cout << root->key << " ";
    traverse(root->right);
  }
}
struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}
struct node *deletenode(struct node *root, int key) {
  if (root == NULL) return root;
  if (key < root->key)
    root->left = deletenode(root->left, key);
  else if (key > root->key)
    root->right = deletenode(root->right, key);
  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deletenode(root->right, temp->key);
  }
  return root;
}
int main() {
  struct node *root = NULL;
  int n,dele;
  cout<<"enter the no of element of the tree"<<endl;
  cin>>n;
  while(n--){
      int temp;
      cin>>temp;
      root=insert(root,temp);
  }
  cout << "Data stored in the tree is : ";
  traverse(root);
  cout<<" "<<endl;
  cout<<"enter the data which you want to delete"<<endl;
  cin>>dele;
  root=deletenode(root,dele);
  cout<<"the new tree is :"<<endl;
  traverse(root);
}