#include "pch.h"
#include "MyString.h"
void TestFunc(const CMyString &strParam) {
	cout << strParam << endl;
}
int main()
{
	CMyString strData("Hello");
	::TestFunc(strData);
	::TestFunc(CMyString("World"));
	return 0;
}
