#include<iostream>
using namespace std;

class person{
	public:
		int m_Age ;
		void show(){  //���ؼ���һ��person * this �����������û���õ�thisָ��Ķ���  
			cout<<"person show"<<endl;
		}
		void showage(){  //������thisָ�룬����û�ж��� ���Գ������  
			/*���Լ���
				if(this == NULL)
					return ;
				���ڷ�ֹ��ָ�� 
			*/ 
			cout<<"m_Age:"<<m_Age<<endl;   // NULL->m_Age  �޶��� 
		}
}; 
void test1(){
	person *p = NULL;
	p->show();  //���� 
//	p->showage();  //���� 
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
