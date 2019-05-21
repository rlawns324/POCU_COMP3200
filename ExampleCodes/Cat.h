#pragma once
#include <string>
#include "Animal.h"
namespace samples {
	class Cat : public Animal
	{
	public:
		Cat(int age);
		void Move() const;
		void Speak() const;
	}; //Q: 이 클래스의 개체에 추가적으로 할당되는 바이트는 몇일까? ->0 바이트
}