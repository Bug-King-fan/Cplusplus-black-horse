#include<iostream>
using namespace std;

void test1(int a=10,int b=20){
	cout<<"tset1��a+b: "<<a+b<<endl;
} 
//ע��� ��
//1���β�b����Ĭ�ϲ���ֵ����ô����λ�õ��β�cҲ��Ҫ����Ĭ�ϲ���
void test2(int a,int b=10,int c=10){  //���ٴ�һ������ 
/*	void test2(int a,int b=10,int c)  ����
	���һ��λ������Ĭ�ϲ�������ô������ʼ������βα�����Ĭ�ϲ���
*/	
	cout<<"test2��a+b+c: "<<a+b+c<<endl;
} 
//2��������������ͺ�������ֿ�����������������Ĭ�ϲ������������岻��������Ĭ�ϲ���
void test3(int a=1,int b=2); 
void test3(int a,int b){
	cout<<"test3��a+b: "<<a+b<<endl;	
}

//���� ռλ����
//�������ռλ��������������ʱ�����ṩ������� �����ò���/�Ҳ���������� 
//������ ++���Ų��е���
//ռλ����������Ĭ��ֵ  void func2(int a,int = 1); 

void func(int a,int){
	cout<<"test4: a: "<<a<<endl;
} 
test4(){
	func(10,1); //�ڶ�������Ϊռλ�����޷�ʹ�õ������У�ֵ���⴫ 
}

//C������û��Ĭ�ϲ�����ռλ���� 
 
int main(){
	test1();
	test2(1,2);
	test2(1);
	test3();
	test4();
	
	system("pause");
	return 0;
}
