#include<stdio.h>
#include<stdlib.h>

//ȫ�ֱ��������ǿ
int a;
int a=10;  //���Ա��� 

//2�����������ǿ
int getRectS(w,h){   //���������Ϳ���ͨ�� 
	
} 
void test2(){   //����������ƥ�����ͨ�� 
	getRectS(10,10,10);
}

//3�����ͼ����ǿ
void test3(){
	char *p = malloc(sizeof(64));  //malloc�ķ���ֵ��void*��C�����ܣ� ����ͨ�� 
	free(p);
}

//4��struct����ǿ
struct Person{
	int m_age;
//	void pluseage();   //C��struct������Ӻ��� 
}; 
void test4(){
	struct Person p1;  //�����ṹ���Ǳ����struct 
} 

//5��bool������ǿ
//  C��û��bool����  

//6����Ŀ�������ǿ  
void test6(){
	int a=10;
	int b=20;
	printf("ret = %d \n", a>b?a:b ); // 20 

//	a>b?a:b = 100;  ���ܱ���ͨ�� ���20 = 100 
//  C���ص���ֵ 
//  Ҫ��ģ��C++��
	*(a>b?&a:&b)=100;
	printf("a=%d b=%d\n",a,b); 
}

//7��const��ǿ
const int A = 10;  //ȫ��ֻ���ܱ��������ɸı� 
void test7(){
	//A = 100;  �����޸�
	const int B=20;  //�ֲ�������α���� ������������ڴ� 
	//int arr[B];//�޷���ʼ������ B��α���� 
	//B=100; //�����޸�
	int *p = (int *)&B;
	*p = 200;
	printf("*p=%d,B=%d \n",*p,B);  //200 200
}  

int main(){
	test7();
	system("pause");
	return 0;
} 
