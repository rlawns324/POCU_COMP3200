#include "Mirror.h"
#include <iostream>
#include <string>
using namespace std;

namespace samples {
	void MirrorStringExample() {
		cout << "+------------------------------+" << endl;
		cout << "|     MirrorString Example     |" << endl;
		cout << "+------------------------------+" << endl;
		string line = "Hello World!";
		cout << "string to mirror : " << line << endl;
		for (int i = (int)line.size() - 1; i >= 0; --i) { //끝에서부터 접근
			line += line[i];
		}
		cout << "mirrored string" << line << endl;
	}
}