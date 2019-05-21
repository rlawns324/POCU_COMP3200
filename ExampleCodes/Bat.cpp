#include <iostream>
#include "Bat.h"
using namespace std;
namespace samples {
	void Bat::Walk() const {
		cout << "Bat Walking" << endl;
	}
	void Bat::Fly() const {
		cout << "Bat Flying" << endl;
	}
}