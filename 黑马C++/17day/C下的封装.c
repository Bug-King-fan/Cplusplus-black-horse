#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Person{
	char name[64];
//	void name();  C�ṹ�岻�ܼӺ��� 
	int age;
};

void PersonEat(struct Person *p){
	printf("%s�ڳԷ���\n",p->name);
}
void test1(){
	struct Person p1;
	strcpy(p1.name,"��������");
	p1.age = 20;
	PersonEat(&p1);
}

struct Dog{
	char name[64];
	int age;
};

void DogEat(struct Dog *dog){
	printf("%s���ڳԹ�����\n",dog->name);
}
void test2(){
	struct Dog d;
	strcpy(d.name,"����");
	DogEat(&d);
	
	struct Person p1;
	strcpy(p1.name,"��ǿ");  //��ǿ�Թ��� 
	DogEat(&p1);
	//C���Է�װȱ�ݣ� 
	//C������Ϊ�����Էֿ�����
	//���C����û���ϸ������ת��
	//C���Բ��ϸ�ƥ������ 
	
}

int main(){
	
	test1();
	test2(); 
	
	system("pause");
	return 0;
}
