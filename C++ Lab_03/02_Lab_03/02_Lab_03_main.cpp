#include <iostream>
using namespace std;


	// Structure defition 
struct People 
{
	string name;
	int age;
	string city;
};


	// Start  main operation

int main () 
{
	People person;

	// Questions for user
	cout << "What is your name? " << endl;
	cin >> person.name;
	cout << "How old are you? " << endl;
	cin >> person.age;
	cout << "Where are you based? " << endl;
	cin >> person.city;
	cout << endl;
	cout << endl;


	// Print all data 
	cout << "Name: " << person.name << "." <<  endl;
	cout << "Have " << person.age << " years old. " << endl;
	cout << "Based in " <<  person.city << "." << endl;
	
  return EXIT_SUCCESS;  

	// I cant use union because it can only store one value at a time, while in this case I need store multiple pieces of data. 

}
