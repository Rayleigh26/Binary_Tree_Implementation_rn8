#include "arraybst.h"
#include<iostream>
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
		for(int i=1;i<=MAX;)
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
