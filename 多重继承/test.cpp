#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//多重继承语法实例
//多重继承时，当不同父类中出现同名成员处理方式，也是加作用域用以区分

class Base1
{
public:
	Base1()
	{
		m_a = 1;
	}
	int m_a;

};
class Base2
{
public:
	Base2()
	{
		m_a = 2;
	}
	int m_a;
};
class son:public Base1,public Base2
{
public:
	son()
	{
		m_c = 3;
		m_d = 4;
	}
	int m_c;
	int m_d;

};
void test01()
{
	son s;
	cout << "size of son = " << sizeof(s) << endl;
	cout << "son中继承父类Base1的m_a= " << s.Base1::m_a << endl;
	cout << "son中继承父类Base2的m_a= " << s.Base2::m_a << endl;
	cout << "son中的m_c= " << s.m_c << endl;
	cout << "son中的m_d= " << s.m_d << endl;


}
int main()
{
	test01();
	system("pause");
	return 0;

}