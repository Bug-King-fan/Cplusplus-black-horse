#include<iostream>
using namespace std;

class printer{
	private:
		printer(){
			m_cont = 0;
		}
		printer(const printer &p){
			
		}
		
		int m_cont;
		static printer * singleprinter;
	
	public:
		static printer *get(){
			return singleprinter;
		}
	
		void printtext(string test){
			cout<<test<<endl;
			m_cont++;
	//		cout<<"ʹ�ô���:"<<m_cont<<endl;
		}
		
		void getcont(){
			cout<<"ʹ�ô�����"<<m_cont<<endl;
		}
}; 

printer * printer::singleprinter = new printer;


void test1(){
	//�õ���ӡ��
	printer * p=printer::get();
	p->printtext("1����"); 
	p->printtext("2����"); 
	p->printtext("3����"); 
	p->printtext("4����"); 
	p->printtext("5����"); 
}

void test2(){
	printer * p2=printer::get();
	p2->printtext("1����"); 
	p2->printtext("2����"); 
	p2->printtext("3����"); 
	p2->printtext("4����"); 
	p2->printtext("5����"); 
	
	p2->getcont();
}

int main(){
	
	test2();
	
	system("pause");
	return 0;
} 
