#include<iostream>
using namespace std;

class person{
	public:
		int m_Age ;
		void show(){  //隐藏加了一个person * this 但是下面语句没有用到this指针的对象  
			cout<<"person show"<<endl;
		}
		void showage(){  //调用了this指针，但是没有对象 所以程序崩了  
			/*所以加上
				if(this == NULL)
					return ;
				用于防止空指针 
			*/ 
			cout<<"m_Age:"<<m_Age<<endl;   // NULL->m_Age  无对象 
		}
}; 
void test1(){
	person *p = NULL;
	p->show();  //可以 
//	p->showage();  //挂了 
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
