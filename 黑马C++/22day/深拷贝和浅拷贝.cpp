#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class Person{
	public:
		char  *name;
		int age;
		
		Person(){
			cout<<"�޲ι���\n";
		}
		Person(char *m_name,int m_age){
			name = (char*)malloc(strlen(name) + 1);  //���ٵ����� 
			strcpy(name,m_name);
			
			age = m_age;  //ջ�� 
		}	
		
		~Person(){
			cout<<"������������\n";
			if(name != NULL){
				free(name);
				name = NULL; 
			}
		}
		/*ǳ������ 
			���򵥵Ŀ���ֵ�� 
			��������������ռ�ı����ڵ��ÿ�������ʱδ����ռ䣻
			���µ�����������ʱ��
			��Ӧ�����ռ䱻�ͷţ��Ӷ������ı����Ҳ�����Ӧ������ ��
		*/ 
		
		
		//��Ҫ�Լ��ṩ�������캯����ԭ��Ĭ�ϵĵĿ������� �������ͷŶѿռ����Σ����±��� 
		Person(const Person &p){     //��� 
			age = p.age;
			name = (char *)malloc(strlen(p.name)+1);
			strcpy(name,p.name);
			//������һ���¿ռ� ������p1����ʱ ��Ϊ������ַ��ͬ����p1��freeʱ p2��name�޵�ַ��������bug 
		}
};

void test1(){
	Person p1("God",10);
	Person p2(p1);//����Ĭ�Ͽ�������  
	
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
