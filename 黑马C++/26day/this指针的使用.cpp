#include<iostream>
using namespace std;

//this���Խ��������ͻ 

class person{
	public:
		person(int age){//���������� person *this 
			this->age=age;
		}
		
		int age;
		
		void cmp(const person &p){
			if(this->age == p.age){ //��дthisָ��Ҳ�������֣����������Լ����� 
				cout<<"age���\n";
			}
			else{
				cout<<"age�����\n";
			}
		} 
		
		void plus(person &p){
			this->age += p.age;
		}
		/*
		person& plus(person &p){
			this->age += p.age;
			return *this; //*this ָ�������   this��ָ�� 
		}
		*/
};
void test1(){
	person p1(10);
	cout<<"p1������:"<<p1.age<<endl;
	person p2(10);
	p1.cmp(p2);
	
	p1.plus(p2);
	cout<<"p1������:"<<p1.age<<endl;  //20
	
	/*
	p1.plus(p2).plus(p2);   //��ʽ��� 
	cout<<"p1������:"<<p1.age<<endl;    // 30  
	*/
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
