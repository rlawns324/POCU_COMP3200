#include "HelloPope.h"
#include "HiPope.h"
#include "PrintEverything.h"
#include "PrintMenu.h"
#include "AddIntegers.h"
#include "ReverseInputString.h"

using namespace samples;
int main() {
	hello::SayHello();
	hi::SayHello();
	printEverything();
	printMenu();
	AddIntegers();
	ReverseInputString();
	return 0;
}