#include<iostream>
using namespace std;

class Person{
public:	
/*	Person(){}
	//�вι��캯�����ڳ�ʼ������
	Person(int a,int b,int c){
		A=a;
		B=b;
		C=c;
	} */
	
	//���ó�ʼ���б�����ʼ������ 
	//1.
	Person(): A(10),B(20),C(30){
		
	}
	//2.
	Person(int a,int b,int c) : A(a),B(b),C(c){
		
	}
	//�ڹ��캯����� �����ԣ�������,���ԣ�������,���ԣ�������,.......
	
	
	int A;
	int B;
	int C;
};

void test1(){
	Person p1(10,20,30);
	cout<<"A: "<<p1.A<<" B: "<<p1.B<<" C: "<<p1.C<<endl; 
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
