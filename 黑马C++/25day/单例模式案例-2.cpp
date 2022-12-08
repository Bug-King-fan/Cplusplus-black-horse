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
	//		cout<<"使用次数:"<<m_cont<<endl;
		}
		
		void getcont(){
			cout<<"使用次数："<<m_cont<<endl;
		}
}; 

printer * printer::singleprinter = new printer;


void test1(){
	//拿到打印机
	printer * p=printer::get();
	p->printtext("1报告"); 
	p->printtext("2报告"); 
	p->printtext("3报告"); 
	p->printtext("4报告"); 
	p->printtext("5报告"); 
}

void test2(){
	printer * p2=printer::get();
	p2->printtext("1报告"); 
	p2->printtext("2报告"); 
	p2->printtext("3报告"); 
	p2->printtext("4报告"); 
	p2->printtext("5报告"); 
	
	p2->getcont();
}

int main(){
	
	test2();
	
	system("pause");
	return 0;
} 
