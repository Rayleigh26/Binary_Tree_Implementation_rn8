#include <iostream>
#include "LinkedBST.h"

LinkedBST::LinkedBST(){
    root=NULL;
}

void LinkedBST::add(int data){
    add(root,data);
}


void LinkedBST::add(Node* &root,int data){
    Node* newNode=new Node();
    newNode->data=data;
    if(root==NULL){
        root=new Node();
        this->root=newNode;
    }
    else{
        insert(root,newNode);
    }
}



void LinkedBST::insert(Node* &subtree, Node* newNode){
    if(subtree->data>newNode->data){
        if(subtree->left!=NULL){
            insert(subtree->left,newNode);
        }
        else{
            subtree->left=newNode;
        }
    }
    else{
        if(subtree->right!=NULL){
            insert(subtree->right,newNode);
        }
        else{
            subtree->right=newNode;
        }
    }   
}


bool LinkedBST::search(int data){
    return find(root,data);
}

bool LinkedBST::find(Node* &root,int targetKey){
    if(root==NULL){
        std::cout<<"It is a Null tree"<<std::endl;
    }
    else{
        Node* p=new Node();
        p=root;
        while(p!=NULL){
            if(targetKey>p->data){
                p=p->right;
            }
            else if(targetKey<p->data){
                p=p->left;
            }
            else if(targetKey==p->data){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}


void LinkedBST::preorderTraversal(){
    traverse(root);
}

void LinkedBST::traverse(Node* root) { 
    if (root == NULL) 
    return; 
  
    
    std::cout << root->data << " "; 
  
    
    traverse(root->left);  
  
    
    traverse(root->right); 
}  
int LinkedBST::min()
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

int LinkedBST::max()
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}
int main(){

    cout<<"binary tree Implementation using linked list"<<endl;
    LinkedBST tree;
    cout<<"Pre order traveral: "<<endl;
    tree.add(1);
    tree.add(2);
    tree.add(3);
    tree.add(4);
    tree.preorderTraversal();
    cout<<endl;
    cout<<"Add a number : "<<endl;
    cout<<"Pre order traveral: "<<endl;
    int anum;
    cim>>anum;
    tree.add(anum);
    tree.preorderTraversal();
    cout<<endl;
    cout<<"enter a number to search";
    int num1;
    cin>>num1;
    if(tree.search(num1) == 1){
        cout<<"Yes!";
    }else{
        cout<<"NO!";
    }
    cout<<endl;
    cout<<"\nmaximun element is:"<<LinkedBST.max()<<"\n";
    cout<<"\nminimun element is:"<<LinkedBST.min()<<"\n";

} 

