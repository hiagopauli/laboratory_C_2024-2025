#include <iostream>
#include <string>
#include <map>
#include <memory>
#include "book.h"
#include <vector>

void createUser(std::map<int, std::shared_ptr<Person>>& librarySystem)
{
	std::string name;
	std::string surname;
	int age;
	
	std::cout << "What is your name? " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	
	std::cout << "what is your surname? " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, surname);
	
	std::cout << "what is your age? " << std::endl;
	std::cin >> age;
	
	// generate id based on age and counter
	int generatedId = age * 100;
 
	
	//add the new user on the system
	librarySystem[generatedId] = std::make_shared<Person>(name, surname, age, generatedId);
	
	std::cout << "User created with success." << std::endl;
	std::cout << "User ID: " << generatedId << std::endl;
}



int main()
{
	



	return EXIT_SUCCESS;
}







