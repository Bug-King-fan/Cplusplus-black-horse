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
	cout<<"年龄："<<p->age<<endl; 
} 


void allocatMemory(Person **p){  //分配内存空间 
	//**p 具体的Person对象
	//*p  对象的指针
	//p   指针的指针 
	
	*p=(Person *)malloc(sizeof(Person));
	
	(*p)->age = 100;
}

void test1(){
	Person *p = NULL;
	
	allocatMemory(&p);
	cout<<"年龄："<<p->age<<endl; 
}


//利用指针引用分配内存空间
void allocatMemory2(Person * &p){
	p = (Person*)malloc(sizeof(Person));
	p->age = 1000;
} 
void test2(){
	Person * p = NULL;
	allocatMemory2(p);
	cout<<"年龄："<<p->age<<endl; 
}
int main(){
	
	test3();
	
	system("pause");
	return 0;
}
