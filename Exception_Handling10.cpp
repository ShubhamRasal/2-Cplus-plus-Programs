// an eg. of generic exception handler
#include <iostream.h>

void main()
{
	for (int i=1;i<=5;i++)
	{
		try
		{
			if (i==1)
				throw i;
			else if (i==2)
				throw 2.5;
			else if (i==3)
				throw 'a';
			
			cout << "No. is OK" << endl;
		}
		catch (...)
		{
			cout << "Exception thrown bcoz i = " << i << endl;
		}
		// do not specify any exception handler
		// below this. Otherwise it will result in
		// compile time error
	}
	cout << "End of main()";
}	
				