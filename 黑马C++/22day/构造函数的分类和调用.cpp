#include<iostream>
using namespace std;

//����
//���ղ������� �޲ι��캯����Ĭ�Ϲ��캯����  �вι��캯�� 
//�������ͷ���  ��ͨ���캯��   �������캯��

class Person{
	public:
		Person(){
			cout<<"Ĭ�Ϲ��캯��\n";
		}
		~Person(){
			cout<<"��������\n";
		}
		Person(int a){
			cout<<"�вι��캯��\n";
		}
		//���ϵ�����ͨ���캯�� 
		
		//�������캯��    ����һ�ݶ������� 
		Person(const Person &p){
			cout<<"�������캯��\n";
			age = p.age;
		}
	
		int age;
};

void test1(){
	//�������캯�����÷�ʽ
	//���ŷ�����
	Person p1(1);
	p1.age = 10;
	Person p2(p1);
	cout<<"p1.age: "<<p1.age<<endl; 
	cout<<"p2.age: "<<p2.age<<endl;
	
	//Ĭ�Ϲ��캯���������ţ��޲����� 
	Person p3;
	cout<<"*****************************\n";
	//��ʾ������
	Person p4 = Person(100); //���߱���������int���͵Ĺ��캯�� 
	Person p5 = Person(p4);
	Person(101);
	//���� Person(101)������������
	//����������ص㣺
	//��������������˶����������� ����ô�����д����������ͷ�������� 
	cout<<"��������������˶����������� ����ô�����д����������ͷ��������"<<endl;
	
	//�����ÿ������캯�� ��ʼ������
//	Person(p5);   �����ôд������������Ϊ ��д��һ�� Person p5   (������һ������)
	//���д����ֵ���� �൱��   Person p5 = Person(p4);
	
	//��ʽ����ת�� 
	Person p7 = 100 ;
	//�вι��캯�� �൱�� Person p7 = Person(100) ;
	Person p8 = p7;  //�൱�� Person p8 = Person(p7); 
}
 
int main(){
	
	test1();
	
	system("pause");
	return 0;
}
