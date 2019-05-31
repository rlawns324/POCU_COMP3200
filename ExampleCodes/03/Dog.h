#pragma once
#include "Animal.h"
#include <string>
namespace samples {
	class Dog :
		public Animal
	{
	public:
		Dog(int age);
		void Move() const;
		void Speak() const;
	};
}