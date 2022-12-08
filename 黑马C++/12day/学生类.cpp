#include<iostream>
#include<string> 
using namespace std;
class Student{
	public:
		string name;
		int id;
		
		void setname(string out_name){
			name=out_name;
		}
		void setid(int out_id){
			id=out_id;
		}
		void show(){
			cout<<"name: "<<name<<endl;
			cout<<"id:   "<<id<<endl;
		}
};
void test1(){
	Student stu1;
	stu1.setname("Frank");
	stu1.setid(1);
	cout<<"name: "<<stu1.name<<"id: "<<stu1.id<<endl;
	cout<<endl;
	stu1.show();
}

//通过成员函数打印信息 

int main(){
	
	test1();
	
	system("pause");
	return 0;
}

