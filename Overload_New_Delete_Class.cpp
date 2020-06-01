/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		the concept of 'new' and 'delete' opearator defined in the class itself...
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class demo
{
	public:
		int i;

		demo()
		{	
			cout<<"Constructing object of demo class"<<endl;
		}

		~demo()
		{
			cout<<"Destructing object of demo class"<<endl;
		}

		void * operator new(size_t s, int x)
		{
			cout<<"Inside operator new"<<endl;
			demo * p =(demo*)malloc(sizeof(demo));
			p->i = x;
			return p;
		}

		void operator delete(void *p)
		{
			cout<<"Inside operator delete"<<endl;
			free(p);
		}
};

int main()
{
	// Important syntax to invoke new operator
		demo *p = new(10)demo;

		cout<<p->i<<endl;

		delete p;

		return 0;
}
