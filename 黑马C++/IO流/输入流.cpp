/*
cin.get()不会接收回车，会留在缓存区，  而getline(cin,str)会接收，并丢弃后面的回车 
	cin.get(ch)
	ch = cin.get()//获取一个字符 
	char buf[256];
	cin.get(buf,256) //获取字符串 
	
	cin.ignore() //忽略当前缓存区的1个字符
	cin.ignore(n) //忽略当前缓存区的n个字符
	cin.ignore(n,'\n') //忽略当前缓存区的n个字符，但中途遇到 \n 就停止后面的忽略 
	
	cin.peek() //窥探缓存区当前字符
	
	cin.putback(char) //将字符重新放回缓存区第一个位置
	 
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	char buf2;
	char buf;
	string s;
//	getline(cin,s);
//	cout<<s<<endl;
//	cin.get(buf);
//	cout<<buf<<endl;
//	buf2=cin.peek();
	 
//	if((int)buf2 == 10){
//		cout<<"niubi"<<endl;
//	}
	//cin.ignore();
//	cin.get(buf2);
//	cout<<buf2;
//	buf = cin.get();
//	if(buf<='9'&&buf>='0'){
//		cin.putback(buf);
//		int number;
//		cin>>number;
//		cout<<number<<endl;
//	}
//	else{
//		cin.putback(buf);
//		cin>>s;
//		cout<<s<<endl;
//	}
//	cin>>s;
//	cout<<s<<endl;
//	cin.get(buf);
//	cout<<(int)buf<<endl; //32 space
//	cout<<"hello world"<<endl;
//	cout.flush();
//	cout.put('A').put('K')<<endl;
//	cout.write("hello frank",strlen("hello frank"))<<endl;
//	system("pause");
//	return 0;
}
