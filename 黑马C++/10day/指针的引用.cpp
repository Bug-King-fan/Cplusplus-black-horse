#include<iostream>
#include<cstdlib>
using namespace std;

struct Person{
	int age;
}; 


void allocatMemory3(Person *&q){
	q = new Person ; 
	q->age=200;
}

void test3(){
	Person *p=NULL;
	allocatMemory3(p);
	cout<<"���䣺"<<p->age<<endl; 
} 


void allocatMemory(Person **p){  //�����ڴ�ռ� 
	//**p �����Person����
	//*p  �����ָ��
	//p   ָ���ָ�� 
	
	*p=(Person *)malloc(sizeof(Person));
	
	(*p)->age = 100;
}

void test1(){
	Person *p = NULL;
	
	allocatMemory(&p);
	cout<<"���䣺"<<p->age<<endl; 
}


//����ָ�����÷����ڴ�ռ�
void allocatMemory2(Person * &p){
	p = (Person*)malloc(sizeof(Person));
	p->age = 1000;
} 
void test2(){
	Person * p = NULL;
	allocatMemory2(p);
	cout<<"���䣺"<<p->age<<endl; 
}
int main(){
	
	test3();
	
	system("pause");
	return 0;
}
