#include<iostream>
using namespace std;

class Person{
	public:
		Person(){
			//m_age = 10; m_age �Ǿ�̬�� 
		}
		static int m_age; //����static���Ǿ�̬��Ա�������Ṳ������
		//��̬��Ա���������������������ʼ����
		 
		void show(){
			cout<<"m_age:"<<m_age<<endl;
			cout<<"m_other:"<<m_other<<endl;
		} 
		
		int m_A ; 
		//��̬��Ա����
		//ע�⣺�����Է�����ͨ�ĳ�Ա������
		//		���Է��ʾ�̬��Ա������  �������Բ���Ҫ���� 
		static void func(){ //ͨ��������������ɷ��� 
	    	// m_A=10; ����ͨ�� ԭ����ͼ�޷�������˭�� m_A 
			cout<<" static func�ĵ���\n";
		}
		
		void myfunc(){  //��ͨ��Ա���� ���Է�����ͨ��Ա���� Ҳ���Է��ʾ�̬��Ա���� 
			m_A = 100;
			m_age = 100;
		}
		 private:
		 	static int m_other;
		 	static void func2(){
		 		cout<<"func2()�ĵ���\n";
			 }
};
int Person::m_age = 0; //�����ʼ�� 
int Person::m_other = 20;
void test1(){
	//ͨ�������������
	Person p1;
	p1.m_age = 10;
	Person p2;
	p2.m_age = 20;
	cout<<"p1.age:"<<p1.m_age<<endl; //20
	cout<<"p2.age:"<<p2.m_age<<endl; //20
	//��������
	cout<<"*******************\n";
	p1.show();
	cout<<"*******************\n";
	//2 ͨ������ֱ�ӷ�������
	cout<<"������������:"<<Person::m_age<<endl; //20 
//	cout<<"other: "<<Person::m_other<<endl;  ˽��Ȩ����������ʲ��� 
	
	//��̬��Ա�����ĵ���
	p1.func();
	p2.func();
	Person::func(); 
	//��̬��Ա����Ҳ��Ȩ��
//	Person::func2(); ˽�в��ɷ���
	
	//��ͨ��Ա����
	p1.myfunc();
	p1.show();
}
int main(){
	
	test1();
	
	system("pause");
	return 0;
} 
