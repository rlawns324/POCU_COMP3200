#include "pch.h"
#include "MyString.h"


CMyString::CMyString() 
	:m_pszData(NULL), m_nLength(0)
{
}

CMyString::CMyString(const char * pszParam):m_pszData(NULL),m_nLength(0)
{
	this->SetString(pszParam);
}

CMyString::CMyString(const CMyString & rhs):m_pszData(NULL),m_nLength(0)
{
	this->SetString(rhs.GetString());
}

CMyString::CMyString(CMyString && rhs):m_pszData(NULL),m_nLength(0)
{
	cout << "CMyString Move Constructor Call!" << endl;
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;
	rhs.m_pszData = NULL;
	rhs.m_nLength = 0;
}

CMyString::~CMyString()
{
	Release();
}

int CMyString::SetString(const char * pszParam)
{
	Release();
	if (NULL == pszParam) return 0;

	int nLength = strlen(pszParam);
	if (nLength == 0) return 0;
	m_pszData = new char[nLength + 1];
	memcpy(m_pszData, pszParam, sizeof(char)*(nLength + 1));
	m_nLength = nLength;
	return nLength;
}

const char * CMyString::GetString() const
{
	return m_pszData;
}

void CMyString::Release()
{
	if(m_pszData != NULL)
		delete[] m_pszData;
	m_pszData = NULL;
	m_nLength = 0;
}

CMyString & CMyString::operator=(const CMyString & rhs)
{
	int nLength = rhs.m_nLength;
	m_pszData = new char[nLength + 1];
	strcpy_s(m_pszData, nLength + 1, rhs.m_pszData);
	m_nLength = nLength;
	return *this;
}

CMyString::operator char*() const
{
	return m_pszData;
}
