#include<iostream>
#include<iostream>
using namespace std;

//1.全局函数做友元函数 
//2.成员函数做友元函数 
//3.类作为其他类的友元类 
class building{
	//让全局 可以访问我的私有   friend 关键字 
	
	//客厅   卧室 
	public:

		building(){
			this->m_sitroom = "客厅";
			this->m_bedroom = "卧室";
		}
		string m_sitroom; //客厅

	private:
		string m_bedroom;   
		friend void goodGay(building *buil);

};

void goodGay(building *buil){
	cout<<"好基友在访问"<<buil->m_sitroom<<endl;
	cout<<"好基友在访问"<<buil->m_bedroom <<endl;
}
//友元函数目的是访问私有成员 
void test1(){
	building * buil = new building ;
	goodGay(buil);
}



int main(){
	
	test1();
	
	system("pause");
	return 0;
}
