#include <iostream>
using namespace std;

int main() {
    int pay_value, paid_value, result;
    char op;
   
    do {

      // Input Pay and Paid value
      cout << "Enter with value to pay: ";
      cin >> pay_value;
      cout << "Enter with value paid: ";
      cin >> paid_value;

      int change = paid_value - pay_value;

      if (change < 0) {
  	cout << "the value is not enough." << endl;
      } else { 
 	cout << "Change to return:" << change << endl;
    }
    } while (op == 'y' || op == 'y');
    return 0;
  
 
}
