#include <iostream.h>
#include <stdlib.h>

int main() {
	int selected;
	int c;
	int f;
	double print;

	cout << "----------------------------------------------------\n";
	cout << "### Temperature conventor by Aleksander Tsvetkov ###\n";
	cout << "----------------------------------------------------\n";
	cout << endl;
	cout << "What do you want to convert?\n\n";
	cout << "Enter 1 for celsius to fahrenheit\n";
	cout << "Enter 2 for fahrenheit to celsius\n";
	cout << endl;
	cin >> selected;

	if (selected == 1) {
		system("cls");
		cout << "Degrees by Celsius: ";
		cin >> c;
		print = c * 33.8;
		cout << c << " Degrees by celsius" << " = " << print << " Degrees by fahrenheit\n";
	}
		
	else if (selected == 2) {
		system("cls");
		cout << "Degrees by Fahrenheit:\n";
		cin >> f;
		print = f - 18.22;
		cout << f << " Degrees by fahrenheit" << " = " << print << " Degrees by celsius\n";
	}

	else if (selected != 1 || selected != 2) {
		system("cls");
		cout << "[Error] Invalid selection\n";
	}
	
	return 0;
}
