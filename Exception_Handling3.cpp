// eg-3 of exception handling
// here divn() raises the exception and itself will be the
// exception handler
#include <iostream.h>
#include <conio.h>

void divn(int n,int d)
{
	try
	{
		if (d == 0)
			throw d;

		cout << "result = " << n/d << endl;
	}
	catch (int x)
	{
		cout << "Division by ZERO not possible";
	}
}

void main()
{
	int numer, denom;
	cout << "Enter the numer & denom :- ";
	cin >> numer >> denom;
	divn(numer,denom);
	cout << "\nEnd of main()";
}