#include<iostream>
using namespace std;

//分类
//按照参数分类 无参构造函数（默认构造函数）  有参构造函数 
//按照类型分类  普通构造函数   拷贝构造函数

class Person{
	public:
		Person(){
			cout<<"默认构造函数\n";
		}
		~Person(){
			cout<<"析构函数\n";
		}
		Person(int a){
			cout<<"有参构造函数\n";
		}
		//以上的是普通构造函数 
		
		//拷贝构造函数    拷贝一份对象数据 
		Person(const Person &p){
			cout<<"拷贝构造函数\n";
			age = p.age;
		}
	
		int age;
};

void test1(){
	//拷贝构造函数调用方式
	//括号法调用
	Person p1(1);
	p1.age = 10;
	Person p2(p1);
	cout<<"p1.age: "<<p1.age<<endl; 
	cout<<"p2.age: "<<p2.age<<endl;
	
	//默认构造函数不加括号，无参类型 
	Person p3;
	cout<<"*****************************\n";
	//显示法调用
	Person p4 = Person(100); //告诉编译器调用int类型的构造函数 
	Person p5 = Person(p4);
	Person(101);
	//其中 Person(101)叫做匿名对象
	//匿名对象的特点：
	//如果编译器发现了对象是匿名的 ，那么在这行代码结束后就释放这个对象 
	cout<<"如果编译器发现了对象是匿名的 ，那么在这行代码结束后就释放这个对象！"<<endl;
	
	//不能用拷贝构造函数 初始化对象
//	Person(p5);   如果这么写，编译器会认为 你写了一个 Person p5   (声明了一个对象)
	//如果写成右值可以 相当于   Person p5 = Person(p4);
	
	//隐式类型转化 
	Person p7 = 100 ;
	//有参构造函数 相当于 Person p7 = Person(100) ;
	Person p8 = p7;  //相当于 Person p8 = Person(p7); 
}
 
int main(){
	
	test1();
	
	system("pause");
	return 0;
}
