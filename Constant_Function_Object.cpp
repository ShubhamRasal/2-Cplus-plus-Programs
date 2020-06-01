/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		-> 	constant member function.
		-> 	constant object.
		different ways for calling the constant and non-constant member functions,
			using appropriate type (const/non-const) of object...
*/

#include<iostream>

using namespace std;

class demo
{
	public:
		int i;
		const int j;

		demo() : j(20)
		{
			i = 10;
		}
/*
		// We can not write constant constuctor & Destructor

		demo() const
		{
		}

		~demo() const
		{
		}
*/
	// 	This is non constant member funcion in which we can change contents of caller object.
		void NonConstFun()
		{
			cout<<"Inside non constant member function"<<endl;
			// Changing member of caller object
			++i;
		}

	// 	This is a constant member function means we can not change contents of caller object inside this function. 
	//	This function can be called by using constant as well as non constant object.

		void ConstFun() const
		{
			cout<<"Inside constant member function"<<endl;
			// 	Unable to Change member of class of caller object...
			//++i;			// NOT ALLOWED
		}

	// 	We can change the input parameters of constant member function...
		void ConstFunWithParam(int x) const
		{
			cout<<"Inside constant member function with parameters"<<endl;
			// Changing input parameters...
			x++;				// ALLOWED
		}

	// 	If the constant function accept parameter as an object 
	// 		then we can change the contents of data member using that object...

		void ConstFunWithObject(demo *ptr) const
		{
			cout<<"Inside constant function which accept object as aparameter";
			(ptr->i)++;			// ALLOWED
			//i++;				// NOT ALLOWED
		}
};

int main()
{
	// Non constant object can call any member function
	demo obj1;

	obj1.ConstFun();
	obj1.NonConstFun();

	// Constant object can call only constant member functions
	const demo obj2;

	obj2.ConstFun();

	// Unable to call non constant member function
	//	obj2.NonConstFun();

	// constant member function accepting object as a parameter called using non-constant object...
	obj1.ConstFunWithObject(&obj1);

	return 0;
}
