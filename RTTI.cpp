/*
	Run-Time Type Identification : 
		=> Compile time type checking is static typechecking. 
		=> Compiler checks appropriate type for correctness for this if there is error compiler generates error or warning.
		=> If we have to check datatypes at run time,then we have to do it by dyanamic checking we need to use operator dyanamic cast.

	In the below ex. we implement concept of RTTI.
		=> We use typeid operator to get the appropriate datatype,for this you need to include the typeinfo.h header file.
		=> We have used typeid operator which returns the reference of typeinfo class and the operator accepts the name 
			of variable.
		=> To get the appropriate name we use function name() which returns the name of user defined name of that particular datatype.
	Its major use is in runtime Ploymorphism,in which we can check the type of object at run time.
*/

#include<iostream>
#include<typeinfo>

using namespace std;

class Demo
{
	public:
		//code for class demo 
};

int main()
{
	int integer_variable;
	float float_variable;
	char *char_variable;
	Demo dobj;

	cout<<typeid(integer_variable).name()<<endl;	//Prints the type of variable ie int
	cout<<typeid(float_variable).name()<<endl; 		//Prints the type of variable iefloat
	cout<<typeid(char_variable).name()<<endl; 		//Prints the type of variable ie char*
	cout<<typeid(dobj).name()<<endl; 				//Prints the type of object i.e. class Demo
}
