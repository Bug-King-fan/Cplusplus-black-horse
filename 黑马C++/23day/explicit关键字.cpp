#include<iostream>
using namespace std;

class MyString{
	public:
		MyString(const char *str){
			
		}
		 explicit MyString(int a){
			msize=a;
		//����explicit�ؼ��֣���ֹ����ʽ����ת�� 
		}
		
		char * mStr; 
		int msize;
};
void test1(){
	MyString str = "abc";
	MyString str2(10);
//	MyString str3 = 10;  //����ȷ �ַ��� or ���� ����ʽ����ת���� 
}

int main(){
	
	test1(); 
	
	system("pause");
	return 0;	
}
