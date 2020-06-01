// to round off a no. upto required no. of decimal places
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>  // for manipulators with arguments

void main()
{
	int sum, no;
	float avg;
	clrscr();
	cout << "Enter the sum and no :- ";
	cin >> sum >> no;
	avg = float (sum) / no;
	cout << setprecision(2);
	cout << "Average is " << avg;
	getch();
}