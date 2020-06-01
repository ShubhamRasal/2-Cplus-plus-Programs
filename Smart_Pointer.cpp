/*
	Smart Pointer:
		=> When we want to call a member function of class then we can use object of that class or pointer of that class.
		=> if we use object of that class then we have to use dot ('.') operator to access member function
			and if we use pointer then we have to use indirect ('->') operator to access member function.
		=> But if you want to access member function of class by using object of that class and '->' operator then gives error. 
		=> To solve this error we have to overload a '->' operator and returns the address of some another object...
*/

#include<iostream>

using namespace std;

class Demo
{
	private:
		const int i;

	public:
		Demo():i(20) 		//initialized constant member 'i' using initilization list...
		{
		}
		void gun(); 		// prototype declaration for gun()...
};

// 	defination for the function gun()...
void Demo::gun()
{
	cout<<"Call This function using smart pointer"<<endl;
	cout<<"Value of Member Variable i is "<<i;
}

class SmartPointer
{
	public:
		Demo d;						//Created Object of Demo class
		Demo* operator ->();
};

/*
In This Function '->' operator is overloaded, that returns the address of Demo class
*/
Demo * SmartPointer:: operator ->()
{
	return &d;
}

int main()
{
	SmartPointer sp;

	sp->gun(); 		// Calls the function gun() using object of that class and '->' operator.

	return 0;
}
