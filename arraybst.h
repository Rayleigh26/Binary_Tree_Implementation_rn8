#include "binary.h"
#define MAX 16
class arraybst:public BinarySearchTree
{
	private:
		int element [MAX];
	public:
	arraybst();
	~arraybst();
	void preorderTraversal();
	void inorderTraversal();
	void add(int data);
	bool search(int data);
	int max();
	int min();
	
};
