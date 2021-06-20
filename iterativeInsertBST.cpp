#include <iostream>
using namespace std;
struct Node{
	int key;
	Node *left;
	Node *right;

	Node(int k)
	{
		key = k;
		left = right = NULL;
	}
};
Node *insert(Node *root, int k)
{
	Node *temp = new Node(k);
	Node *par = NULL;
	Node *curr = root;
	while (curr!= NULL) 
	{	par = curr;
		if(curr -> key < k)
		{
			curr = curr -> right;
		}
		else if(curr -> key > k)
		{
			curr = curr -> left;
		}
		else 
			return root;
	}
	if(par == NULL)
	{
		return temp;
	}
	if(par -> key < k)
	{
		par -> right = temp;
	}
	else
	{
		par -> left = temp;
	}
	return root;

}
void inorder(Node *root)
{
	if(root!= NULL)
	{
		inorder(root -> left);
		cout<<root -> key<<" ";
		inorder(root -> right);
	}
}
int main()
{	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int k=20;
	insert(root, k);
	insert(root, 30);
	inorder(root);
	return 0;
}