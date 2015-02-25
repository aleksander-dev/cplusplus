#include <iostream.h>
#include <ctime>
#include <cstdlib>
#include <windows.h>

int main() {
	srand(time(0));
	int random;
	int crap;
			
	random = (rand() %  6) + 1;

	cout << "@==================================@\n";
	cout << "# Dice made by Aleksander Tsvetkov #\n";
	cout << "@==================================@\n";
	cout << endl;

		switch(random) {
		
			case 1 :{
				cout << "            *-------*     \n";
				cout << "            |       |     \n";
				cout << "            |   @   |     \n";
				cout << "            |       |     \n";
				cout << "            *-------*     \n";
				break;
			}

			case 2 : {
				cout << "            *-------*     \n";
				cout << "            | @     |     \n";
				cout << "            |       |     \n";
				cout << "            |     @ |     \n";
				cout << "            *-------*     \n";
				break;
			}

			case 3 : {
				cout << "            *-------*      \n";
				cout << "            | @     |      \n";
				cout << "            |   @   |      \n";
				cout << "            |     @ |      \n";
				cout << "            *-------*      \n";
				break;
			}

			case 4 : {
				cout << "            *-------*      \n";
				cout << "            | @   @ |      \n";
				cout << "            |       |      \n";
				cout << "            | @   @ |      \n";
				cout << "            *-------*      \n";
				break;
			}

			case 5 : {
				cout << "            *-------*      \n";
				cout << "            | @   @ |      \n";
				cout << "            |   @   |      \n";
				cout << "            | @   @ |      \n";
				cout << "            *-------*      \n";
				break;
			}

			case 6 : {
				cout << "            *-------*       \n";
				cout << "            | @   @ |       \n";
				cout << "            | @   @ |       \n";
				cout << "            | @   @ |       \n";
				cout << "            *-------*       \n";
				break;
			}
		}
		
		cout << endl;
		cout << "@===================================@\n";
		cout << "| Dice has been succesfully rolled! |\n";
		cout << "|          Type 'x' to exit         |\n";
		cout << "@===================================@\n";
		cout << "                 ";
		cin >> crap;
		cout << "                 ";
		cout << endl;
		return 0;
}




					
