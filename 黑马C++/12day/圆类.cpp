#include<iostream>
using namespace std;
const double pi = 3.14; 

//1、设计一个类求圆周长 
// C=2*pi*r

class Circle{
	public:  //公共权限 
		
		int R;  //半径   成员属性 
		
		//在类里的函数叫成员函数
		double getC(){
			return 2*pi*R;	
		}
		
		//设置半径的成员方法 
		void setR(int m){
			R=m;
		}
		
};
void test1(){
	//通过类创建一个圆
	Circle c1;
	c1.R=5;
	double C=c1.getC();
	cout<<"C= "<<C<<endl;
}

void test2(){
	//通过成员函数 间接 设置成员属性 
	Circle c1;
	c1.setR(5);
	double C=c1.getC();
	cout<<"C= "<<C<<endl;
}

int main(){
	
	test2();
	
	system("pause");
	return 0;
}
