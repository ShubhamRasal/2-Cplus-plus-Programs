/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE EXPLANATION ABOUT THE 'virtual destructor'...
*/

#include<iostream>

using namespace std;

// base1 and derived1 are just two simple classes,
//	 which only contains defination for the constructor and destructor...

class base1
{
	public:
		base1()			// constructor
		{
			cout<<"In base1 constructor\n";
		}

		~base1()		// destructor
		{
			cout<<"In base1 destructor\n";
		}
};

class derived1 : public base1	// base1 publically inherited...
{
	public:
		derived1()
		{
			cout<<"In derived1 constructor\n";
		}

		~derived1()
		{
			cout<<"In derived1 destructor\n";
		}
};

// class base2 and derived2 also contains definations for constructors and destructors...
// destructor for 'base2' is declared as 'virtual destructor...
'
class base2
{
	public:
		base2()
		{
			cout<<"In base2 constructor\n";
		}
		virtual ~base2()
		{
			cout<<"In base2 virtual destructor\n";
		}
};

class derived2 : public base2		// base2 publically inherited...
{
	public:
		derived2()
		{
			cout<<"In derived2 constructor\n";
		}
		~derived2()		// no need to specify 'virtual' keyword before the derived destructor...
		{
			cout<<"In derived2 destructor\n";
		}
};

int main()
{
// 	VIRTUAL CONCEPT IS ONLY APPLICABLE ON POINTER TYPE/REFERENCE TYPE AND NOT ON THE OBJECT...

	base1 *dobj1 = new derived1;	// constructors in TOP TO BOTTOM fashion gets called...
	delete dobj1;					// destructor for base1 is called...i.e. according to pointer type...

	base2 *dobj2 = new derived2;	// destructor is written as virtual in 'base2'...
	delete dobj2;					// destructor for the derived class gets called and after that base2...

	return 0;
}
