#include<iostream>
using namespace std;
#include"game1.h"
#include"game2.h"
//namespace 命名空间 主要用于 命名冲突的问题 

void test1(){
	
	LOL::goAtk();
	
	cout<<"**********************************"<<endl;
	
	KING::goAtk();
	
} 

//1、命名空间下可以放函数、变量、结构体、类登
namespace A{
	void func();
	int m_A=20;
	struct Person{
		
	};
	class student{
		
	};
	
	namespace B{
		int m_A=10;
	} 
	
} 
//2、命名空间必须定义在全局作用域下
//3、命名空间可以嵌套命名空间
void test2(){
	
	cout<<"作用域A下的m_A: "<< A::m_A <<endl;
	cout<<"作用域B下的m_A: "<< A::B::m_A <<endl;
	

} 
//4、命名空间是开放的，可有随时往原先命名空间添加内容  
namespace A {    //此A命名空间会和上面命名的空间A进行合并 
	int m_B=1000; 
} 

void test3(){
	
	cout<<"A::下的m_A为:  "<< A::m_A <<endl;
	cout<<"A::下的m_B为:  "<< A::m_B <<endl;
	

} 
//5、命名空间可以匿名、无名
namespace{
	int m_C = 0;
	int m_D = 0;   
	//写了无命名空间，相当于写了 static int m_C=0 和 static int m_D=0 
	//静态变量仅能在当前文件使用 
}
//6、命名空间可以起别名
namespace veryLongName{
	int m_A = 0;	
} 
void test4(){
	//起别名
	namespace veryShortName = veryLongName;
	cout<< "veryLongName::m_A  : "  <<veryLongName::m_A <<endl;
	cout<< "veryShortName::m_A : "  <<veryShortName::m_A<<endl;
}

namespace Outer_layer{  
	int W=10;
	class T{
			public:
				int damage;
	};
	namespace Inner_layer{
		int W=20;
	}
}

int main(){
	
	test1();
	cout<<endl<<endl;
	test2();
	cout<<endl<<endl;
	test3();
	cout<<endl<<endl;
	test4();
	
	system("pause");
}

