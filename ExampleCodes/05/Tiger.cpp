#include <iostream>
#include "Tiger.h"
using namespace std;
namespace samples {
	Tiger::Tiger(int age) : mAge(age) {

	}

	void Tiger::pretendImAZebra() const {
		cout << "I have Zebra Stripe" << endl;
	}
}