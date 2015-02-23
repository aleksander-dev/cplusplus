#include <iostream.h> 

int main() { 
	int multi;
	int firstNum;
	int secondNum;
	int display;
	int LCM;
	int crap;

	cout << "*-----------------------------------------------------*\n";
	cout << "| Least common multiple finder by Aleksander Tsvetkov |\n"; 
	cout << "*-----------------------------------------------------*\n";
	cout << endl;
	cout << "Enter the first number: \n";
	cout << "@ ";
	cin >> firstNum;
	cout << endl;
	cout << "Enter the second number: \n"; 
	cout << "@ ";
	cin >> secondNum; 
	cout << endl;
	cout << endl;

	display = secondNum;

	multi = firstNum * secondNum; 
	
	if (firstNum != secondNum) {
		
		if (firstNum > secondNum) {
			firstNum = firstNum - secondNum;
		} 
		
		else { 
			secondNum = secondNum - firstNum;
		}
		
		LCM = multi / firstNum;
		cout << "The least common multiple of " << firstNum << " and " << display << " is " << LCM << endl << endl;
	}

	cout << "*------------------*\n";
	cout << "| Type 'x' to exit |\n";
	cout << "*------------------*\n";
	cout << "        ";
	cin >> crap;
	cout << endl;
	return 0;
 }
