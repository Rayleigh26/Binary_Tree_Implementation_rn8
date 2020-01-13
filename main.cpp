#include<iostream>
#include"linkedBST.h"
using namespace std;
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

    cout<<"searching"<<num1<<"wait for a while";
    (tree.search(num1) == 1) ? cout<<"Yes!" : cout<<"NO!";
    cout<<endl;

}