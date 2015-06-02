#include<bits/stdc++.h>
using namespace std;
struct node {
	int value;
	node *left, *right;
	node *parent;
	bool isRed;
	//here
	node(int val, bool color, node * par, node *l, node *r) {
		value = val;
		isRed = color;
		parent = par;
		left = l;
		right = r;
	}
	node() {
		value = 0;
		isRed = false;
		parent = NULL;
		left = NULL;
		right = NULL;
	}
};
class RBT {
public:

	int sz;
	node *root;
	RBT() {
		sz = 0;
		root = NULL;
	}
	void print(node *x, int lvl) {
		if (x == NULL)
			return;
		print(x->left, lvl + 1);
		cout << x->value << "  level " << lvl << " ";
		if (x->isRed)
			cout << "red" << endl;
		else
			cout << "black" << endl;
		print(x->right, lvl + 1);
	}
	void printDetail(node *x, int lvl) {
		if (x == NULL)
			return;
		printDetail(x->left, lvl + 1);
		cout << x->value << "  level " << lvl << " ";
		if (x->isRed)
			cout << "red" << " ";
		else
			cout << "black" << " ";
		if (x->parent != NULL)
			cout << " parent=" << x->parent->value << " ";
		if (x->left != NULL)
			cout << " left=" << x->left->value;
		if (x->right != NULL)
			cout << " right=" << x->right->value;
		cout << endl;
		printDetail(x->right, lvl + 1);
	}
	bool find(int val) {
		node *x = root;
		while (x != NULL) {
			if (x->value == val)
				return 1;
			else if (val > x->value)
				x = x->right;
			else
				x = x->left;
		}
		return 0;
	}
	void rotateLeft(node *& n) {
		cout << "ROTATE LEFT" << endl;
		node* par = n->parent;
		node* temp = n->right;
		n->parent = temp;
		temp->parent = par;
		n->right = temp->left;
		temp->left = n;
		n = temp;

		if (n->parent != NULL) {
			node * x = n->parent;
			if (n->value > x->value)
				x->right = n;
			else
				x->left = n;
		}
//	    printDetail(n,0);
//	    cout<<"***************asdas\n";
//
//	    print(temp,0);
//	    cout<<"***************tmp\n";
	}
	void rotateRight(node *& n) {
		cout << "ROTATE RIGHT" << endl;
		node* par = n->parent;
		node *temp = n->left;
		n->parent = temp;
		temp->parent = par;
		n->left = temp->right;
		temp->right = n;
		n = temp;

		if (n->parent != NULL) {
			node * x = n->parent;
			if (n->value > x->value)
				x->right = n;
			else
				x->left = n;
		}
	}
	void flipColor(node *&h) {
		h->isRed = true;
		if (h->left != NULL)
			h->left->isRed = false;
		if (h->right != NULL)
			h->right->isRed = false;
	}
	void getRoot(node *n) {
		node * n2 = n;
		while (n2->parent != NULL)
			n2 = n2->parent;
//		cout<<n2->value<<endl;
		root = n2;
	}
	void insert(int val) {
		if (sz == 0) {
			root = new node(val, false, NULL, NULL, NULL);
			sz++;
			return;
		}
		node *parent = root;
		node *h;
		if (val > root->value) {
			h = root->right;
		} else {
			h = root->left;
		}
		while (h != NULL) {
			parent = h;
			if (val > h->value) {
				h = h->right;
			} else {
				h = h->left;
			}
		}
		h = new node(val, true, parent, NULL, NULL);
		if (val > parent->value)

		{
			parent->right = h;
			balance(parent->right);

		} else {
			parent->left = h;
			balance(parent->left);
		}
//		print(root, 0);
//		cout << "*****kkkkkk*************\n";
//		node *k=parent;
//		while (parent->parent != NULL) {
//			parent = parent->parent;
//		}
//		root = parent;
		sz++;
		return;
	}

	void balance(node *&n) {
		if (n->parent == NULL) {
			n->isRed = false;
			return;
		}
		if (n->parent->isRed) {
			node *grandParent = n->parent->parent;
			if (grandParent != NULL) {
				//red uncle
				if (grandParent->left != NULL && grandParent->left->isRed
						&& grandParent->right != NULL
						&& grandParent->right->isRed) {
					cout << "red uncle\n";
					flipColor(grandParent);
					balance(grandParent);
//					getRoot(grandParent);
				}
				//left left
				else if (grandParent->left != NULL && grandParent->left->isRed
						&& grandParent->left->left == n) {
					cout << "left left\n";
					rotateRight(grandParent);
					grandParent->isRed = false;
					grandParent->right->isRed = true;
					getRoot(grandParent);
				}
				//left right
				else if (grandParent->left != NULL && grandParent->left->isRed
						&& grandParent->left->right == n) {
					cout << "left right\n";
					rotateRight(grandParent->left);
					rotateRight(grandParent);
					grandParent->isRed = false;
					grandParent->right->isRed = true;
					getRoot(grandParent);
				}

				//right right
				else if (grandParent->right != NULL && grandParent->right->isRed
						&& grandParent->right->right == n) {
					cout << "right right\n";
					rotateLeft(grandParent);
					grandParent->isRed = false;
					grandParent->left->isRed = true;
					getRoot(grandParent);

////					cout<<grandParent->parent->value<<endl;
//					printDetail(grandParent, 0);
//					cout << "************************\n";
				}
				//right left
				else if (grandParent->right != NULL && grandParent->right->isRed
						&& grandParent->right->left == n) {
					cout << "right left\n";
					rotateRight(grandParent->right);
					rotateLeft(grandParent);
					grandParent->isRed = false;
					grandParent->left->isRed = true;
					getRoot(grandParent);
				}

			}
		}

	}

};
int main() {
	RBT tree;
	int x;
	while (cin >> x) {
		tree.insert(x);
		tree.printDetail(tree.root, 0);
	}

	return 0;
}
