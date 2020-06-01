/* 
	THIS PROGRAM ILLUSTRATES ABOUT :
		the concept of "mutable" keyword...
	USE : If member of class is declared as mutable then,
			 we can change that member even it is a constant object...
*/

#include<iostream>

using namespace std;

class demo
{
	public:
		mutable int i;
		int j;

		demo()
		{
			i = 10;
			j = 20;
			cout<<"Constructing object of class demo value of i : "<<i<<endl;
		}
		~demo()
		{
			cout<<"Destructing object of class demo"<<endl;
		}
		void fun() const
		{
			cout<<"Inside constant member function fun value of i : "<<i<<endl;
			i++;
		}
};

int main()
{
	const demo obj;
	obj.i++;

//	obj.j++;	// 	It generates error because j is not mutable...

	obj.fun();

	return 0;
}
