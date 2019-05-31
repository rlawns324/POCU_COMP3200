#include "Dog.h"
#include <iostream>
namespace samples {
	Dog::Dog(int age)
		:Animal(age)
	{
	}

	void Dog::Move() const
	{
		std::cout << "Dog is Moving" << std::endl;
	}

	void Dog::Speak() const
	{
		std::cout << "Woof" << std::endl;
	}

	Dog::~Dog()
	{
	}
}