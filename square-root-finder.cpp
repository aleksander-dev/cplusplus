#include <iostream.h>
#include <math.h>

int main() {
	double number;
	double result;
	int safe_exit;
	
	cout << "            *------------------------------------------------*\n";
	cout << "            | Square root finder made by Aleksander Tsvetkov |\n";
	cout << "            *------------------------------------------------*\n";
	cout << " @---------------------------------------------------------------------------@\n";
	cout << " | That program will convert any number that you have entered to square root |\n";
	cout << " @---------------------------------------------------------------------------@\n";
	cout << "                           *===================*\n";
	cout << "                           | Enter your number |\n";
	cout << "                           *===================*\n";
	cout << "                                    ";
	cin >> number;
			
	if (number < 0) {
		cout << endl;
		cout << "             *====================================*\n";
		cout << "             | Your square root must be positive! |\n";
		cout << "             *===================================-*\n";
		cout << endl;
	}
	else {
		cout << endl;
		result = sqrt (number);
		cout << "                          The square root of " << number << " is " << result << endl << endl;
		cout << "                            @==================@\n";
		cout << "                            | Type 'x' to exit |\n";
		cout << "                            @==================@\n";
		cout << "                                     ";
		cin >> safe_exit;
		cout << endl;
	}
	return 0;
}
