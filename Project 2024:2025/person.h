#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>


class Person 
{
public:	
	Person(const std::string& name, const std::string& surname, unsigned int age, unsigned int id);
		
	const std::string& name() const;
	const std::string& surname() const;
	int age() const;
	int id() const;		

	friend std::ostream& operator<<(std::ostream& os, const Person& person);

private:
	std::string _name;
	std::string _surname;
	int _age;
	int _id;
	std::vector<std::string> borrowed;
};

/*class Author
{
	public:
		Author(const std::string& name, const std::string& surname, unsigned int age, unsigned int id, const std::vector<std::string>& books):
			Author(name, surname, age, id),	_books(books)
			{
			}
		
		const std::vector<std::string>& books() const 
		{
			return _books;
		}

		void addBook(const std::string& book)
		{
			_books.push_back(book);
		}


	private:
		std::vector<std::string> _books;

};*/
			

#endif
