#include <iostream>
#include "Tiger.h"
#include "ObjectAddressSavingExample.h"
using namespace std;
namespace samples {
	void ObjectAddressSavingExample() {
		Tiger * tiger = new Tiger(10);
		unsigned int intAddress = reinterpret_cast<unsigned int>(tiger);
		cout << "saving address as int : " << intAddress << endl;
		cout << "read int address to pointer" << endl;
		tiger = reinterpret_cast<Tiger*>(intAddress);
		tiger->pretendImAZebra();
		delete tiger;
	}
}