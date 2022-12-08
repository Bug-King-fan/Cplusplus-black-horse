#include<iostream>
using namespace std;

class Person{
	public:
		Person(){
			//m_age = 10; m_age 是静态的 
		}
		static int m_age; //加入static就是静态成员变量，会共享数据
		//静态成员变量在类中声明，类外初始化！
		 
		void show(){
			cout<<"m_age:"<<m_age<<endl;
			cout<<"m_other:"<<m_other<<endl;
		} 
		
		int m_A ; 
		//静态成员函数
		//注意：不可以访问普通的成员变量！
		//		可以访问静态成员变量！  共享，所以不需要区分 
		static void func(){ //通过对象和类名均可访问 
	    	// m_A=10; 不可通过 原因如图无法区分是谁的 m_A 
			cout<<" static func的调用\n";
		}
		
		void myfunc(){  //普通成员函数 可以访问普通成员变量 也可以访问静态成员变量 
			m_A = 100;
			m_age = 100;
		}
		 private:
		 	static int m_other;
		 	static void func2(){
		 		cout<<"func2()的调用\n";
			 }
};
int Person::m_age = 0; //类外初始化 
int Person::m_other = 20;
void test1(){
	//通过对象访问属性
	Person p1;
	p1.m_age = 10;
	Person p2;
	p2.m_age = 20;
	cout<<"p1.age:"<<p1.m_age<<endl; //20
	cout<<"p2.age:"<<p2.m_age<<endl; //20
	//共享数据
	cout<<"*******************\n";
	p1.show();
	cout<<"*******************\n";
	//2 通过类名直接访问属性
	cout<<"类名访问属性:"<<Person::m_age<<endl; //20 
//	cout<<"other: "<<Person::m_other<<endl;  私有权限在类外访问不到 
	
	//静态成员函数的调用
	p1.func();
	p2.func();
	Person::func(); 
	//静态成员函数也有权限
//	Person::func2(); 私有不可访问
	
	//普通成员函数
	p1.myfunc();
	p1.show();
}
int main(){
	
	test1();
	
	system("pause");
	return 0;
} 
