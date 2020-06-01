// an eg. of multiple catch blocks with a single try
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
		catch (int x)
		{
			cout << "Exception thrown bcoz i = " << x << endl;
		}
		catch (double m)
		{
			cout << "Exception thrown bcoz i = 2" << endl;
		}
		catch (char ch)
		{
			cout << "Exception thrown bcoz i = 3" << endl;
		}
	}
	cout << "End of main()";
}	
				