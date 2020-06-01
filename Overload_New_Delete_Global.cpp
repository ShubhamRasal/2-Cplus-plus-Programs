/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		the concept of 'new' and 'delete' opearator...
		 methods defined outside the class globally...
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

void * operator new(size_t s)
{
	cout<<"Inside the new operator"<<endl;
	void *q = malloc(s);
	return q;
}

void operator delete(void *p)
{
	cout<<"Inside the delete operator"<<endl;
	free(p);
}

class demo
{
	public:

		demo()
		{
			cout<<"Constructing object of class demo"<<endl;
		}
		~demo()
		{
			cout<<"Destructing object of class demo"<<endl;
		}
};

int main()
{
	int *p = new int;
	*p = 21;
	cout<<*p;
	delete p;

	demo *q =new demo;
	delete q;
	return 0;
}
