#include <iostream>
#include "Cat1.h"
#include "Bat.h"
#include "InterfaceExample.h"
namespace samples {
	void InterfaceExample() {
		Bat bat; Cat1 cat;
		bat.Walk();
		bat.Fly();

		//cat.Fly();
		cat.Walk();
	}
}