#ifndef BINARY_H
#define BINARY_H

class BinarySearchTree{
	virtual void preorderTraversal()=0;
	virtual void add(int data)=0;
	virtual bool search(int data)=0;
	virtual int max()=0;
};

	
