#include<iostream>
using namespace std;

class myclass{
	public:
		int age;
		myclass(){
			cout<<"默认构造函数\n";
		}
		myclass(int a){
			cout<<"有参构造函数\n"; 
		}
}; 
//系统默认给一个类提供三个函数 
//默认构造  拷贝构造  析构函数 

//当我们提供了有参的构造函数，系统就不会再给我们提供默认构造函数
//但是系统还会提供默认的拷贝构造函数 
void test1(){
	myclass c1;
	c1.age = 10;
	myclass c2(c1); //调用默认的拷贝构造 会进行简单的值拷贝 
	cout<<"c2.age: "<<c2.age<<endl;
}

//2、当我们提供了拷贝构造 那么系统就不会提供其他构造了
class myclass2{
	public:
		int age;
		
		myclass2(const myclass2 &m){
			cout<<"拷贝构造函数\n";	
		}
}; 
 
void test2(){
//	myclass2 m;   //无构造函数和析构函数不通过 
}

int main(){
	
	test1();
	
	
	system("pause");
	return 0;
}
