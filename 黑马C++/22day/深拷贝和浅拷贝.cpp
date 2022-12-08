#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class Person{
	public:
		char  *name;
		int age;
		
		Person(){
			cout<<"无参构造\n";
		}
		Person(char *m_name,int m_age){
			name = (char*)malloc(strlen(name) + 1);  //开辟到堆上 
			strcpy(name,m_name);
			
			age = m_age;  //栈区 
		}	
		
		~Person(){
			cout<<"析构函数调用\n";
			if(name != NULL){
				free(name);
				name = NULL; 
			}
		}
		/*浅拷贝： 
			仅简单的拷贝值； 
			对于类中有申请空间的变量在调用拷贝构造时未申请空间；
			导致调用析构函数时；
			对应堆区空间被释放，从而拷贝的变量找不到相应的数据 ；
		*/ 
		
		
		//需要自己提供拷贝构造函数，原因：默认的的拷贝构造 函数会释放堆空间两次，导致崩掉 
		Person(const Person &p){     //深拷贝 
			age = p.age;
			name = (char *)malloc(strlen(p.name)+1);
			strcpy(name,p.name);
			//创建了一块新空间 不会在p1析构时 因为堆区地址相同导致p1被free时 p2的name无地址而产生的bug 
		}
};

void test1(){
	Person p1("God",10);
	Person p2(p1);//调用默认拷贝构造  
	
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
