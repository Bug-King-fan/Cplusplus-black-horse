#include<iostream>
using namespace std;

class Person{
	public:
		Person(){
			cout<<"无参构造函数\n";
		}
		Person(int a){
			cout<<"有参构造函数\n";
		}
		Person(const Person &p){
			cout<<"拷贝构造函数\n";
		}
		~Person(){
			cout<<"析构函数\n";
		}
		
		int age;	
};

//1、用一个已经创建好的对象来初始化一个新对象 
void test1(){
	Person p1;
	p1.age = 10;
	Person p2(p1);
}

//2、以值传递的方式给函数参数传值  //会产生一定的空间开销 
//如果换成引用参数 可以节省掉那部分开销 
void dowork(Person p1){  // Person p1 = Person(p);
	
} 

void test2(){
	Person p;
	p.age = 10;
	dowork(p);
}
 
//3、以值方式返回局部对象
Person dowork2(){
	Person p5;
	return p5;
} 

void test3(){
	Person p4 = dowork2();
}
/*未按预期得到拷贝构造函数的调用
是因为：
Release模式下： 
出现这种情况是编译器对函数的返回值做了优化，减少了那次拷贝构造函数 
优化后代码：   引用的方式传进dowork2里 
Person p;   不调用默认构造函数 
 dowork2(p);
 void dowork(Person &p){  //引用传递 
	Person p1;   //调用默认构造函数 
}

Debug模式下：
会调用拷贝构造函数   
*/
int main(){
	
//	test1();
//	test2();
	test3();
	
	system("pause");
	return 0;
}
