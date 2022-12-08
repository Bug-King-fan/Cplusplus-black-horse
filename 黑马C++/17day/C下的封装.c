#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Person{
	char name[64];
//	void name();  C结构体不能加函数 
	int age;
};

void PersonEat(struct Person *p){
	printf("%s在吃饭！\n",p->name);
}
void test1(){
	struct Person p1;
	strcpy(p1.name,"德玛西亚");
	p1.age = 20;
	PersonEat(&p1);
}

struct Dog{
	char name[64];
	int age;
};

void DogEat(struct Dog *dog){
	printf("%s狗在吃狗粮！\n",dog->name);
}
void test2(){
	struct Dog d;
	strcpy(d.name,"旺仔");
	DogEat(&d);
	
	struct Person p1;
	strcpy(p1.name,"大强");  //大强吃狗粮 
	DogEat(&p1);
	//C语言封装缺陷： 
	//C语言行为和属性分开处理
	//其次C语言没有严格的类型转化
	//C语言不严格匹配类型 
	
}

int main(){
	
	test1();
	test2(); 
	
	system("pause");
	return 0;
}
