#pragma once
#include "Animal.h"
namespace samples {
	class Dog :public Animal {
	public:
		Dog(int age, const char * name);
		virtual ~Dog();
		const char * getAddress() const;
	private:
		char * mHomeaddress;
	};
}