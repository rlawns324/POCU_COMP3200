#include <iostream>
#include "OperatorOverloadExample.h"
#include "Vector2.h"
using namespace std;

namespace samples
{
	void OperatorOverloadExample() 
	{
		cout << "+------------------------------+" << endl;
		cout << "| Operator Overloading Example |" << endl;
		cout << "+------------------------------+" << endl;

		Vector2 v1(1, 2);
		Vector2 v2(3, 4);
		const int multiplier = 3;
		cout << "Vector1 = " << v1 << endl;
		cout << "Vector2 = " << v2 << endl;

		Vector2 result = v1 * v2;
		cout << "Vector1 * Vector2 = " << result << endl;

		result = v1 * multiplier;
		cout << "Vector1 * multiplier = " << result << endl;
		cout << "Vector1 = " << v1 << endl;

		result = multiplier * v1;
		cout << "multiplier * Vector1 = " << result << endl;
		cout << "Vector1 = " << v1 << endl;

		v1 *= v2;
		cout << "Vector1 *= Vector2 = " << endl;
		cout << "Vector1 = " << v1 << endl;
		
		v1 *= multiplier;
		cout << "Vector1 *= multiplier = " << endl;
		cout << "Vector1 = " << v1 << endl;
	}
}