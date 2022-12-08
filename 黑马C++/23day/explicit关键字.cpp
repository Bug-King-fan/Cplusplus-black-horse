#include<iostream>
using namespace std;

class MyString{
	public:
		MyString(const char *str){
			
		}
		 explicit MyString(int a){
			msize=a;
		//加上explicit关键字，防止了隐式类型转化 
		}
		
		char * mStr; 
		int msize;
};
void test1(){
	MyString str = "abc";
	MyString str2(10);
//	MyString str3 = 10;  //不明确 字符串 or 长度 （隐式类型转化） 
}

int main(){
	
	test1(); 
	
	system("pause");
	return 0;	
}
