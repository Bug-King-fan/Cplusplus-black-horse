#include<iostream>
using namespace std;

void test1(int a=10,int b=20){
	cout<<"tset1：a+b: "<<a+b<<endl;
} 
//注意点 ：
//1、形参b设置默认参数值，那么后面位置的形参c也需要设置默认参数
void test2(int a,int b=10,int c=10){  //至少传一个参数 
/*	void test2(int a,int b=10,int c)  错误
	如果一个位置有了默认参数，那么从他开始往后的形参必须有默认参数
*/	
	cout<<"test2：a+b+c: "<<a+b+c<<endl;
} 
//2、如果函数声明和函数定义分开，函数声明设置了默认参数，函数定义不能再设置默认参数
void test3(int a=1,int b=2); 
void test3(int a,int b){
	cout<<"test3：a+b: "<<a+b<<endl;	
}

//函数 占位参数
//如果有了占位参数，函数调用时必须提供这个参数 但是用不到/找不到这个参数 
//在重载 ++符号才有点用
//占位参数可以有默认值  void func2(int a,int = 1); 

void func(int a,int){
	cout<<"test4: a: "<<a<<endl;
} 
test4(){
	func(10,1); //第二个参数为占位参数无法使用但必须有，值随意传 
}

//C语言中没有默认参数和占位参数 
 
int main(){
	test1();
	test2(1,2);
	test2(1);
	test3();
	test4();
	
	system("pause");
	return 0;
}
