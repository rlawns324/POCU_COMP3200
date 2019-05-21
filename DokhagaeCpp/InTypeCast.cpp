#include <iostream>
#include <string>
using namespace std;
class CTestData {
public:
	CTestData(int nParam) : m_nData(nParam){
		cout << "CTestData(int)" << endl;
	}
	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData) {
		cout << "CTestData(const CTestData &)" << endl;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
private:
	int m_nData;
};

void TestFunc(CTestData param) {
	cout << "TestFunc()" << param.GetData() << endl;
}
int main() {
	TestFunc(5);
	return 0;
}