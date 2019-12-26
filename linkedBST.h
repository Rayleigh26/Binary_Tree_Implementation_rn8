#ifndef linkedBST_h
#define linkedBST_h
class Node{
	int data;
	Node *left;
	Node *right;
};
class LinkedBST: public BinarySearchTree{
	public:
		LinkedBST();
		~LinkedBST();
	
		void insert(int data);
		Node *search(int data);
	private:
		Node *root;
};
LinkedBST::LinkedBST(){
	root=Null;
}
void LinkedBST::insert(int data){
	Node* new_node = new Node();
	root=new_node;
	
 
	
	
