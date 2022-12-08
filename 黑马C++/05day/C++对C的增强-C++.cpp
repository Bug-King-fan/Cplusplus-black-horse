#include<iostream>
#include<cstdlib>
using namespace std;

//1、全局变量检测增强
//int a;     //两个全局a不能同时存在 
//int a=10;  //不可以通过 

//2、函数检测增强、参数类型增强、返回值检测增强 、函数调用参数检测增强 
// int getRectS(w,h){   //无数据类型不可以通过 
//	
// } 
//
// int getRectS(int w,int h){   //无返回值不可以通过 
// 	
// }  
int getRectS(int w,int h){    
	return w*h;
} 

//void test2(){
//	getRectS(10,10,10);  //参数个数不匹配不通过 
//}
void test2(){
	getRectS(10,10);
}

//3、类型检测增强
// void test3(){
// 	char *p = malloc(sizeof(64));  //malloc的返回值是void* 不可以通过   （需要强转） 
// }

void test3(){
	char *p = (char*)malloc(sizeof(int));  //malloc的返回值是void*（C中万能） 可以通过 
}

//4、结构体增强 
struct Person{
	int m_age;
	void pluseage(){m_age++;};   //C++中struct可以添加函数 
}; 
void test4(){
	Person p1;  //创建结构体不用加struct
	p1.m_age = 10;
	p1.pluseage();
	cout<<p1.m_age<<endl;   // 11
} 

//5、bool类型的增强
bool flag = true;  //只有真或假两种类型  true 代表真 false代表假 
void test5(){
	cout<<sizeof(bool)<<endl;  // 1字节 
	flag = 100; 
	//bool类型 非0 值全为 1 
	cout<<flag <<endl;   //  1 (真) 
} 
//6、三目运算符增强  
void test6(){
	int a=10;
	int b=20;
	cout<<"ret = "<< (a>b?a:b) <<endl;  // 20 
	
	(a>b?a:b) = 100; //可以通过  
	cout<<"a= "<<a <<" b= "<<b<<endl;  //a=10 b=100
	//C++返回的是引用（变量） 
}

//7、const增强
const int A = 10;  //全局只读受保护，不可改变 
void test7(){
	//A = 100;  不可修改
	const int B=20; //真正的常量 不会分配内存  写入key-value表内 
	int arr[B]; //可以初始化数组 
	int *p = (int *)&B;  //编译器会临时开辟一块内存空间
	//int temp = B;   temp有内存 
	//int *p = (int *)&temp;   *p 指的是临时的那块空间   

	*p = 200;
	cout<<"*p= "<<*p<<" B = "<<B<<endl;  //200 20 
}  


int main(){
	test7();
	system("pause");
	return 0;
}
