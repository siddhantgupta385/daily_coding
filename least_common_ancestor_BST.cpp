// A recursive CPP program to find
// LCA of two nodes n1 and n2.
#include <bits/stdc++.h>
using namespace std;

// class node
// {
// 	public:
// 	int data;
// 	node* left, *right;
// };

// /* Function to find LCA of n1 and n2.
// The function assumes that both
// n1 and n2 are present in BST */
// node *lca(node* root, int n1, int n2)
// {
// 	if (root == NULL) return NULL;

// 	// If both n1 and n2 are smaller
// 	// than root, then LCA lies in left
// 	if (root->data > n1 && root->data > n2)
// 		return lca(root->left, n1, n2);

// 	// If both n1 and n2 are greater than
// 	// root, then LCA lies in right
// 	if (root->data < n1 && root->data < n2)
// 		return lca(root->right, n1, n2);

// 	return root;
// }

// // using iteration


// struct node *lca(struct node* root, int n1, int n2)
// {
// 	while (root != NULL)
// 	{
// 		// If both n1 and n2 are smaller than root,
// 		// then LCA lies in left
// 		if (root->data > n1 && root->data > n2)
// 		root = root->left;

// 		// If both n1 and n2 are greater than root,
// 		// then LCA lies in right
// 		else if (root->data < n1 && root->data < n2)
// 		root = root->right;

// 		else break;
// 	}
// 	return root;
// }

// /* Helper function that allocates
// a new node with the given data.*/
// node* newNode(int data)
// {
// 	node* Node = new node();
// 	Node->data = data;
// 	Node->left = Node->right = NULL;
// 	return(Node);
// }

// /* Driver code*/
int main()
{


	int keyp[56] = { 57, 49, 41, 33, 25, 17, 9,
					1, 58, 50, 42, 34, 26, 18,
					10, 2, 59, 51, 43, 35, 27,
					19, 11, 3, 60, 52, 44, 36,
					63, 55, 47, 39, 31, 23, 15,
					7, 62, 54, 46, 38, 30, 22,
					14, 6, 61, 53, 45, 37, 29,
					21, 13, 5, 28, 20, 12, 4 };

					sort(keyp , keyp+56);

		for(int i=0 ; i<56 ; i++){
			cout<<keyp[i]<<endl;
		}
	// Let us construct the BST
	// shown in the above figure
	// node *root = newNode(20);
	// root->left = newNode(8);
	// root->right = newNode(22);
	// root->left->left = newNode(4);
	// root->left->right = newNode(12);
	// root->left->right->left = newNode(10);
	// root->left->right->right = newNode(14);

	// int n1 = 10, n2 = 14;
	// node *t = lca(root, n1, n2);
	// cout << "LCA of " << n1 << " and " << n2 << " is " << t->data<<endl;

	// n1 = 14, n2 = 8;
	// t = lca(root, n1, n2);
	// cout<<"LCA of " << n1 << " and " << n2 << " is " << t->data << endl;

	// n1 = 10, n2 = 22;
	// t = lca(root, n1, n2);
	// cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << endl;
	return 0;
}
