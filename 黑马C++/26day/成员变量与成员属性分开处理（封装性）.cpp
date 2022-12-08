#include<iostream>
using namespace std;

class person{
	public:
		int m_A; //非静态成员变量，属于对象身上  sizeof = 4
		void func(){};    //非静态成员函数，不属于对象身上 所以sizeof = 4 没变， 
		static int m_B; //静态成员变量，不属于对象身上 所以sizeof = 4 
		static void func2(){};//静态成员函数，不属于对象身上 所以sizeof = 4 
		
		double m_C; //sizeof = 16   (向字节大的对齐，隐式类型转化，m_A转化为8)
}; 
//！！！  只有非静态成员变量属于对象身上   ！！！ 

void test1(){
	cout<<"sizeof(person) = "<<sizeof(person)<<endl;
	//空类大小为1 每一个实例的对象都有一个独一无二的地址，内部有一个char指针维护这个地	  
}

void test2(){
	//this指针指向被调用的成员函数所属的对象 
	person p1;
	p1.func();//编译器会加入一个this指针  person *this 
	//相当于 p1.func(&p1); 传了一个p1的地址 让this指针指向对象地址 
	
	person p2;
	p2.func();
}
int main(){
	
	test1();
	
	system("pause");
	return 0;
} 
