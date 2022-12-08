#include<stdio.h>
#include<stdlib.h>

//全局变量检测增强
int a;
int a=10;  //可以编译 

//2、函数检测增强
int getRectS(w,h){   //无数据类型可以通过 
	
} 
void test2(){   //参数个数不匹配可以通过 
	getRectS(10,10,10);
}

//3、类型检测增强
void test3(){
	char *p = malloc(sizeof(64));  //malloc的返回值是void*（C中万能） 可以通过 
	free(p);
}

//4、struct的增强
struct Person{
	int m_age;
//	void pluseage();   //C中struct不可添加函数 
}; 
void test4(){
	struct Person p1;  //创建结构体是必须加struct 
} 

//5、bool类型增强
//  C中没有bool类型  

//6、三目运算符增强  
void test6(){
	int a=10;
	int b=20;
	printf("ret = %d \n", a>b?a:b ); // 20 

//	a>b?a:b = 100;  不能编译通过 结果20 = 100 
//  C返回的是值 
//  要想模仿C++：
	*(a>b?&a:&b)=100;
	printf("a=%d b=%d\n",a,b); 
}

//7、const增强
const int A = 10;  //全局只读受保护，不可改变 
void test7(){
	//A = 100;  不可修改
	const int B=20;  //局部常量、伪常量 编译器会分配内存 
	//int arr[B];//无法初始化数组 B是伪常量 
	//B=100; //不可修改
	int *p = (int *)&B;
	*p = 200;
	printf("*p=%d,B=%d \n",*p,B);  //200 200
}  

int main(){
	test7();
	system("pause");
	return 0;
} 
