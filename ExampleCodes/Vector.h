#pragma once
#include <iostream>
namespace samples {
	class Vector
	{
		friend std::ostream& operator<<(std::ostream& os, const Vector& rhs);
	public:
		Vector();
		Vector(int x, int y);
		int GetX() const;
		int GetY() const;
		void SetX(int x);
		void SetY(int y);
		bool IsEqual(const Vector& v) const;
		Vector Multiply(const Vector& v) const;
		Vector Multiply(int multiplier) const;

		void Scale(const Vector& v);
		void Scale(int multiplier);
		~Vector();
	private:
		int mX;
		int mY;
	};
}