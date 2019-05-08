#include <iostream>
using namespace std;

template <typename T>
T testFunc(T a) {
	cout << "Parameter a: " << a << endl;
	return a;
}

int main() {
	cout << testFunc(3) << endl;
	cout << testFunc(3.5) << endl;
	cout << testFunc('A') << endl;
	cout << testFunc("June") << endl;
	return 0;
}