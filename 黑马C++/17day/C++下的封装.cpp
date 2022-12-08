#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct Person{
	//struct的默认权限是  public 

	char name[64];
	string name2;	
	int age;
	
	void PersonEat(){
		cout<<name<<"吃饭！"<<endl;
	} 
};


struct Dog{
	char name[64];
	int age;
	void DogEat(){
		cout<<name<<"吃狗粮"<<endl;
	}
};

void test1(){
	Person p1;
	strcpy(p1.name,"大强");
	p1.name2="hello";
	cout<<p1.name2<<endl;
	p1.PersonEat();
//	p1.DogEat();  //[Error] 'struct Person' has no member named 'DogEat'
}

//C++中的封装，严格类型转化检测 ，让属性和行为匹配绑定在一起
//属性和行为作为一个整体表示生活中的事物
//控制权限  public    protected    private   类中体现


class Animal{
	//如果不声明权限默认私有（private）

	int age; 

	void eat(){
		age = 18;
	}; 

	public:

		int hight;
		
		void show_age_weight(){
			
			eat();
			set_weight();
			
			cout<<"age: "<<age<<endl;
			cout<<"weight: "<<weight<<endl;
		}
		
		void show_hight(){
			cout<<"hight: "<<hight<<endl;
		}	
		
	protected:

		int weight;

		void set_weight(){
			weight = 150 ;
		} 

};
//私有权限是 私有成员只能在类内部访问，类外不可访问 
//公共权限，在类内部和类外部都可访问
//保护权限, 在类内部可以访问 （当前类的子类也可以访问！），类外部不可以访问 

void test2(){
	Animal a1;

//	a1.eat(); [Error] 'void Animal::eat()' is private

	a1.hight = 100;  //公有权限外部可以访问或修改
	a1.show_hight();

//	a1.set_weight(); [Error] 'void Animal::set_weight()' is protected

	a1.show_age_weight();
}
 
int main(){
	
	test1();
	test2();
	
	system("pause");
	return 0;
}
