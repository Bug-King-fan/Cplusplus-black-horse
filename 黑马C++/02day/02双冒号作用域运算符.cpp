#include<iostream>
using namespace std;

int atk = 200;
void test01(){
	int atk = 100;
	
	cout<<" ������Ϊ :    "<<atk<<endl;
	//˫ð�� �����������  ::ȫ��������   na::atk  na�������µ�atkֵ 
	cout<<" ȫ�ֹ�����Ϊ��"<< ::atk <<endl;
}

int main(){
	
	test01();
	system("pause");
	return 0;
} 
