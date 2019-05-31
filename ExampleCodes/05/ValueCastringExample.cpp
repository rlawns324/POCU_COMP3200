#include <iostream>
#include <iomanip>
#include "ValueCastringExample.h"
using namespace std;
namespace samples {
	void valueCastingExample() {
		const int intNumber = 10;
		const float floatNumber = static_cast<float>(intNumber);
		const short shortNumber = static_cast<short>(intNumber);
		cout << showbase << hex << uppercase;
		cout << "int : " << intNumber << ", short : " << shortNumber << endl;
		cout << "int : " << intNumber << ", float : " << *(int*)(&floatNumber) << endl;
	}
}