#include <iostream>
using namespace std;

int main() {
    int first_number, second_number, result;
    char op;
    do {

    // Input X and Y
    cout << "Enter with first_number (x): ";
    cin >> first_number;
    cout << "Enter with second_number (y): ";
    cin >> second_number;

	cout << "\n\n\n";

    // Calculate 
    cout << "Choice your operation (+,-,*,/): ";
    cin >> op;


    // Operation
    switch (op) {
    case '+':
	result = first_number + second_number;
	break;
    case '-':
	result = first_number - second_number;
	break;
    case '*':
	result = first_number * second_number;
	break;
    case '/' :
	result = first_number / second_number;
	break;
     } 
     // Display result
     cout << "Result: " << result << endl;
     cin >> op;


      
    } while (op == 'y' || op == 'y');  
    
    return 0;
}
