#include<iostream>
using namespace std;

class person{
	public:
		person(){
			//构造中可以修改属性
			//this 指针永远指向本体
			//person *const this   //this是常量
			//如果this指针指向的值也不可修改 
			//const person *const this 
			this->m_A = 10;
			this->m_B = 10; 
		}
		
		int m_A ;
		mutable int m_B ; //加上 mutable关键字 就算是常函数，也可以执意修改 
		
		void show() const{  //常函数 
//			this->m_A = 1000;  可以修改m_A
//			但是函数名后加上const 就不可修改指针指向的值 
//			相当于 const person *const this
			this->m_B = 1000;
			cout<<"m_A :"<<this->m_A <<endl;
			cout<<"m_B :"<<this->m_B <<endl;
		}
		
		void show2(){
			cout<<"m_A :"<<this->m_A <<endl;
			cout<<"m_B :"<<this->m_B <<endl;
		}
}; 
void test1(){
	person p1;
	p1.show();
	
	cout<<"***************************\n";
	
	p1.m_A = 100; //可以修改 
	cout<<"p1.m_A :"<<p1.m_A <<endl;
	//常对象  不允许修改属性 
	const person p2;
//	p2.m_A = 200; // [Error] read-only object
	cout<<"p2.m_A :"<<p2.m_A <<endl;
	
	p2.show(); 
//	p2.show2(); 
//	[Error] passing 'const person' as 'this' argument of 'void person::show2()' discards qualifiers [-fpermissive]
//	常对象不能调用普通成员函数
//	常对象 可以调用常函数 
};

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
