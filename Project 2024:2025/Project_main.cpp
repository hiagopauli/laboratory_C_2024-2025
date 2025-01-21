#include <iostream>
#include <string>
#include <map>
#include <memory>


class Book
{ 
	public: 
		Book(const std::string& author, const  std::string& name, const  std::string& year):
			  _author(author),
				_name(name),
				_year(year)
		{}
		
		const std::string& author() const { return _author; }
		const std::string& name() const { return _name; }
		const std::string& year() const { return _year; }

		void display() const 
		{
			std::cout << "Name: " << _name << std::endl 
								<< "Author: " << _author << std:: endl 
								<< "Year: " << _year << std::endl; 
		}

	private:
		std::string _author;
		std::string _name;
		std::string _year;
};

class Library 
{ 
	using Bookmap = std::multimap<std::string, std::shared_ptr<Book>>;
	
	//save, load and creat file in dynamical way
	
	public:
		~Library() 
		{}
	
		void loadFromFile (const std::string& filename);
		void saveToFile (const std::string& filename);
	
		void addBook (const std::string& name, const std::string& author, const std::string& year)
		{
			auto book = std::make_shared<Book>(
				std::move(name), 
				std::move(author), 
				std::move(year));
			_books_by_name.emplace(book->name(), book);
			_books_by_author.emplace(book->author(), book);
		}
	
		//find and research by book name or author
	
		void findByName(const std::string& name) const
		{
			auto range = _books_by_name.equal_range(name);
			if (range.first == range.second)
			{
				std::cout<< "No found book with name: " << name << std::endl;
				return;
			}

			std::cout << "Found Book name: " << name << std::endl;
			for (auto it = range.first;it != range.second; ++it)
			{
				it->second->display();
			}
		}

		std::pair<Bookmap::const_iterator, Bookmap::const_iterator>	findByName(const std::string& name) const
		{
			return _books_by_name.equal_range(name);
		}

		std::pair<Bookmap::const_iterator, Bookmap::const_iterator> findByAuthor(const std::string& author) const
		{
			return _books_by_author.equal_range(author);
		}
				
	private:

		// creat a map by name and author

		Bookmap _books_by_name;
		Bookmap _books_by_author;
};
	


