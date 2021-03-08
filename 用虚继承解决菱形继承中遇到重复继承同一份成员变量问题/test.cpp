#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//菱形继承时会出现重复继承同一份成员变量的问题
//比如有一个动物类，羊类和驼类都继承于动物类，羊驼类多重继承羊类和驼类

class Animal
{
public:
	int m_age;
};
class Sheep:virtual public Animal
{
};
class Tuo :virtual public Animal
{
};
class SheepTuo :public Sheep, public Tuo
{
};
void test01()
{
	SheepTuo st;
	//st.m_age = 18;   //此时会erro，因为不明确是子类继承的哪个父类中的m_age成员变量
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 19;
	st.m_age = 20;

	cout << "st.Sheep::m_age= " << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age= " << st.Tuo::m_age << endl;
	cout << "st.m_age= " << st.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;

}