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

		
//利用成员函数判断关系
void Circle::isincircle(Point &p){
	int distance = (Center.get_x() - p.get_x()) * (Center.get_x() - p.get_x()) + (Center.get_y() - p.get_y()) * (Center.get_y() - p.get_y());
	int rdistance = R * R;
		
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
 
