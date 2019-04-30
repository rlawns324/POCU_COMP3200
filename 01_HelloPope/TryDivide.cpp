#include <iostream>
#include "TryDivide.h"
using namespace std;
namespace samples {
	void TryDivideExample() {
		cout << "+------------------------------+" << endl;
		cout << "|      Try Divide Example      |" << endl;
		cout << "+------------------------------+" << endl;
		Vector result;
		Vector a, b;
		result.x = 0; result.y = 0; result.z = 0;
		a.x = 20; a.y = 30; a.z = 40;
		b.x = 2; b.y = 3; b.z = 4;
		cout << "Before Divide a: " << a.x << ',' << a.y << ',' << a.z << endl;
		cout << "Before Divide Result: " << result.x << ',' << result.y << ',' << result.z << endl;
		if (TryDivide(&result, a, b) == true) {
			cout << "After Divide a: " << a.x << ',' << a.y << ',' << a.z << endl;
			cout << "After Divide Result: " << result.x << ',' << result.y << ',' << result.z << endl;
		}
		else {
			cout << "Divide Failed! " << endl;
		}
	}
	bool TryDivide(Vector* result, Vector& a, Vector& b) {
		if (result == NULL) return false;
		(*result).x = a.x / b.x;
		(*result).y = a.y / b.y;
		(*result).z = a.z / b.z;
		return true;
	}
}