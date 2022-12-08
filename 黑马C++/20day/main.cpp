#include<iostream>
#include"Circle.h"
#include"Point.h" 
using namespace std;

//全局函数判断关系
void isInCircle(Circle &c,Point &p){
	//获取圆心和点的距离的平方
	int distance = (c.get_Center().get_x() - p.get_x()) * (c.get_Center().get_x() - p.get_x()) + (c.get_Center().get_y() - p.get_y()) * (c.get_Center().get_y() - p.get_y());
	int rdistance = c.get_R() * c.get_R();
	
	if(rdistance == distance){
		cout<<"上\n";
	}
	else if(rdistance > distance){
		cout<<"内\n"; 
	}
	else{
		cout<<"外\n";
	}
}


void test1(){
	//点 
	Point p1;
	p1.set_x(10);
	p1.set_y(10);
	
	//圆 
	Circle c1;
	Point center;
	center.set_x(10);
	center.set_y(0);
	c1.set_Center(center);
	c1.set_R(10);
	
	isInCircle(c1,p1);
	
	c1.isincircle(p1);
} 


int main(){
	
	test1();
	
	system("pause");
	return 0;
}
