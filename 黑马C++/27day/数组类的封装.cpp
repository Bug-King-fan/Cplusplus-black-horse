#include<iostream>
#include"Myarray.h"

void test1(){
	// ������������
	Myarray * array = new Myarray(30);
	
	Myarray *array2 = array; //ֵ���� δ���ÿ������� 
	
	
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
