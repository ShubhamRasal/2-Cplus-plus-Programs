// Write a CPP program to perform following string operations by overloading
// the given operators
// 1. + String Concatenation
// 2. == String Comparison
// 3. = String Assignment/Copy
// 4. - String Reverse
// 5. << String Display
// 6. >> String Accept
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

class String
{
	private :
		char str[80];
	public :
		// binary operators
		String operator + (String &);  // passing the explicit object
		int operator == (String &);  // by reference is not compulsory
		String operator = (String &);  // but saves memory
		// unary operator
		String operator - ();
		// input & output operator fns are friend fns
		friend ostream & operator << (ostream &,String &);
		friend istream & operator >> (istream &,String &);
};

// fn defns
String String::operator + (String & objs)
{
	String temp;
	strcpy(temp.str,str);
	strcat(temp.str,objs.str);
	return temp;
}

int String::operator == (String & objs)
{
	if (strcmp(str,objs.str) == 0)
		return 1;    // strings are same

	return 0;  // strings are not same
}

String String::operator = (String & objs)
{
	strcpy(str,objs.str);
	return *this;
}

String String::operator - ()
{
	strrev(str);
	return *this;
}

ostream & operator << (ostream & out,String & objs)
{
	out << objs.str << endl;
	return out;
}

istream & operator >> (istream & in,String & objs)
{
	cout << "Enter the string :- ";
	in >> objs.str;
	return in;
}

void main()
{
	String s1, s2, s3;
	int choice;
	while (1)
	{
		clrscr();
		cout << "String Operations\n\n";
		cout << "1. String Concatenate\n";
		cout << "2. String Compare\n";
		cout << "3. String Copy\n";
		cout << "4. String Reverse\n";
		cout << "5. Exit\n\n";
		cout << "Enter your choice :- ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				cout << "Enter 2 strings :- \n";
				cin >> s1 >> s2;
				s3 = s1 + s2;  // s3 = s1.operator +(s2);
				cout << "s3 is " << s3 << endl;
				break;

			case 2:
				cout << "Enter 2 strings :- \n";
				cin >> s1 >> s2;
				if (s1 == s2)   // if (s1.operator == (s2))
					cout << "Given Strings are same";
				else
					cout << "Given Strings are not same";

				break;

			case 3:
				cout << "Enter source string :- ";
				cin >> s1;
				s2 = s1;
				cout << "Target string is " << s2;
				break;

			case 4:
				cout << "Enter string :- ";
				cin >> s1;
				-s1;   // s1.operator - ();
				cout << "Reverse of given string is " << s1;
				break;

			case 5:
				exit(0);
		}
		getch();
	}
}


































































































