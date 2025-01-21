#include <iostream>

class Person 
{
public:	
	Person(const std::string& name, unsigned int age, int id);
		
	const std::string& name() const;
	int age() const;
	int id() const;		

	friend std::ostream& operator<<(std::ostream& os, const Person& person);

private:
	std::string _name;
	int _age;
	int _id;
}


