#include<iostream>
#include"Circle.h"
#include"Point.h" 
using namespace std;

//ȫ�ֺ����жϹ�ϵ
void isInCircle(Circle &c,Point &p){
	//��ȡԲ�ĺ͵�ľ����ƽ��
	int distance = (c.get_Center().get_x() - p.get_x()) * (c.get_Center().get_x() - p.get_x()) + (c.get_Center().get_y() - p.get_y()) * (c.get_Center().get_y() - p.get_y());
	int rdistance = c.get_R() * c.get_R();
	
	if(rdistance == distance){
		cout<<"��\n";
	}
	else if(rdistance > distance){
		cout<<"��\n"; 
	}
	else{
		cout<<"��\n";
	}
}


void test1(){
	//�� 
	Point p1;
	p1.set_x(10);
	p1.set_y(10);
	
	//Բ 
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
