#pragma once
namespace samples {
	class Animal
	{
	public:
		Animal();
		Animal(int age);
		int GetAge() const;
		virtual ~Animal();
		virtual void Move() const;
		virtual void Speak() const;
	private:
		int mAge;
	};
}