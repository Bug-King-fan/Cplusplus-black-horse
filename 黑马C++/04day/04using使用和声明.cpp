#include<iostream>
using namespace std;

namespace King{
	int sunwukongID=10;
}

void test1(){
	int sunwukongID=20;
	// using ����   ע���������ԣ� 
	// д��using��������һ�д���˵�����Ժ󿴵��� sunwukongID ����King�µ�
	// using King::sunwukongID;
	// ���Ǳ��������оͽ�ԭ�� �����ֶ����ԡ� 
	
	cout<<sunwukongID<<endl;  //20
}

//using����ָ��
namespace LOL{
	int sunwukongID=30;
}
 void test2(){
 	//int sunwukongID=20;
 	//using����ָ��
	using namespace King;  //�򿪷���   King���� 
	using namespace LOL;   //�򿪷���   LOL ���� 
	//����򿪶�����䣬ҲҪ������������� 
	cout<<LOL::sunwukongID<<endl;    //30
	cout<<King::sunwukongID<<endl;   //10
 }

int main(){
	
	test1();
	test2();
	
	system("pause");
	return 0;
}
