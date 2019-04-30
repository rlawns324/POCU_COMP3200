#include "AddIntegers.h"
#include <iostream>
using namespace std;

namespace samples {
	void AddIntegers() {
		cout << "+------------------------------+" << endl;
		cout << "|      Add Integers Example      |" << endl;
		cout << "+------------------------------+" << endl;
		int number;
		int sum = 0;
		while (true) {
			cout << "Please Enter an integer or EOF: ";
			cin >> number;
			if (cin.eof()) { //eof는 플랫폼마다 조금씩 다름 윈도우 vs 는 ctrl+z
				break;
			}
			if (cin.fail()) {
				cout << "Invalid input" << endl;
				cin.clear();
				cin.ignore(LLONG_MAX, '\n');
				continue;
			}
			sum += number;
		}
		cin.clear();
		cout << "The sum is " << sum << endl;
	}
}