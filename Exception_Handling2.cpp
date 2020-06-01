// eg-2 of exception handling
// here divn() raises the exception but main() will be the
// exception handler
#include <iostream.h>
#include <conio.h>

int divn(int n,int d)
{
	if (d == 0)
		throw "Division by ZERO not possible";

	return n / d;
}

void main()
{
	int numer, denom;
	cout << "Enter the numerator & denominator :- ";
	cin >> numer >> denom;
	try
	{
		cout << numer << " / " << denom << " = " << divn(numer,denom) << endl;
	}
	catch (char *msg)
	{
		cout << msg;
	}
	cout << "\nEnd of main()";
}







	