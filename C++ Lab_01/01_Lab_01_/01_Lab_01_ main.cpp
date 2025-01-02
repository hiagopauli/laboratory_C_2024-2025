#include <iostream>

int main() {
	int secretNumber = 5;
	int hit;

  do{
    std::cout << "Guess a number between 1 to 100:" ;
    std::cin >> hit;

    if (hit < secretNumber) {
	std::cout << "The value is too low.";
    }
    else if (hit > secretNumber) { 
 	std::cout << "The value is too high.";
    } else {
 	 std::cout << "Correct number" << secretNumber << std::endl;
    }
  } while (hit != secretNumber); //Repeat loop until correct number is hit
  return EXIT_SUCCESS;
}
