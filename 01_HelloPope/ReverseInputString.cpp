#include "ReverseInputString.h"
#include <iostream>

using namespace std;
namespace samples {
	void ReverseInputString() {
		cout << "+------------------------------+" << endl;
		cout << "|      Reverse String Example      |" << endl;
		cout << "+------------------------------+" << endl;
		const int LINE_SIZE = 512;
	    char line[LINE_SIZE];
		cout << "Please enter a string to reverse" << "or EOF to quit :";
		cin.getline(line, LINE_SIZE);
		if (cin.fail()) { //왜 fail로 처리하는지 생각해보기
			cin.clear();
			return;
		}
		char* p = line;
		char* q = line + strlen(line) - 1;
		while (p < q) {
			char tmp = *p;
			*p = *q;
			*q = tmp;
			++p;
			--q;
		}
		cout << "Reversed String is :" << line << endl;
	}
}