#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Person{
	private:
		Person(){
			cout<<"���캯������\n";
		}

		static string name;
		static int age;

//		static Person *denger;   // ??? ���� �� ����ռ��޷���ʼ�������ά���� 
		static string *denger;
	
	public:
		static void show(){
				cout<<"name:"<<name<<endl;
				cout<<"age: "<<age <<endl;
				cout<<"denger:"<<denger<<endl;
				cout<<"*denger:"<<*denger<<endl;
		}
//		static char *denger; 
}; 

int Person::age = 19;
string Person::name = "Frank";

//Person *Person::denger = new Person;
string *Person::denger = new string("nan");

// ���ѽ����  BUG:  [Error] expected constructor, destructor, or type conversion before '(' token   ԭ�����£� 
//char *Person::denger = new char[5];
//strcpy(Person::denger,"nan");  //������ C++�У�ȫ����ֻ����������ʼ�������� �������ڸ�ֵ�����㡢���ú����ȣ�����

void test1(){
//	strcpy(Person::denger,"nan"); //����ͨ������denger == "nan"   ǰ�������public�У������޷����ʲ���ֵ 
	Person::show();
}

void test2(){
	char p[4] = "nv";
	cout<<"p:"<<p<<endl;
}
int main(){
	cout<<"main����\n";
	test1();
	return 0;
}
