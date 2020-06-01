/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		concept of Function Reference...
			(almost similar as reference variable...)
*/
#include<iostream>

using namespace std;

//	user-defined function defination...
void fun()
{
	cout<<"Inside function fun"<<endl;
}

int main()
{
	// 	Creating function reference ref which is refering to function fun

	void (&ref)() = fun;

	// 	Call the function by using the function reference...

	ref();				// o/p : Inside function fun

	return 0;
}
