#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//���μ̳�ʱ������ظ��̳�ͬһ�ݳ�Ա����������
//������һ�������࣬��������඼�̳��ڶ����࣬��������ؼ̳����������

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
	//st.m_age = 18;   //��ʱ��erro����Ϊ����ȷ������̳е��ĸ������е�m_age��Ա����
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