#include<iostream>
using namespace std;

int atk = 200;
void test01(){
	int atk = 100;
	
	cout<<" 攻击力为 :    "<<atk<<endl;
	//双冒号 作用域运算符  ::全局作用域   na::atk  na作用于下的atk值 
	cout<<" 全局攻击力为："<< ::atk <<endl;
}

int main(){
	
	test01();
	system("pause");
	return 0;
} 
