#include "HelloPope.h"
#include "HiPope.h"
#include "PrintEverything.h"
#include "PrintMenu.h"
#include "AddIntegers.h"
#include "ReverseInputString.h"
#include "Swap.h"
#include "TryDivide.h"
using namespace samples;
int main() {
	hello::SayHello();
	hi::SayHello();
	printEverything();
	printMenu();
	SwapExample();
	AddIntegers();
	ReverseInputString();
	TryDivideExample();
	return 0;
}