#pragma once
#include <string>
#include "Animal.h"
namespace samples {
	class Cat : public Animal
	{
	public:
		Cat(int age);
		void Move() const;
		void Speak() const;
	}; //Q: �� Ŭ������ ��ü�� �߰������� �Ҵ�Ǵ� ����Ʈ�� ���ϱ�? ->0 ����Ʈ
}