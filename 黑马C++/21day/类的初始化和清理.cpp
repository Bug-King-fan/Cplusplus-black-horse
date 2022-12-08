#include<iostream>
using namespace std;

//构造函数和析构函数会被编译器自动编译
//不写的话 编译器会自动添加一个析构和构造函数，只不过不能做任何操作做 
//构造函数和析构函数自动调用
class Person{
	//构造函数写法
	//与类名相同，无返回值，不写void，可以重载（可以有参数）
	//构造函数由编译器自动调用，而并不是手动，而且只会调用1次 
	public:
		Person(){
			cout<<"构造函数\n";
		} 
		
		//重载
		Person(int a){
			cout<<"构造函数int a \n";
		} 
		
	//析构函数写法
	//与类名相同，前面加 ~ 符号，无返回值，不写void 不可以有参数（不能重载）
	//自动调用，且只执行一次 
		~Person(){
			cout<<"析构函数\n";
		}
}; 

void test1(){
	Person p1;  //默认调用了构造函数和析构函数，是系统提供的两个空实现的函数 
	//存放在栈上的怕p1在函数结束后才会被析构 
	
	Person p2(2);
}

int main(){
	
	test1();	
	Person p2;
	//定义在main里的要在程序结束后再析构 
	system("pause");
	return 0;
}
