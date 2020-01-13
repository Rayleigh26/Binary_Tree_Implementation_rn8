#ifndef linkedBST_h
#define linkedBST_h
#include "binary.h"
class Node{
	int data;
	Node *left;
	Node *right;
};
class LinkedBST: public BinarySearchTree{
	public:
		LinkedBST();
		~LinkedBST();
		    void add(int data);
    void add(Node* &root,int data);
		bool find(Node* &root,int targetKey);
		void insert(int data);
		bool search(int data);
		void traverse(Node* root);
	private:
		Node *root;
};

 
	
	
