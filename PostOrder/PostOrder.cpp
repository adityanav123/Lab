#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
  int val;
  Node* left, *right;
  Node(int a) : val(a), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int val) {
  if (root == nullptr) return new Node(val);
  else {
    if (root->val > val) {
      root->left = insert(root->left, val);
    }
    else {
      root->right = insert(root->right, val); 
    }
  }
  return root;
}

void postOrder (Node* root, vector<int> &p) {
  if (root) {
    postOrder(root->left, p);
    postOrder(root->right, p);
    // cout << root->val << " ";
    p.push_back(root->val);
  }
}

int main () {
  vector<int> a = {4, 1, 9, 6, 2};
  int value = 6;

  Node* root = nullptr;
  for (auto x : a) {
    root = insert(root, x);
  }
  vector<int> porder;
  postOrder(root, porder);
  // for (auto x : porder) cout << x << " ";
  // cout << "\n";
  int i;
  for (i = 0; i < porder.size(); i++) {
    if (porder[i] == value) break;
  }
  if(i >  0 && i < proder.size()) cout << porder[i-1] << "\n";
  else cout << "-1\n";
  return 0;
}
