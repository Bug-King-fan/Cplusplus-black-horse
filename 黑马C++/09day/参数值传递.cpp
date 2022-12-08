#include<iostream>
using namespace std;

void myswap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}

void test1(){
	int a=10;
	int b=20;
	myswap(a,b);  //ֵ����
	cout<<"a: "<<a<<" b: "<<b<<endl;   //a=10  b=20 
}

//��ַ����
void myswap2(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
} 

void test2(){
	int a=10;
	int b=20;
	myswap2(&a,&b);  
	cout<<"a: "<<a<<" b: "<<b<<endl;   //a=20  b=10 
}

//���ô��� ���ƴ���ַ 
void myswap3(int &c,int &d){
	int temp = c;
	c = d;
	d = temp;
} 

void test3(){
	int a=10;
	int b=20;
	myswap3(a,b);  
	cout<<"a: "<<a<<" b: "<<b<<endl;   //a=20  b=10 
}

//���õ�ע������
//1�����ñ�������һ��Ϸ����ڴ�ռ�
//2����Ҫ����һ���ֲ����������� 
int &dowork(){
	int a=10;
	return a;
} 
void test4(){
//	int &a=10;  //��ͨ����10���ڴ�ռ� 
	int &ret = dowork();
	cout<<"ret = "<<ret<<endl;  //10 ��һ�α����������Ż�������ֵ 
	cout<<"ret = "<<ret<<endl;  //0������ 
	cout<<"ret = "<<ret<<endl;  //0������ 

}

int &dowork2(){
	static int a=10;  //���ؾ�̬�ֲ����� 
	return a;
} 
void test5(){

	int &ret = dowork2();
	cout<<"ret = "<<ret<<endl; //10
	cout<<"ret = "<<ret<<endl; //10
	cout<<"ret = "<<ret<<endl; //10

}

void test6(){
	int &ret = dowork2();
	//��������ķ���ֵ�����ã���ô����������ÿ�����Ϊ��ֵ
	dowork2() = 1000;  //�൱�� a=1000;
	
	cout<<"ret: "<<ret<<endl; 
} 

int main(){
	
	test6();
	system("pause");
	return 0;
} 
