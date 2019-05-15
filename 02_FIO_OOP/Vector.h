#pragma once
namespace samples {
	class Vector
	{
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