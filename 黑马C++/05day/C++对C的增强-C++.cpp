#include<iostream>
#include<cstdlib>
using namespace std;

//1��ȫ�ֱ��������ǿ
//int a;     //����ȫ��a����ͬʱ���� 
//int a=10;  //������ͨ�� 

//2�����������ǿ������������ǿ������ֵ�����ǿ ���������ò��������ǿ 
// int getRectS(w,h){   //���������Ͳ�����ͨ�� 
//	
// } 
//
// int getRectS(int w,int h){   //�޷���ֵ������ͨ�� 
// 	
// }  
int getRectS(int w,int h){    
	return w*h;
} 

//void test2(){
//	getRectS(10,10,10);  //����������ƥ�䲻ͨ�� 
//}
void test2(){
	getRectS(10,10);
}

//3�����ͼ����ǿ
// void test3(){
// 	char *p = malloc(sizeof(64));  //malloc�ķ���ֵ��void* ������ͨ��   ����Ҫǿת�� 
// }

void test3(){
	char *p = (char*)malloc(sizeof(int));  //malloc�ķ���ֵ��void*��C�����ܣ� ����ͨ�� 
}

//4���ṹ����ǿ 
struct Person{
	int m_age;
	void pluseage(){m_age++;};   //C++��struct������Ӻ��� 
}; 
void test4(){
	Person p1;  //�����ṹ�岻�ü�struct
	p1.m_age = 10;
	p1.pluseage();
	cout<<p1.m_age<<endl;   // 11
} 

//5��bool���͵���ǿ
bool flag = true;  //ֻ��������������  true ������ false����� 
void test5(){
	cout<<sizeof(bool)<<endl;  // 1�ֽ� 
	flag = 100; 
	//bool���� ��0 ֵȫΪ 1 
	cout<<flag <<endl;   //  1 (��) 
} 
//6����Ŀ�������ǿ  
void test6(){
	int a=10;
	int b=20;
	cout<<"ret = "<< (a>b?a:b) <<endl;  // 20 
	
	(a>b?a:b) = 100; //����ͨ��  
	cout<<"a= "<<a <<" b= "<<b<<endl;  //a=10 b=100
	//C++���ص������ã������� 
}

//7��const��ǿ
const int A = 10;  //ȫ��ֻ���ܱ��������ɸı� 
void test7(){
	//A = 100;  �����޸�
	const int B=20; //�����ĳ��� ��������ڴ�  д��key-value���� 
	int arr[B]; //���Գ�ʼ������ 
	int *p = (int *)&B;  //����������ʱ����һ���ڴ�ռ�
	//int temp = B;   temp���ڴ� 
	//int *p = (int *)&temp;   *p ָ������ʱ���ǿ�ռ�   

	*p = 200;
	cout<<"*p= "<<*p<<" B = "<<B<<endl;  //200 20 
}  


int main(){
	test7();
	system("pause");
	return 0;
}
