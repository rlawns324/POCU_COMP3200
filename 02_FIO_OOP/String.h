#pragma once
namespace samples {
	class String
	{
	public:
		String(const char * str); //Constructor
		String(const String& str); //Copy Constructor
		~String(); //Destructor

		void print();
	private:
		char* mString;
		size_t mSize;
	};
}
