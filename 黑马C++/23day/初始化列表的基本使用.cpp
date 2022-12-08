#include<iostream>
using namespace std;

class Person{
public:	
/*	Person(){}
	//有参构造函数用于初始化数据
	Person(int a,int b,int c){
		A=a;
		B=b;
		C=c;
	} */
	
	//利用初始化列表来初始化数据 
	//1.
	Person(): A(10),B(20),C(30){
		
	}
	//2.
	Person(int a,int b,int c) : A(a),B(b),C(c){
		
	}
	//在构造函数后加 ：属性（参数）,属性（参数）,属性（参数）,.......
	
	
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
