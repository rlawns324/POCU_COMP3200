#pragma once
struct Vector {
	int x;
	int y;
	int z;
};
namespace samples {
	void TryDivideExample();
	bool TryDivide(Vector* result, Vector& a, Vector& b);
}