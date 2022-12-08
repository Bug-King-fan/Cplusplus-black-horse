//引用就是起别名
#include<iostream>
using namespace std;
//1、引用的基本语法  <type> &别名 = 原名; 
void test1(){
	int a = 10;
	int &b = a;
	cout<<"a: "<<a<<endl;  //10
	cout<<"b: "<<b<<endl;  //10
	cout<<endl;
	b = 20;
	cout<<"a: "<<a<<endl;  //20
	cout<<"b: "<<b<<endl;  //20
}
//2、引用必须初始化
void test2(){
	//int &a;  //不通过，引用未初始化
	int a=10;
	int &b=a;
	int c=20;
	//b=c;    // 不通过，一但引用初始化就不可更改 
} 
//3、对数组建立引用
void test3(){
	int arr[10];
	for(int i=0;i<10;i++){
		arr[i]=i;
	}
	//给数组起别名
	int (&num)[10]=arr;
	for(int i=0;i<10;i++){
		cout<<num[i]<<" ";
	} 
	cout<<endl;
	
	//第二种方式起别名
	typedef int (ARRAYERF)[10]; //一个具有10个元素的int类型的数组 
	ARRAYERF &num2 =arr;
	for(int i=0;i<10;i++){
		cout<<num2[i]<<" ";
	} 
	cout<<endl;
} 
 
int main(){
	
	test3();
	
	system("pause");
	return 0;
} 
