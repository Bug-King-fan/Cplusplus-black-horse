/*   IMPORTANT     */
#include<iostream>
using namespace std;

//��������
//�������ƿ����ظ�
//������ͬһ�������� 
//�����Ĳ��� ������ͬ �� ���Ͳ�ͬ �� ˳��ͬ 

class Person{
	void func();  //�������أ�������ͬ 
}; 

void func(){
	cout<<"�޲���func()\n"; 
}

void func(int a){
	cout<<"�в���func(int a)\n";
}

void func(double a){
	cout<<"�в���func(double a) \n"; 
} 

void func(double a,int b){
	cout<<"�в���func(double a ,int b)\n";
}

void func(int a,double b){
	cout<<"�в���func(int a ,double b)\n";
}

//����ֵ������Ϊ�������ص�����ô��
//         �����ԣ�
/*
    int func(int a,double b){
	    cout<<"�в���func(int a ,double b)\n";
    }
       ��ȷ�����Է���ֵ��Ϊ�������� 
*/
//       �����ԣ����� 

void test1(){
	func();
	func(1);
	func(1.1);
	func(1.2,2);
	func(1,2.5);
}

//����������������Ĭ�ϲ�����ʱ��Ҫע���������ԣ�
void func2(int a,int b=10){
	
}
void func2(int a){
	
}
void test2(){
	// func2(10);   //��֪����Ӧ�ĸ� ���ֶ����ԣ� 
}

//���õ����ذ汾
void func3(int &a){
	cout<<"int &a \n";
}
test3(){
	int a=10;
	func3(a);
//	func3(10);   //�����ԣ�10���ڴ���䣬���ñ������úϷ����ڴ�ռ� 	
}
//����constҲ������Ϊ���ص����� 
void func3(const int &a){   
	//const ������ʱ�ڴ�ռ��Ч�������Կ�����func3��10�� 
	cout<<"const int &a\n";
}
void test4(){
	func3(10);
}


int main(){
	
	test1();
	test3();
	test4();
	
	system("pause");
	return 0;
}
