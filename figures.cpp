//function definitions

#include <iostream>
#include "figures.hpp"

using std::cin; using std::cout; using std::endl;

// Filled square function
 void filledSquare(int figureSize, char paintChar) {
	for (int row = 0; row < figureSize; ++row) {
		for (int column = 0; column < figureSize; ++column) {
			cout << paintChar;
		}
		cout << endl;
	}
}

 // Hollow square function
 void hollowSquare(int figureSize, char paintChar) {
	 for (int row = 0; row < figureSize; ++row) {
		 for (int column = 0; column < figureSize; ++column) {
			 if (row == 0)
				 cout << paintChar;

			 else if (column == 0)
				 cout << paintChar;

			 else if (column == figureSize - 1)
				 cout << paintChar;

			 else if (row == figureSize - 1)
				 cout << paintChar;

			 else
				 cout << " ";

		 }
		 cout << endl;
	 }

}

 // Forward slash function
 void slash(int figureSize, char paintChar) {
	 for (int row = 0; row < figureSize; ++row) {
		 for (int column = 0; column < figureSize; ++column) {

			 if (row == column)
				 cout << paintChar;
			 else
				 cout << " ";
		 }
		 cout << endl;
	 }
}

// Backslash function
 void backslash(int figureSize, char paintChar) {
	 for (int row = 0; row < figureSize; ++row) {
		 for (int column = 0; column < figureSize; ++column) {

			 if (row + column == figureSize - 1)
				 cout << paintChar;
			 else
				 cout << " ";
		 }
		 cout << endl;
	 }
}

// Triangle function
 void triangle(int figureSize, char paintChar) {
	 for (int row = 0; row < figureSize; ++row) {
		 for (int column = 0; column < figureSize; ++column) {

			 if (figureSize / 2 == row + column)
				 cout << paintChar;

			 else if (column - row == figureSize / 2)
				 cout << paintChar;

			 else if (row == figureSize / 2)
				 cout << paintChar;

			 else
				 cout << " ";



		 }cout << endl;
	 }
}