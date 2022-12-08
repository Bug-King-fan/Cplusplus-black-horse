#include<iostream>
using namespace std;

void myswap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}

void test1(){
	int a=10;
	int b=20;
	myswap(a,b);  //值传递
	cout<<"a: "<<a<<" b: "<<b<<endl;   //a=10  b=20 
}

//地址传递
void myswap2(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
} 

void test2(){
	int a=10;
	int b=20;
	myswap2(&a,&b);  
	cout<<"a: "<<a<<" b: "<<b<<endl;   //a=20  b=10 
}

//引用传递 类似传地址 
void myswap3(int &c,int &d){
	int temp = c;
	c = d;
	d = temp;
} 

void test3(){
	int a=10;
	int b=20;
	myswap3(a,b);  
	cout<<"a: "<<a<<" b: "<<b<<endl;   //a=20  b=10 
}

//引用的注意事项
//1、引用必须引用一块合法的内存空间
//2、不要返回一个局部变量的引用 
int &dowork(){
	int a=10;
	return a;
} 
void test4(){
//	int &a=10;  //不通过，10无内存空间 
	int &ret = dowork();
	cout<<"ret = "<<ret<<endl;  //10 第一次编译器做了优化保存了值 
	cout<<"ret = "<<ret<<endl;  //0或乱码 
	cout<<"ret = "<<ret<<endl;  //0或乱码 

}

int &dowork2(){
	static int a=10;  //返回静态局部变量 
	return a;
} 
void test5(){

	int &ret = dowork2();
	cout<<"ret = "<<ret<<endl; //10
	cout<<"ret = "<<ret<<endl; //10
	cout<<"ret = "<<ret<<endl; //10

}

void test6(){
	int &ret = dowork2();
	//如果函数的返回值是引用，那么这个函数调用可以作为左值
	dowork2() = 1000;  //相当于 a=1000;
	
	cout<<"ret: "<<ret<<endl; 
} 

int main(){
	
	test6();
	system("pause");
	return 0;
} 
