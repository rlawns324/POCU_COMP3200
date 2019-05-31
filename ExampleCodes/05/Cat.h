#pragma once
#include "Animal.h"

namespace samples {
	class Cat : public Animal{
	public:
		Cat(int age, const char * name);
		virtual ~Cat();
		const char * getName() const;
	private:
		char * mName;
	};
}