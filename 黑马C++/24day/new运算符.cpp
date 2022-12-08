#include<iostream>
using namespace std;

class Person{
	public:
		Person(){
			cout<<"默认构造函数\n";
		}
		~Person(){
			cout<<"析构函数\n";
		}
		Person(int a){
			cout<<"有参构造函数\n";
		} 
};
void test1(){
	Person(p1); //栈区
	Person *p2 = new Person;  //堆区
	//所有new出来的对象，都会返回该类型的指针
	//malloc返回void * 还要强转
	//mallloc会调用构造么？ 不会 new会调用构造
	//new 是运算符 malloc是函数
	//new如何释放  用 delete 
	delete p2; 
}

void test2(){
	void *p = new Person;
	//当用void * 接受new出来的指针们会出现释放的问题 
	//delete p；  无法释放p，避免这样写 
	delete (void*)p;
}
void test3(){
	//堆区 
	//通过new创建数组,一定会调用默认构造函数，必须有提供默认构造函数 
	Person *parrary = new Person[10];  //调用了10此构造函数
	delete []parrary;
} 

void test4(){
	//栈上开辟数组空间 ,无默认构造情况下： 
	Person parrary2[3] = {Person(1),Person(2),Person(3)};
	//在栈上开辟数组，可以指定有参构造
	
	//释放数组 delete后加 []  
	delete []parrary2; 
}

int main(){
	//test1();
	//test2();
	test3();
	
	system("pause");
	return 0;
}
