#include <iostream>
using namespace std;

int main() 
{
	// Array from 0 to 10
	int list [11];


	// Fill array with values 0 to 10
	for (int i = 0; i <= 10; ++i) 
	{
		list[i] = i;
	}


	// Print array values in decreasing order
	for (int i = 10; i >= 0; --i)
	{
		cout << list[i] << endl;
	}

	cout << endl;

	EXIT_SUCCESS;

}

