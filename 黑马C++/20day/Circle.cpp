#include"Circle.h"

void Circle::set_R(int r){
	r = R;
}

int Circle::get_R(){
	return R;
}

void Circle::set_Center(Point p){
	Center = p;
}

Point Circle::get_Center(){
	return Center;
}

		
//���ó�Ա�����жϹ�ϵ
void Circle::isincircle(Point &p){
	int distance = (Center.get_x() - p.get_x()) * (Center.get_x() - p.get_x()) + (Center.get_y() - p.get_y()) * (Center.get_y() - p.get_y());
	int rdistance = R * R;
		
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
 
