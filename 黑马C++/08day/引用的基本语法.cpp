//���þ��������
#include<iostream>
using namespace std;
//1�����õĻ����﷨  <type> &���� = ԭ��; 
void test1(){
	int a = 10;
	int &b = a;
	cout<<"a: "<<a<<endl;  //10
	cout<<"b: "<<b<<endl;  //10
	cout<<endl;
	b = 20;
	cout<<"a: "<<a<<endl;  //20
	cout<<"b: "<<b<<endl;  //20
}
//2�����ñ����ʼ��
void test2(){
	//int &a;  //��ͨ��������δ��ʼ��
	int a=10;
	int &b=a;
	int c=20;
	//b=c;    // ��ͨ����һ�����ó�ʼ���Ͳ��ɸ��� 
} 
//3�������齨������
void test3(){
	int arr[10];
	for(int i=0;i<10;i++){
		arr[i]=i;
	}
	//�����������
	int (&num)[10]=arr;
	for(int i=0;i<10;i++){
		cout<<num[i]<<" ";
	} 
	cout<<endl;
	
	//�ڶ��ַ�ʽ�����
	typedef int (ARRAYERF)[10]; //һ������10��Ԫ�ص�int���͵����� 
	ARRAYERF &num2 =arr;
	for(int i=0;i<10;i++){
		cout<<num2[i]<<" ";
	} 
	cout<<endl;
} 
 
int main(){
	
	test3();
	
	system("pause");
	return 0;
} 
