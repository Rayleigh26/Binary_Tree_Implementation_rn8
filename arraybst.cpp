#include "arraybst.h"
#include<iostream>
#include<stack>
arraybst::arraybst()
{
	for(int i=0;i<=MAX;i++)
		this->element[i]=0;
}
arraybst::~arraybst(){}
void arraybst::add(int data)
{
	if(this->element[0]==0)
		element[1]=data;
	else
	{
		for(int i=1;i<MAX;)
		{
			if(data<this->element[i])
				i=i*2;
			else
				i=i*2+1;
			if(element[i]==0)
			{
				this->element[i]=data;
				break;
			}
		}
	}
	this->element[0]+=1;
}
bool arraybst::search(int data)
{
	for(int i=1;i<MAX;i++)
		{
			if(data==this->element[i])
				return 1;
			
		}
		return 0;
	

}
void arraybst::preorderTraversal()
{
	std::stack <int> s;
	int i=1,j;
	int root=this->element[1];
	
	while(true)
	{	
			
			while(this->element[i]!=0 && i<MAX)
			{
				std::cout<<this->element[i]<<std::endl;
				s.push(i);
				i=i*2;
				
				
			}
			if(s.empty())
				return;
			
			i=s.top();
			s.pop();
			i=i*2+1;
	}


}
void arraybst::inorderTraversal()
{
	std::stack <int> s;
	int i=1,j;
	int root=this->element[1];
	
	while(true)
	{	
			
			while(this->element[i]!=0 && i<MAX)
			{
				
				s.push(i);
				i=i*2;
				
				
			}
			if(s.empty())
				return;
			
			i=s.top();
			s.pop();
			std::cout<<this->element[i]<<std::endl;
			i=i*2+1;
	}


}
int arraybst::min()
{

	for(int i=1;i<MAX;)
	{
		if(0==this->element[i*2]||MAX<i*2)
			return element[i];
		else
			i=i*2;
			
	}
	return 0;
}
int arraybst::max()
{
	for(int i=1;i<MAX;)
	{
		if(0==this->element[i*2+1]||MAX<(i*2+1))
			return element[i];
		else
			i=i*2+1;
			
	}
	return 0;
		
}
int main()
{
	arraybst A;
	A.add(25);
	A.add(15);
	A.add(50);
	A.add(10);
	A.add(22);
	A.add(35);
	A.add(70);
	A.add(4);
	A.add(12);
	A.add(18);
	A.add(24);
	A.add(31);
	A.add(44);
	A.add(66);
	A.add(90);
	
	
	
	std::cout<<A.search(2)<<std::endl;
	std::cout<<A.search(7)<<std::endl;
	std::cout<<A.min()<<std::endl;
	std::cout<<A.max()<<std::endl;
	std::cout<<std::endl;
	A.preorderTraversal();
	std::cout<<std::endl;
	A.inorderTraversal();
	return 0;
	
}
