#include <iostream>
#include <string>
#include <map>
#include <memory>

void createUser(std::map<int, std::shared_ptr<Person>>& librarySystem, int& idCounter)
{
	std::string name;
	int age;
	
	std::cout << "What is your name? " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	
	std::cout << "what is your age? " << std::endl;
	std::cin >> age;
	
	// generate id based on age and counter
	int generatedId = age * 100 + idCounter;
	idCounter++; 
	
	//add the new user on the system
	librarySystem[generatedId] = std::make_shared<Person>(name, age, generatedId);
	
	std::cout << "User created with success." << std::endl;
	std::cout << "User ID: " << generatedID << std::endl;
}



int main()
{
	return EXIT_SUCCESS;
}
















