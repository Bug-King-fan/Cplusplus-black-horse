#include<iostream>
using namespace std;
const double pi = 3.14; 

//1�����һ������Բ�ܳ� 
// C=2*pi*r

class Circle{
	public:  //����Ȩ�� 
		
		int R;  //�뾶   ��Ա���� 
		
		//������ĺ����г�Ա����
		double getC(){
			return 2*pi*R;	
		}
		
		//���ð뾶�ĳ�Ա���� 
		void setR(int m){
			R=m;
		}
		
};
void test1(){
	//ͨ���ഴ��һ��Բ
	Circle c1;
	c1.R=5;
	double C=c1.getC();
	cout<<"C= "<<C<<endl;
}

void test2(){
	//ͨ����Ա���� ��� ���ó�Ա���� 
	Circle c1;
	c1.setR(5);
	double C=c1.getC();
	cout<<"C= "<<C<<endl;
}

int main(){
	
	test2();
	
	system("pause");
	return 0;
}
