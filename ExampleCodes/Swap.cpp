#include <iostream>
#include "Swap.h"

using namespace std;
namespace samples {
	void SwapExample() {
		cout << "+------------------------------+" << endl;
		cout << "|      Swap Example            |" << endl;
		cout << "+------------------------------+" << endl;
		int number1 = 1;
		int number2 = 2;
		cout << "Before Swap: " << number1 << ", " << number2 << endl;
		Swap(number1, number2); //�տ� �ּҿ����ڵ� �Ⱥ������� ����� �����Ϳ� ����.
		cout << "After Swap: " << number1 << ", " << number2 << endl;
	}
	void Swap(int& number1, int& number2) {
		int tmp = number1;
		number1 = number2;
		number2 = tmp;
	}
}