#include "PrintEverything.h"
#include <iostream>

using namespace std;

namespace samples {
	void printEverything() {
		cout << "+------------------------------+" << endl;
		cout << "|   Print Everything Example   |" << endl;
		cout << "+------------------------------+" << endl;
		int integer = 10;
		float decimal = 1.5f;
		char letter = 'A';
		char string[] = "Hello, world!";
		cout << integer << endl;
		cout << decimal << endl;
		cout << letter << endl << string << endl;
	}
}