#include <iostream>
#include "Vector2.h"
using namespace std;


Vector2::Vector2()
	:mX(0),mY(0)
{
	cout << "Vector2() : (" << mX << "," << mY << endl;
}

Vector2::Vector2(int x, int y)
	:mX(x),mY(y)
{
	cout << "Vector2(int x, int y) : (" << mX << "," << mY << endl;
}

int Vector2::GetX() const
{
	return mX;
}

int Vector2::GetY() const
{
	return mY;
}

void Vector2::SetX(int x)
{
	mX = x;
}

void Vector2::SetY(int y)
{
	mY = y;
}

void Vector2::Add(const Vector2 & other)
{
	mX = mX + other.mX;
	mY = mY + other.mY;
}


Vector2::~Vector2()
{
}
