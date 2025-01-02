#include <iostream>
#include <string>

using namespace std;

struct Person 
{
	string name;
	Person* father;
	Person* mother;
};

int main() 
{

	//Introduction data information
	struct Person child;
	cout << "what is your name? ";
	cin >> child.name; 

	
	//Creat the mother
	struct Person mother;
	cout << "what is your mother name? " ;
	cin >> mother.name;

	//Creat the father
	struct Person father;
	cout << "What is your father name? " ;
	cin >> father.name;

	//connect names and person
	child.mother = &mother;
	child.father = &father;


	//Print family tree
	cout << "Family tree." << endl;
	cout << "Your name : " << child.name << endl;
	cout << "Mother name : " << mother.name << endl;
	cout << "Father name : " << father.name << endl;


	return EXIT_SUCCESS; 

} 




