#include<iostream>
using namespace std;

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
};
void test1(){
	Person(p1); //ջ��
	Person *p2 = new Person;  //����
	//����new�����Ķ��󣬶��᷵�ظ����͵�ָ��
	//malloc����void * ��Ҫǿת
	//mallloc����ù���ô�� ���� new����ù���
	//new ������� malloc�Ǻ���
	//new����ͷ�  �� delete 
	delete p2; 
}

void test2(){
	void *p = new Person;
	//����void * ����new������ָ���ǻ�����ͷŵ����� 
	//delete p��  �޷��ͷ�p����������д 
	delete (void*)p;
}
void test3(){
	//���� 
	//ͨ��new��������,һ�������Ĭ�Ϲ��캯�����������ṩĬ�Ϲ��캯�� 
	Person *parrary = new Person[10];  //������10�˹��캯��
	delete []parrary;
} 

void test4(){
	//ջ�Ͽ�������ռ� ,��Ĭ�Ϲ�������£� 
	Person parrary2[3] = {Person(1),Person(2),Person(3)};
	//��ջ�Ͽ������飬����ָ���вι���
	
	//�ͷ����� delete��� []  
	delete []parrary2; 
}

int main(){
	//test1();
	//test2();
	test3();
	
	system("pause");
	return 0;
}
