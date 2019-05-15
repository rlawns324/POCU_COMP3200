#include <string>
#include "String.h"


using namespace samples;
samples::String::String(const char * str)
	:mSize(strlen(str) + 1)
{
	mString = new char[mSize];
	memcpy(mString, str, mSize);
}

samples::String::String(const String & str)
	:mSize(str.mSize)
{
	mString = new char[mSize];
	memcpy(mString, str.mString, mSize);
}

String::~String()
{
	delete[] mString;
}
