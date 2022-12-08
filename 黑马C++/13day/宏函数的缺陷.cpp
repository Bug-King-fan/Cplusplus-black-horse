#include<iostream>
using namespace std;

//定义一个加法 
//1、宏函数的括号优先级缺陷 
#define ADD(x,y) x+y  
void test1(){
	int ret = ADD(10,20);
	cout<<ret<<endl;  //30
	
	int  ret2= ADD(10,20) * 20 ;  //预期 600
	cout<<ret2<<endl;     //410  
						  // 10+ 20*20  =410  函数理解缺陷，但可以改
						  // #define ADD(x,y) ((x)+(y))
						  //上行结果为600 
}

//2、注意优先级后的意外不确定缺陷 
#define CMP(a,b)  ((a)<(b))?(a):(b)   //注意了优先级后 
void test2(){
	int a=10;
	int b=20;	
	int ret = CMP(a,b);
	cout<<ret<<endl;  //10 正常
	int ret2 = CMP(++a,b);   //预期11
	cout<<ret2<<endl;   //12
	// ++a 后a = 11，判断成立，执行后面的++a，值=12 
	//这就是宏缺陷 
}
//3、宏函数也没有作用域 

//4、内联函数   用关键字 inline 标识 
inline void cmp(int a,int b){
	int ret = a<b?a:b ;
	cout<<ret<<endl;
} 
void test3(){
	int c=10;
	int d=20;
	cmp(++c,d);
}
//内联函数的注意事项
inline void func();//内联函数声明
inline void func(){
	//如果函数实现时候，没有加inline关键字，那么这个函数依然不算内联函数 
};
//内联函数占用空间，但省去了趋同函数调用 压栈 跳转 返回的时间，实质上是以空间换时间

//类中的内联函数
//类中的成员函数编译器默认会在前面加一个 inline 关键字 

/*         注意          */
//在C++中内联会有一些限制，以下情景编译器可能不考虑将函数进行内联编译
//1、内联函数中 存在任何形式的循环语句
//2、存在过多的条件判断 语句
//3、函数体积过于庞大
//4、对函数进行取址操作 

 
int main(){
	
	test3(); 
	
	system("pause");
	return 0;
}
