#include<iostream>
using namespace std;

class Person{
	public:
		Person(){
			cout<<"�޲ι��캯��\n";
		}
		Person(int a){
			cout<<"�вι��캯��\n";
		}
		Person(const Person &p){
			cout<<"�������캯��\n";
		}
		~Person(){
			cout<<"��������\n";
		}
		
		int age;	
};

//1����һ���Ѿ������õĶ�������ʼ��һ���¶��� 
void test1(){
	Person p1;
	p1.age = 10;
	Person p2(p1);
}

//2����ֵ���ݵķ�ʽ������������ֵ  //�����һ���Ŀռ俪�� 
//����������ò��� ���Խ�ʡ���ǲ��ֿ��� 
void dowork(Person p1){  // Person p1 = Person(p);
	
} 

void test2(){
	Person p;
	p.age = 10;
	dowork(p);
}
 
//3����ֵ��ʽ���ؾֲ�����
Person dowork2(){
	Person p5;
	return p5;
} 

void test3(){
	Person p4 = dowork2();
}
/*δ��Ԥ�ڵõ��������캯���ĵ���
����Ϊ��
Releaseģʽ�£� 
������������Ǳ������Ժ����ķ���ֵ�����Ż����������Ǵο������캯�� 
�Ż�����룺   ���õķ�ʽ����dowork2�� 
Person p;   ������Ĭ�Ϲ��캯�� 
 dowork2(p);
 void dowork(Person &p){  //���ô��� 
	Person p1;   //����Ĭ�Ϲ��캯�� 
}

Debugģʽ�£�
����ÿ������캯��   
*/
int main(){
	
//	test1();
//	test2();
	test3();
	
	system("pause");
	return 0;
}
