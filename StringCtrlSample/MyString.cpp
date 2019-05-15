#include "pch.h"
#include "MyString.h"


CMyString::CMyString() 
	:m_pszData(NULL), m_nLength(0)
{
}

CMyString::CMyString(const CMyString & rhs)
{
	Release();
	if (NULL == rhs.m_pszData) return;
	int nLength = rhs.m_nLength;
	if (0 == nLength) return;
	m_pszData = new char[nLength + 1];
	strcpy_s(m_pszData, nLength + 1, rhs.m_pszData);
	m_nLength = nLength;
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
