#include "Vector.h"


using namespace samples;
samples::Vector::Vector():mX(0),mY(0)
{
}

samples::Vector::Vector(int x, int y) : mX(x), mY(y)
{
}

int samples::Vector::GetX() const
{
	return mX;
}

int samples::Vector::GetY() const
{
	return mY;
}

void samples::Vector::SetX(int x)
{
	mX = x;
}

void samples::Vector::SetY(int y)
{
	mY = y;
}

bool samples::Vector::IsEqual(const Vector & v) const
{
	return (mX == v.mX && mY == v.mY);
}

Vector samples::Vector::Multiply(const Vector & v) const
{
	Vector result(mX * v.GetX(), mY*v.GetY());
	return result;
}

Vector samples::Vector::Multiply(int multiplier) const
{
	Vector result(mX*multiplier, mY*multiplier);
	return result;
}

void samples::Vector::Scale(const Vector & v)
{
	mX *= v.mX;
	mY *= v.mY;
}

void samples::Vector::Scale(int multiplier)
{
	mX *= multiplier;
	mY *= multiplier;
}


Vector::~Vector()
{
}
