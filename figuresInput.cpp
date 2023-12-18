// Demonstrates using multiple files to output figures
// Kaila Anderson
// 09/26/22

#include <iostream>
#include "figures.hpp" 

using std::cout; using std::cin; using std::endl;

int main() {

	int figureSize, choice;
	char paintChar;


	do {
		cout << "Insert figure size: ";
		cin >> figureSize;
		cout << "Insert paint Character: ";
		cin >> paintChar;
		cout << "Choose the figure you want to produce: " << endl << "1. Square" << endl << "2. Slash" << endl << "3. Triangle" << endl;
		cin >> choice;

		switch (choice) {

		case 1:
			char filledOrHollow;
			cout << "Would you like a filled or hollow square? (f/h)" << endl;
			cin >> filledOrHollow;

			if (filledOrHollow == 'f' || filledOrHollow == 'F')
				filledSquare(figureSize, paintChar);

			else
				hollowSquare(figureSize, paintChar);
			break;

		case 2: 
			char forwardOrBack;
			cout << "Would you like a forward slash or a back slash? (f/b)" << endl;
			cin >> forwardOrBack;

			if (forwardOrBack == 'f' || forwardOrBack == 'F') 
				slash(figureSize, paintChar);
			else 
				backslash(figureSize, paintChar); 
			break; 

		case 3: 
			triangle(figureSize, paintChar);
			break;

		}

	} while (choice >= 1 && choice <= 3);
}