#include <iostream>
#include <cstdlib>
#include <new>

using namespace std;

void no_memory () 
{
	cout << "Failed to allocate memory!\n";
	exit (1);
}

int main () 
{
	set_new_handler(no_memory);
	cout << "Attempting to allocate 1 GiB...";

	char* p = new char [1024*1024*1024];
	cout << "Ok\n";

	delete[] p;
	return 0;
}
