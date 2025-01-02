#include <iostream> 
#include <string>
using namespace std;

int main() 
{
	
	//make a choice for user how will share the information to system
	int choice;
	cout << "If you want enter with your age press 1, if want enter with your date of birth press 2: " << endl;
	cin >> choice;

	// start operation with age
	if (choice == 1) 
	{
		int age;
		cout << "How old are you? " << endl;
		cin >> age;
		cout << "You have: " << age << "years old." << endl;
	}

	// start operation with date of birthday
	else if (choice == 2)
	{ 
		string birthDate;
		cout << "Enter with your birth date (DD//MM/YYYY): " << endl;
		cin >> birthDate;
		cout << "Your birth date is: " << birthDate << endl;
	}

	// in case that had something wrong on process 
	else 
	{
		cout << "Something wrong, repeat the process with attention." << endl; 
	}

	
  return EXIT_SUCCESS;
}
