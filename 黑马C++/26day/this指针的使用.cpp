#include<iostream>
using namespace std;

//this可以解决命名冲突 

class person{
	public:
		person(int age){//编译器加入 person *this 
			this->age=age;
		}
		
		int age;
		
		void cmp(const person &p){
			if(this->age == p.age){ //不写this指针也可以区分，编译器会自己加上 
				cout<<"age相等\n";
			}
			else{
				cout<<"age不相等\n";
			}
		} 
		
		void plus(person &p){
			this->age += p.age;
		}
		/*
		person& plus(person &p){
			this->age += p.age;
			return *this; //*this 指向对象本体   this是指针 
		}
		*/
};
void test1(){
	person p1(10);
	cout<<"p1的年龄:"<<p1.age<<endl;
	person p2(10);
	p1.cmp(p2);
	
	p1.plus(p2);
	cout<<"p1的年龄:"<<p1.age<<endl;  //20
	
	/*
	p1.plus(p2).plus(p2);   //链式编程 
	cout<<"p1的年龄:"<<p1.age<<endl;    // 30  
	*/
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
