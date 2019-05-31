#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "PolymorphismExample.h"

namespace samples {
	void PolymorphismExample() {
		Animal * cat = new Cat(2);
		Animal * dog = new Dog(5);
		////�� ��ü���� ���ÿ��� ���� �� �ֳ�?
		//Animal cat(5);
		//Cat realCat(2);
		//cat = realCat; //�ȵȴ�.
		cat->Move();
		cat->Speak();

		dog->Move();
		dog->Speak();

		delete cat;
		delete dog;

	}
}