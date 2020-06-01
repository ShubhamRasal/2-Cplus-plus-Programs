/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		the concept of an "UNNAMED NAMESPACE"
	PURPOSE :
		=> This namespace has no name and because of this 
			 we cannot access it's members outside the namespace 
				as well as outside the program...
*/

#include<iostream>

using namespace std;

namespace
{
	class demo
	{
		public:
			demo()
			{
				cout<<"Constructing object of demo class"<<endl;
			}
			~demo()
			{
				cout<<"Destucting object of demo class"<<endl;
			}
	};	//end of demo class
}	// end of namespace

int main()
{
	demo obj;
	return 0;
}
