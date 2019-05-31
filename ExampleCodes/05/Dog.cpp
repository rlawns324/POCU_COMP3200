#include <cstring>
#include "Dog.h"
namespace samples {
	Dog::Dog(int age, const char * name) : Animal(age) {
		mHomeaddress = new char[strlen(name) + 1];
		memcpy(mHomeaddress, name, strlen(name) + 1);
	}
	Dog::~Dog() {
		delete[] mHomeaddress;
	}
	const char * Dog::getAddress() const {
		return mHomeaddress;
	}
}