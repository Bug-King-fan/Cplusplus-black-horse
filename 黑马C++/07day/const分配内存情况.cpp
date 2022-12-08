#include<iostream>
#include<string>
using namespace std;

//  ֻҪ�����ڴ��const��������ָ��ĵ�����ֵ�� 
//1��const�����ڴ�    ȡ��ַ�������ʱ�ڴ� 
void test1(){  //*****BUG���ɸ��� 
	const int m_A = 10;
	int *p = (int *)&m_A;   //������ʱ�ڴ� 
	*p = 1000;
	cout<<"m_A: "<<m_A<<endl;  //10
	cout<<"*p: "<<*p<<endl;    //1000
}
//2��extern ������Ҳ���const���������ڴ�

//3���ñ�����ʼ��const���� �����ڴ�
void test2(){
	int a=10;
	const int b = a;  
	
	int *p = (int *)&b;
	*p=1000;
	cout<<"b= "<<b<<endl;  //1000
} 

//4���Զ�����������  ��constҲ������ڴ� 
struct Person{
	string m_name;
	int m_age;
}; 

void test3(){
	const Person p1={"noon",0};  //���ʼ�������� 
	//p1.m_name = "aaa";   //p1�ǳ�������ֱ���޸ģ�
	//���������ڴ�Ϳ�ͨ��ָ���޸ģ�
	Person *p =(Person *)&p1;
	p->m_name = "Frank";
	p->m_age = 18;
	cout<<" ������"<<p1.m_name<<endl;   //Frank
	cout<<" ���䣺"<<p1.m_age<<endl;    //18
}
/*
	����ʹ��const����define   ������ 
	#define max 1024;   ->   const int max = 1024; 
	define��������ȫ��
	const ��������
	
	����
	void fun1(){
		const int a = 10;
		#define A 20
		 //undef A  //����ж�غ곣��A 
	} 
	void fun2(){
		cout<<"a: "<<a<<endl;//���ɷ��ʣ�����const��������
		cout<<"A: "<<A<<endl;   //���Է��ʣ�#define��������ȫ�ֻ�#undef
	}
*/

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
