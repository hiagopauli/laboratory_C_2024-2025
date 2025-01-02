#include <iostream>

int main() { 

	//Write the origina message
	char array[] = "HELLO WORLD";
	//char array[] = "Hello World";

	//ASCII table
	char firstletterUpcase  {0x41};
	char lastletterUpcase   {0x5A};
	char firstletterLowcase {0x61};
	char lastletterLowcase  {0x7A};

	//Print main message
	std::cout << "Message: " << array << std::endl;
 
	char firstletter {0};
	char lastletter  {0};

	// Encrypt in Caeser Cipher 
	for (int i = 0; array[i] != '\0'; ++i) {
		lastletter = 0;
		// Check upercase range
		if (array[i] >= firstletterUpcase && array[i] <= lastletterUpcase) {
			firstletter = firstletterUpcase;
			lastletter = lastletterUpcase;
		}
		// Check lowercase range
		if (array[i] >= firstletterLowcase && array[i] <= lastletterLowcase) {
			firstletter = firstletterLowcase;
			lastletter = lastletterLowcase;
		}
		
		if (lastletter != 0) { // 0 indicates that it is not a letter
			// Caeser Cipher logic
			array[i] += 3;
				
			if (array[i] > lastletter) {
				array[i] = firstletter + (array[i]-lastletter-1);	
			} 
		}
	} 

	//Print encrypt message
	std::cout << "Encrypt message: " << array << std::endl;


	return EXIT_SUCCESS;
}


