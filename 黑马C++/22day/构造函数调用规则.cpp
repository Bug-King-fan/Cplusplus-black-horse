#include<iostream>
using namespace std;

class myclass{
	public:
		int age;
		myclass(){
			cout<<"Ĭ�Ϲ��캯��\n";
		}
		myclass(int a){
			cout<<"�вι��캯��\n"; 
		}
}; 
//ϵͳĬ�ϸ�һ�����ṩ�������� 
//Ĭ�Ϲ���  ��������  �������� 

//�������ṩ���вεĹ��캯����ϵͳ�Ͳ����ٸ������ṩĬ�Ϲ��캯��
//����ϵͳ�����ṩĬ�ϵĿ������캯�� 
void test1(){
	myclass c1;
	c1.age = 10;
	myclass c2(c1); //����Ĭ�ϵĿ������� ����м򵥵�ֵ���� 
	cout<<"c2.age: "<<c2.age<<endl;
}

//2���������ṩ�˿������� ��ôϵͳ�Ͳ����ṩ����������
class myclass2{
	public:
		int age;
		
		myclass2(const myclass2 &m){
			cout<<"�������캯��\n";	
		}
}; 
 
void test2(){
//	myclass2 m;   //�޹��캯��������������ͨ�� 
}

int main(){
	
	test1();
	
	
	system("pause");
	return 0;
}
