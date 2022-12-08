#include<iostream>
#include<string>
using namespace std;
//建议将所有的成员变量都设为私有！！！ 
class Person{
	public:
		
		void set_age(int m_age){
			if( m_age < 0 || m_age >100 ){
				cout<<"你这个老妖精\n";
				return ;
			}
			age = m_age; 
		}
		
		void set_name(string m_name){
			name = m_name; 
		}
		
		void set_lover(string m_lover){
			lover = m_lover;
		}
		
		int get_age(){
			return age;
		} 
		
		string get_name(){
			return name;
		}
		
		string get_lover(){
			return lover;
		}
	
	private:
		int age = 0;
		string name;
		string lover;
		
};

void test1(){
	Person p1;
	//未初始化，且成员变量设为私有，只能通过public的成员函数去更改或赋值 
	p1.set_lover("你猜");
	p1.set_name("Frank");
	
	cout<<p1.get_age()<<endl;	
	cout<<p1.get_name()<<endl;
	cout<<p1.get_lover()<<endl;
	
	cout<<"age 赋值!"<<endl;
	p1.set_age(120);
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
