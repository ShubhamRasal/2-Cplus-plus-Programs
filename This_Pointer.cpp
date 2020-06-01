/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE EXPLANATION ABOUT THE 'this' POINTER,
		  WHICH ALWAYS GETS PASSED AS A HIDDEN PARAMETER...
*/

#include<iostream>

using namespace std;

class demo
{
	public:
		int i,j;	// charachteristics of the class...

	// constructor defination...
	demo()
	{
		cout<<"In constructor of demo class\n";
		// 	data-members initialisation...
		i = 10;
		j = 20;

			/************************************************
				We can use this pointer in constructor also.
			***********************************************/

		this->sun();	 // call goes to sun()...
	}

	// destructor defination...
	~demo()
	{
		cout<<"In destructor of demo class\n";

			/************************************************
				We can use this pointer in destructor also.
			************************************************/

		this->sun();
	}

	void sun()
	{
			cout<<"In function sun\n";
	}

	void fun(int x)
	{
		demo obj2;
		// Use of this pointer
		this->i = x;		// 'i' will contain the value equal to 'x'
		(*this).i = x;		
		this-> sun();		// sun() gets called for the invoker...
		this = &obj2;
	}

	// function returning the reference of changed object
	demo & gun()
	{
		this->i = 30;		//	'i' will changed to 30...
		return *this;
	}

	/*
		demo obj;
		obj.mun();

		demo *dp = new demo();
		dp->mun();
	*/
	void mun()
	{
		// We can delete the object which is created dynamically.

		cout<<"\nDeleting the caller object which is created dynamically\n";
		delete(this);		// destructor for the caller object gets called...
	}
};

int main()
{
	demo obj;		// 'obj' is an object of class 'demo'

	// function gets called using object...
	obj.fun(50);
	//fun(&obj,50);

	obj = obj.gun();

	cout<<endl<<"Value of i after modifaication is"<<obj.i<<endl;

	demo *dp = new demo;	// pointer of the type 'demo' is created...
	
	// member function get called using 'dp'...
	dp->mun();
	//mun(dp);

	obj.fun(50);
	//fun(&obj,50);
	return 0;
}
