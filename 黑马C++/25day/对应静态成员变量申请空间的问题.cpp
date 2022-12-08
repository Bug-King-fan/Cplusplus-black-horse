#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Person{
	private:
		Person(){
			cout<<"构造函数调用\n";
		}

		static string name;
		static int age;

//		static Person *denger;   // ??? 问题 ： 申请空间无法初始化，如何维护？ 
		static string *denger;
	
	public:
		static void show(){
				cout<<"name:"<<name<<endl;
				cout<<"age: "<<age <<endl;
				cout<<"denger:"<<denger<<endl;
				cout<<"*denger:"<<*denger<<endl;
		}
//		static char *denger; 
}; 

int Person::age = 19;
string Person::name = "Frank";

//Person *Person::denger = new Person;
string *Person::denger = new string("nan");

// （已解决）  BUG:  [Error] expected constructor, destructor, or type conversion before '(' token   原因如下： 
//char *Person::denger = new char[5];
//strcpy(Person::denger,"nan");  //不可以 C++中，全局阈只能声明、初始化变量； 不能用于赋值、运算、调用函数等！！！

void test1(){
//	strcpy(Person::denger,"nan"); //可以通过，且denger == "nan"   前提需放在public中，否则无法访问并赋值 
	Person::show();
}

void test2(){
	char p[4] = "nv";
	cout<<"p:"<<p<<endl;
}
int main(){
	cout<<"main调用\n";
	test1();
	return 0;
}
