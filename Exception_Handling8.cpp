// an eg. of Exception Specification
// It means the fns can throw exceptions of specified types only
#include <iostream.h>

void fn(int i) throw (char,double)
{
	if (i == 1)
		throw 2.5;   // ok
	else if (i == 2)
		throw 'r';  // ok
	else if (i == 3)
		throw i;    // not ok

	cout << "No. is other than 1-3" << endl;
}

void main()
{
	try
	{
		fn(1);
	}
	catch (char ch)
	{
		cout << "Exception raised bcoz i = 2";
	}
	catch (double d)
	{
		cout << "Exception raised bcoz i = 1";
	}
}