#include<iostream>
using namespace std;
#include"game1.h"
#include"game2.h"
//namespace �����ռ� ��Ҫ���� ������ͻ������ 

void test1(){
	
	LOL::goAtk();
	
	cout<<"**********************************"<<endl;
	
	KING::goAtk();
	
} 

//1�������ռ��¿��Էź������������ṹ�塢���
namespace A{
	void func();
	int m_A=20;
	struct Person{
		
	};
	class student{
		
	};
	
	namespace B{
		int m_A=10;
	} 
	
} 
//2�������ռ���붨����ȫ����������
//3�������ռ����Ƕ�������ռ�
void test2(){
	
	cout<<"������A�µ�m_A: "<< A::m_A <<endl;
	cout<<"������B�µ�m_A: "<< A::B::m_A <<endl;
	

} 
//4�������ռ��ǿ��ŵģ�������ʱ��ԭ�������ռ��������  
namespace A {    //��A�����ռ������������Ŀռ�A���кϲ� 
	int m_B=1000; 
} 

void test3(){
	
	cout<<"A::�µ�m_AΪ:  "<< A::m_A <<endl;
	cout<<"A::�µ�m_BΪ:  "<< A::m_B <<endl;
	

} 
//5�������ռ��������������
namespace{
	int m_C = 0;
	int m_D = 0;   
	//д���������ռ䣬�൱��д�� static int m_C=0 �� static int m_D=0 
	//��̬���������ڵ�ǰ�ļ�ʹ�� 
}
//6�������ռ���������
namespace veryLongName{
	int m_A = 0;	
} 
void test4(){
	//�����
	namespace veryShortName = veryLongName;
	cout<< "veryLongName::m_A  : "  <<veryLongName::m_A <<endl;
	cout<< "veryShortName::m_A : "  <<veryShortName::m_A<<endl;
}

namespace Outer_layer{  
	int W=10;
	class T{
			public:
				int damage;
	};
	namespace Inner_layer{
		int W=20;
	}
}

int main(){
	
	test1();
	cout<<endl<<endl;
	test2();
	cout<<endl<<endl;
	test3();
	cout<<endl<<endl;
	test4();
	
	system("pause");
}

