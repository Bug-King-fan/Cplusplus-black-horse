#define __CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
using ll = long long;

int func(int a, int b) {
	printf("1999年固定业务模块func(%d,%d)...\n", a, b);
	return 0;
}

int func2(int a, int b) {
	printf("1999年固定业func2(%d,%d)...\n", a, b);
	return 0;
}

int func3(int a, int b) {
	printf("1999年固定业func3(%d,%d)...\n", a, b);
	return 0;
}

//现在想定义一个指针 指向func函数第调用方法

//方法一：函数的返回值，函数的参数列表（形参数量，类型，顺序）
//定义一个类型
//格式：typedef 返回类型(重新定义的类型名)(原有参数类型...);
typedef int(FU)(int, int);

//方法二：定义一个函数指针
typedef int(*FUN)(int, int);

//方法三：直接写出函数指针类型 ***优先*** 参考：
//void my_func(int(*fp)(int, int), int a, int b) {
//	fp(a, b);
//}

void test1() {
	FU* fp = NULL;
	fp = func;
	fp(10, 20);//等价于(*fp)(10,20) 后期进行优化 不加*也行
}

void test2() {
	FUN fp2 = NULL;
	fp2 = func;
	fp2(100, 200);
}

void test3() {
	int(*fp3)(int, int) = NULL; 
	fp3 = func;
	fp3(5, 10);
}

//现在一个接口使得三个函数均可调用
void my_func(int(*fp)(int, int), int a, int b) {
	fp(a, b);
}
int new_func(int a, int b) {
	printf("2023年新增功能模块new_func(%d,%d)...\n", a, b);
	return 0;
}
void test4() {
	my_func(func, 10, 20);
	my_func(func2, 200, 300);
	my_func(func3, 3000, 4000);

	//若新增子功能 只需仿照接口函数指针类型 写新功能就行
	my_func(new_func, 50000, 60000);
}

int main() {
#if 1
	test1();
	test2();
	test3();
#else
	test4();
#endif 
	return 0;
}