// an eg of nested try blocks. Here if an exception is 
// generated in the inner try block, and the catch() associated
// with this try is unable to handle that exception, then the
// catch auto. propagates to catch of outer try block, where
// it may be handled if matching catch block exists. Otherwise
// it will result in abnormal termination of program
#include <iostream.h>

void main()
{
	try
	{
		for (int i=1;i<=5;i++)
		{
			try
			{
			   if (i == 1)
				throw i;
			   else if (i == 2)
				throw 2.5;
			   else if (i == 3)
				throw 'a';

			  cout << "No. is OK" << endl;
			}  // end of inner try
			catch (int x)
			{
				cout << "Exception thrown bcoz i = " << i << endl;
			}
			catch (char ch)
			{
				cout << "Exception thrown bcoz i = " << i << endl;
			}
		}  // end of for loop
	} // end of outer try
	catch (double m)
	{
		cout << "Exception thrown bcoz i=2" << endl;
	}
}
			
	