#include <iostream>
#include <string>

using namespace std;


	// Owner Structure
struct Owner
{
	string Name;
	string Surname;
	int Pesel;
};

	// Vehicle Structure
struct Vehicle
{
	string Brand;
	string Type;
	string Model;
	int Year;
};

int main() 
{

	// Object	
	Vehicle vehicle;
	Owner owner; 

	// Vehicle Data
	cout << "What is the vehicle brand?";
	cin >> vehicle.Brand;
	
	cout << "What is the vehicle type?";
	cin >> vehicle.Type;

	cout << "What is the vehicle model?";
	cin >> vehicle.Model;

	cout << "what is the vehicle year?";
	cin >> vehicle.Year;

	// Owner data
	cout << "What is your name?";
	cin >> owner.Name;

	cout << "what is your surname?";
	cin >> owner.Surname;

	cout << "What is your PESEL?";
	cin >> owner.Pesel;

	// Print data
	cout << " Vehicle Information" ;
	cout << " Brand: " << vehicle.Brand << endl;
	cout << " Type: " << vehicle.Type << endl;
	cout << " Model: " << vehicle.Model << endl;
	cout << " Year: " << vehicle.Year << endl;

	// Print Owner 
	cout << "Owner Information";
	cout << " Name: " << owner.Name << endl;
	cout << " Surname: " << owner.Surname << endl; 
	cout << " Pesel: " << owner.Pesel << endl;

	return EXIT_SUCCESS;

}
