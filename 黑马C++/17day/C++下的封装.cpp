#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct Person{
	//struct��Ĭ��Ȩ����  public 

	char name[64];
	string name2;	
	int age;
	
	void PersonEat(){
		cout<<name<<"�Է���"<<endl;
	} 
};


struct Dog{
	char name[64];
	int age;
	void DogEat(){
		cout<<name<<"�Թ���"<<endl;
	}
};

void test1(){
	Person p1;
	strcpy(p1.name,"��ǿ");
	p1.name2="hello";
	cout<<p1.name2<<endl;
	p1.PersonEat();
//	p1.DogEat();  //[Error] 'struct Person' has no member named 'DogEat'
}

//C++�еķ�װ���ϸ�����ת����� �������Ժ���Ϊƥ�����һ��
//���Ժ���Ϊ��Ϊһ�������ʾ�����е�����
//����Ȩ��  public    protected    private   ��������


class Animal{
	//���������Ȩ��Ĭ��˽�У�private��

	int age; 

	void eat(){
		age = 18;
	}; 

	public:

		int hight;
		
		void show_age_weight(){
			
			eat();
			set_weight();
			
			cout<<"age: "<<age<<endl;
			cout<<"weight: "<<weight<<endl;
		}
		
		void show_hight(){
			cout<<"hight: "<<hight<<endl;
		}	
		
	protected:

		int weight;

		void set_weight(){
			weight = 150 ;
		} 

};
//˽��Ȩ���� ˽�г�Աֻ�������ڲ����ʣ����ⲻ�ɷ��� 
//����Ȩ�ޣ������ڲ������ⲿ���ɷ���
//����Ȩ��, �����ڲ����Է��� ����ǰ�������Ҳ���Է��ʣ��������ⲿ�����Է��� 

void test2(){
	Animal a1;

//	a1.eat(); [Error] 'void Animal::eat()' is private

	a1.hight = 100;  //����Ȩ���ⲿ���Է��ʻ��޸�
	a1.show_hight();

//	a1.set_weight(); [Error] 'void Animal::set_weight()' is protected

	a1.show_age_weight();
}
 
int main(){
	
	test1();
	test2();
	
	system("pause");
	return 0;
}
