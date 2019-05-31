#include "Animal.h"
#include <iostream>

namespace samples {
	Animal::Animal():mAge(0)
	{
	}

	Animal::Animal(int age):mAge(age)
	{
	}


	Animal::~Animal()
	{
	}
	void Animal::Move() const
	{
		std::cout << "Animal is moving" << std::endl;
	}
	void Animal::Speak() const
	{
		std::cout << "Animal is speaking" << std::endl;
	}
	int Animal::GetAge() const {
		return mAge;
	}
}