#pragma once
class Vector2
{
public:
	Vector2();
	Vector2(int x, int y);
	int GetX() const;
	int GetY() const;
	void SetX(int x);
	void SetY(int y);
	bool operator==(const Vector2& rhs) const;
	Vector2 operator*(const Vector2& rhs) const;
	Vector2 operator*(int multiplier)const;
	friend Vector2 operator*(int multiplier, const Vector2& v);
	Vector2& operator*=(const Vector2& rhs);
	Vector2& operator*=(int multiplier);

	friend std::ostream& operator<<(std::ostream& os, const Vector2& rhs);
	~Vector2();
private:
	int mX; 
	int mY;
};

