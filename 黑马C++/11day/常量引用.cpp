#include<iostream>
using namespace std;

void test1(){
	//int &ref = 10;  //引用不合法的内存，不可以
	const int &ref = 10;//加入const后，编译器处理方式为：int temp =10;
													//   const int &ref = temp;
	//ref = 10;//不合法
	//分配合法内存就可通过指针绕过编译器改掉 
	int *p =(int *)&ref; 
	*p = 1000;
	cout<<ref<<endl;  //1000
}

//常量引用使用场景通常用来修饰形参
void showValue(const int &val){
	//val += 100;//如果只想显示内容而不想修改内容，那么就用const修饰这个形参 
	cout<<"val= "<<val<<endl;
} 
void test2(){
	int a=10;
	showValue(a);
}

int main(){
	
	test2(); 
	
	system("pause");
	return 0;
} 
