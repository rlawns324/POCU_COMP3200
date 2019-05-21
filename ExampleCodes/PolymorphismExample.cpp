#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "PolymorphismExample.h"

namespace samples {
	void PolymorphismExample() {
		Animal * cat = new Cat(2);
		Animal * dog = new Dog(5);
		////이 개체들을 스택에도 만들 수 있나?
		//Animal cat(5);
		//Cat realCat(2);
		//cat = realCat; //안된다.
		cat->Move();
		cat->Speak();

		dog->Move();
		dog->Speak();

		delete cat;
		delete dog;

	}
}