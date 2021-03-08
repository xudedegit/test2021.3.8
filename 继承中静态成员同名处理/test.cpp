#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_a = 0;
	}
	int ret()
	{
		return m_a;
	}
	void func()
	{
		cout << "Base下的func函数调用" << endl;
	}
private:
	static int m_a;

};
int Base::m_a = 1;
class son :public Base
{
public:
	void func1()
	{
		cout << "son下的func1函数调用" << endl;
	}

private:
	static int m_a;

};
void test01()
{
	son s;
	s.func();
}
int main()
{
	test01();
	system("pause");
	return 0;

}