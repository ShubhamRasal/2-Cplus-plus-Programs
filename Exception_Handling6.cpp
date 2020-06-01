// Rethrowing an exception by a called fn back to calling fn
#include <iostream.h>

void chkdata(int i)
{
	try
	{
		if (i == 10)
			throw i;
	}
	catch (int x)
	{
		cout << "chkdata() has handled part of exception" << endl;
		throw;  // rethrow the exception
	}
}

void main()
{
	try
	{
		chkdata(10);
	}
	catch (char ch)
	{
		cout << "Exception thrown by char var" << endl;
	}
	catch (int x)
	{
		cout << "Exception thrown by int var & caught by main()" << endl;
	}
}