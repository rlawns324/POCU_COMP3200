#pragma once
class CMyString
{
public:
	//Default Constructor
	CMyString();

	//Conversion Constructor
	explicit CMyString(const char * pszParam);
	
	//Copy Constructor
	CMyString(const CMyString& rhs);

	//Move Constructor
	CMyString(CMyString&& rhs);
	//Destructor(virtual)
	virtual ~CMyString();
	int SetString(const char * pszParam);
	const char* GetString() const;
	void Release();
	CMyString& operator=(const CMyString& rhs);
	operator char*() const;
private:
	char * m_pszData;
	int m_nLength;
};

