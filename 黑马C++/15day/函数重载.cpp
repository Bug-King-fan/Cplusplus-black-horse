/*   IMPORTANT     */
#include<iostream>
using namespace std;

//函数重载
//函数名称可以重复
//必须在同一个作用域 
//函数的参数 个数不同 或 类型不同 或 顺序不同 

class Person{
	void func();  //不叫重载，作用域不同 
}; 

void func(){
	cout<<"无参数func()\n"; 
}

void func(int a){
	cout<<"有参数func(int a)\n";
}

void func(double a){
	cout<<"有参数func(double a) \n"; 
} 

void func(double a,int b){
	cout<<"有参数func(double a ,int b)\n";
}

void func(int a,double b){
	cout<<"有参数func(int a ,double b)\n";
}

//返回值可以作为函数重载的条件么？
//         不可以！
/*
    int func(int a,double b){
	    cout<<"有参数func(int a ,double b)\n";
    }
       明确不可以返回值作为重载条件 
*/
//       二义性！！！ 

void test1(){
	func();
	func(1);
	func(1.1);
	func(1.2,2);
	func(1,2.5);
}

//当函数重载碰到了默认参数的时候，要注意避免二义性！
void func2(int a,int b=10){
	
}
void func2(int a){
	
}
void test2(){
	// func2(10);   //不知道对应哪个 出现二义性！ 
}

//引用的重载版本
void func3(int &a){
	cout<<"int &a \n";
}
test3(){
	int a=10;
	func3(a);
//	func3(10);   //不可以，10无内存分配，引用必须引用合法的内存空间 	
}
//但是const也可以作为重载的条件 
void func3(const int &a){   
	//const 会有临时内存空间的效果，所以可以用func3（10） 
	cout<<"const int &a\n";
}
void test4(){
	func3(10);
}


int main(){
	
	test1();
	test3();
	test4();
	
	system("pause");
	return 0;
}
