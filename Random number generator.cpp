#include <iostream.h>
#include <cstdlib>
#include <ctime>

void exit() {
	int exit;
	cout << endl;
	cout << "              *==================*\n";
	cout << "              | Type 'x' to exit |\n";
	cout << "              *==================*\n";
	cout << "                       ";
	cin >> exit;
}

int main() {
	srand(time(0));
	int min;
	int max;
	int minus;
	
	cout << "*------------------------------------------------*\n";
	cout << "| Random number generator by Aleksander Tsvetkov |\n";
	cout << "*------------------------------------------------*\n";
	cout << endl;

	cout << "          @==========================@\n";
	cout << "          | Enter the minimum number |\n";
	cout << "          @==========================@\n";
	cout << "                       ";
	cin >> min;
	cout << endl;

	cout << "          @==========================@\n";
	cout << "          | Enter the maximum number |\n";
	cout << "          @==========================@\n";
	cout << "                       ";
	cin >> max;
	cout << endl;

	if (max < min) {
		cout << "                   *-------*                        \n";
		cout << "                   | Error |                        \n";
		cout << "                   *-------*                        \n";
		cout << "@------------------------------------------------------@\n";
		cout << "| The maximum number must be more than the minimum one |\n";
		cout << "@------------------------------------------------------@\n";
		exit();
	}
	else {
		minus = (max - min);
		int random = (rand() % minus) + 1;
		cout << "                     @ " << random << " @\n";
		exit();
	}
	return 0;
}
