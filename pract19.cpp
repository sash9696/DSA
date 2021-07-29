#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

void inorder(Node *root) {
    if (root == NULL) return;
    vector<int> v;
    inorder(root -> left);
    // cout<<root -> key<<" ";
    v.push_back(root->key);x
    inorder(root -> right);
    return v;
}  

int main() {
    
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> left -> left = new Node(30);
    root -> left -> right = new Node(40);
    root -> right = new Node(50);
    root -> right -> left = new Node(60);
    root -> right -> right = new Node(70);

    inorder(root);

    return 0;
}