#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Circle{
	
	private:
	
		int R; //�뾶 
		Point Center; //Բ�� 
	
	public:
	
		void set_R(int r);
		int get_R();
		void set_Center(Point p);
		Point get_Center();
		//���ó�Ա�����жϹ�ϵ	
		void isincircle(Point &p);

};
