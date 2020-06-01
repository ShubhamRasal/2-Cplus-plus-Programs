// to accept strings from user
#include <iostream.h>
#include <conio.h>

void main()
{
	char fn[30];
	clrscr();
	cout << "Enter your fullname :- ";
	// cin >> fn;  will not accept data after space
	cin.getline(fn,sizeof(fn));  // char [], int
	cout << "Your fullname is " << fn;
	getch();
}