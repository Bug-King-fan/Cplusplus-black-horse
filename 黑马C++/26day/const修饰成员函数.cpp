#include<iostream>
using namespace std;

class person{
	public:
		person(){
			//�����п����޸�����
			//this ָ����Զָ����
			//person *const this   //this�ǳ���
			//���thisָ��ָ���ֵҲ�����޸� 
			//const person *const this 
			this->m_A = 10;
			this->m_B = 10; 
		}
		
		int m_A ;
		mutable int m_B ; //���� mutable�ؼ��� �����ǳ�������Ҳ����ִ���޸� 
		
		void show() const{  //������ 
//			this->m_A = 1000;  �����޸�m_A
//			���Ǻ����������const �Ͳ����޸�ָ��ָ���ֵ 
//			�൱�� const person *const this
			this->m_B = 1000;
			cout<<"m_A :"<<this->m_A <<endl;
			cout<<"m_B :"<<this->m_B <<endl;
		}
		
		void show2(){
			cout<<"m_A :"<<this->m_A <<endl;
			cout<<"m_B :"<<this->m_B <<endl;
		}
}; 
void test1(){
	person p1;
	p1.show();
	
	cout<<"***************************\n";
	
	p1.m_A = 100; //�����޸� 
	cout<<"p1.m_A :"<<p1.m_A <<endl;
	//������  �������޸����� 
	const person p2;
//	p2.m_A = 200; // [Error] read-only object
	cout<<"p2.m_A :"<<p2.m_A <<endl;
	
	p2.show(); 
//	p2.show2(); 
//	[Error] passing 'const person' as 'this' argument of 'void person::show2()' discards qualifiers [-fpermissive]
//	�������ܵ�����ͨ��Ա����
//	������ ���Ե��ó����� 
};

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
