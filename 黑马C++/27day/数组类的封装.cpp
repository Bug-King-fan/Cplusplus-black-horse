#include<iostream>
#include"Myarray.h"

void test1(){
	// 堆区创建数组
	Myarray * array = new Myarray(30);
	
	Myarray *array2 = array; //值调用 未调用拷贝构造 
	
	
	for(int i=0 ; i<10 ;i++){
		array2->push_back(i);
	}

	for(int i=0;i<10;i++){
		cout<<array2->get_data(i)<<" ";
	}
	cout<<endl;
	
	array2->set_data(0,1000);
	cout<<array2->get_data(0)<<endl;

	delete array;

}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
