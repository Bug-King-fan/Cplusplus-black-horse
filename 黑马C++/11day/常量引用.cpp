#include<iostream>
using namespace std;

void test1(){
	//int &ref = 10;  //���ò��Ϸ����ڴ棬������
	const int &ref = 10;//����const�󣬱���������ʽΪ��int temp =10;
													//   const int &ref = temp;
	//ref = 10;//���Ϸ�
	//����Ϸ��ڴ�Ϳ�ͨ��ָ���ƹ��������ĵ� 
	int *p =(int *)&ref; 
	*p = 1000;
	cout<<ref<<endl;  //1000
}

//��������ʹ�ó���ͨ�����������β�
void showValue(const int &val){
	//val += 100;//���ֻ����ʾ���ݶ������޸����ݣ���ô����const��������β� 
	cout<<"val= "<<val<<endl;
} 
void test2(){
	int a=10;
	showValue(a);
}

int main(){
	
	test2(); 
	
	system("pause");
	return 0;
} 
