#include<iostream>
#include<string>
using namespace std;

//  只要分配内存的const都可以用指针改掉它的值！ 
//1、const分配内存    取地址会分配临时内存 
void test1(){  //*****BUG不可更改 
	const int m_A = 10;
	int *p = (int *)&m_A;   //分配临时内存 
	*p = 1000;
	cout<<"m_A: "<<m_A<<endl;  //10
	cout<<"*p: "<<*p<<endl;    //1000
}
//2、extern 编译器也会给const变量分配内存

//3、用变量初始化const变量 分配内存
void test2(){
	int a=10;
	const int b = a;  
	
	int *p = (int *)&b;
	*p=1000;
	cout<<"b= "<<b<<endl;  //1000
} 

//4、自定义数据类型  加const也会分配内存 
struct Person{
	string m_name;
	int m_age;
}; 

void test3(){
	const Person p1={"noon",0};  //需初始化！！！ 
	//p1.m_name = "aaa";   //p1是常量不可直接修改！
	//但分配了内存就可通过指针修改！
	Person *p =(Person *)&p1;
	p->m_name = "Frank";
	p->m_age = 18;
	cout<<" 姓名："<<p1.m_name<<endl;   //Frank
	cout<<" 年龄："<<p1.m_age<<endl;    //18
}
/*
	尽量使用const代替define   ！！！ 
	#define max 1024;   ->   const int max = 1024; 
	define作用域是全局
	const 有作用域
	
	例：
	void fun1(){
		const int a = 10;
		#define A 20
		 //undef A  //用于卸载宏常量A 
	} 
	void fun2(){
		cout<<"a: "<<a<<endl;//不可访问，超出const的作用域
		cout<<"A: "<<A<<endl;   //可以访问，#define作用域是全局或到#undef
	}
*/

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
