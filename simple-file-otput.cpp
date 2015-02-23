#include <iostream>
#include <fstream.h>

int main () {
	
	/* These lines of code are going to create a new text file in the same directory where the .exe is */

	ofstream file("test.txt");											          // Creates the file
	file << "I'm writing in the file using C++\n";						// Writes text in the file
	cout << "The text has been written to the file\n\n";			// Writes a text in the console
	file.close();														/                 // Closes the file to prent your PC from lagging
	
	return 0;
}
