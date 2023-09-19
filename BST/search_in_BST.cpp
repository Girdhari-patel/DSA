#include <iostream>
#include <queue>

// template <typename T>
// class BinaryTreeNode {
//    public:
//     T data;
//     BinaryTreeNode<T> *left;
//     BinaryTreeNode<T> *right;

//     BinaryTreeNode(T data) {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
//     ~BinaryTreeNode() {
//         if (left) delete left;
//         if (right) delete right;
//     }
// };

using namespace std;
#include "takeinput.h"

bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
	if(root==NULL)return false;   
    
          bool a =false;
          bool b = false;
 
	if(root->data == k) return true;
    
	else if(root->data>k){
  
		 a = searchInBST(root->left, k);
        } else {
         b = searchInBST(root->right, k);
        }
        return a|| b;
}
      
int main() {
    BinaryTreeNode<int> *root = takeInput();
    int k;
    cin >> k;
    cout << ((searchInBST(root, k)) ? "true" : "false");
    delete root;
}