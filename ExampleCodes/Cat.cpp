#include "Cat.h"
#include <iostream>

namespace samples {
	Cat::Cat(int age) : Animal(age)
	{
	}

	void Cat::Move() const
	{
		std::cout << "Cat is Moving" << std::endl;
	}

	void Cat::Speak() const
	{
		std::cout << "Meow" << std::endl;
	}

	Cat::~Cat()
	{
	}
}