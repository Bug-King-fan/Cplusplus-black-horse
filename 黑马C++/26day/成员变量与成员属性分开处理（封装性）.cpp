#include<iostream>
using namespace std;

class person{
	public:
		int m_A; //�Ǿ�̬��Ա���������ڶ�������  sizeof = 4
		void func(){};    //�Ǿ�̬��Ա�����������ڶ������� ����sizeof = 4 û�䣬 
		static int m_B; //��̬��Ա�����������ڶ������� ����sizeof = 4 
		static void func2(){};//��̬��Ա�����������ڶ������� ����sizeof = 4 
		
		double m_C; //sizeof = 16   (���ֽڴ�Ķ��룬��ʽ����ת����m_Aת��Ϊ8)
}; 
//������  ֻ�зǾ�̬��Ա�������ڶ�������   ������ 

void test1(){
	cout<<"sizeof(person) = "<<sizeof(person)<<endl;
	//�����СΪ1 ÿһ��ʵ���Ķ�����һ����һ�޶��ĵ�ַ���ڲ���һ��charָ��ά�������	  
}

void test2(){
	//thisָ��ָ�򱻵��õĳ�Ա���������Ķ��� 
	person p1;
	p1.func();//�����������һ��thisָ��  person *this 
	//�൱�� p1.func(&p1); ����һ��p1�ĵ�ַ ��thisָ��ָ������ַ 
	
	person p2;
	p2.func();
}
int main(){
	
	test1();
	
	system("pause");
	return 0;
} 
