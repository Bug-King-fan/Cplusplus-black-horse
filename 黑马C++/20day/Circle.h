#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Circle{
	
	private:
	
		int R; //半径 
		Point Center; //圆心 
	
	public:
	
		void set_R(int r);
		int get_R();
		void set_Center(Point p);
		Point get_Center();
		//利用成员函数判断关系	
		void isincircle(Point &p);

};
