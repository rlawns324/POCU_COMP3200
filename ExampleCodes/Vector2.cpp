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

bool Vector2::operator==(const Vector2 & rhs) const
{
	return (mX == rhs.mX && mY == rhs.mY);
}

Vector2 Vector2::operator*(const Vector2 & rhs) const
{
	Vector2 v(mX*rhs.mX, mY*rhs.mY);
	return v;
}

Vector2 Vector2::operator*(int multiplier) const
{
	Vector2 v(mX*multiplier,mY*multiplier);
	return v;
}

Vector2 & Vector2::operator*=(const Vector2 & rhs)
{
	mX *= rhs.mX; mY *= rhs.mY;
	return *this;
}

Vector2 & Vector2::operator*=(int multiplier)
{
	mX *= multiplier; mY *= multiplier;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Vector2& rhs) {
	os << rhs.mX << ',' << rhs.mY;
	return os;
}

Vector2::~Vector2()
{
}

Vector2 operator*(int multiplier, const Vector2 & v)
{
	Vector2 newV;
	newV.mX = multiplier * v.mX;
	newV.mY = multiplier * v.mY;
	return newV;
}
