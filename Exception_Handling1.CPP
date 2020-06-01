// eg. 1 of exception handling
// here the code in main() will raise the exception & main() itself will
// be the exception handler
#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int numer, denom;
	cout << "Enter the numer and denom (non-zero) :- ";
	cin >> numer >> denom;
	int result;
	try
	{
		if (denom == 0)
			throw denom;    // throw int

		result = numer / denom;
		cout << numer << " / " << denom << " = " << result;
	}
	catch (int x)
	{
		cout << "Denom cannot be zero";
		cout << "\nDivison not possible";
	}
	cout << "\nEnd of main()";
	getch();
}












int x = 10,y = 20;
x+y;

demo obj;
obj + 5;		// obj.+(5);		+(obj,5);
5+obj;		// 5.+(obj)			+(5,obj);












