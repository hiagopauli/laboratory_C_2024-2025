#include <iostream>
#include <string>
#include <list>

using namespace std;


struct Person
{
	int age;
	string name;

	// Estructure of name and age
	Person(const string& name, int age) : age(age), name(name) {}

};


int main ()
{


	//	Add person and their ages
	list<Person> persons =
	{
		{"Person 1", 18},
		{"Person 2", 35},
		{"Person 3", 21},
		{"Person 4", 44},
		{"Person 5", 27},
	};


	//	Sort based on age
	persons.sort([](const Person& a, const Person& b) { return a.age < b.age; });

	
	// Print 
	for (const auto& person : persons) 
	{
		cout << person.name << " " << person.age << endl;
	};

	
	// Print in order age on younger to older
	cout << "Increasing age ordered " << endl;
	int oder = 1;
	for (const auto& person:persons)
	{
		cout << oder++ << ". " << person.name << " (" << person.age << " years)" << endl;
	}


	return EXIT_SUCCESS;
}

