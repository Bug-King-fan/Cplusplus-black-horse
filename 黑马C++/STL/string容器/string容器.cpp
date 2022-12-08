#include<iostream>
using namespace std;
int main(){
	/*
	(1)构造 
		string()
		string(const string& str)
		string(const char *s)
		string(int n,char c) 使用n个字符c初始化
	(2)赋值
		string s=(const char *s)
		string s=(const string &s)
		string s=(char c)
		string s.assign=(const char *s)
		string s.assign=(const char *s,int n) 将s的前n个字符给s
		string s.assign=(const string &s)
		string s.assign=(int n,char c)将n个字符c给s
		string s.assign=(const string &s,int start,int n)将s从start开始 n个字符赋给s
	(3)string的存取
		str[i]
		str.at(i) 下表越界不会中断程序进行，也会输出
	(4)拼接操作
		+= 
		str.append(const char *s)将s拼接到str后面
		str.append(const string &s,int pos,int n)将s从pos开始的n个字符接到str后面
		str.append(int n,char c)将n个c接到str后面
	(5)string查找和替换  查找返回的第一个字符的位置 
		int index = s.find(string/char str,int pos=0) 从pos开始找str第一次出现的位置
		int index = s.find(const char *s,int pos,int n)从pos开始查找s的前n个字符第一次出现位置
		rfind(同find) rfind最后一次出现的位置，即从右开始查找
		注意：
			rfind：
				string s="abcdefg";
				int pos0 = s.find("bc"); //1
				int pos1 = s.rfind("bc");  //1
 		
 		str.replace(int pos,int n,const string *&str) 替换从pos开始的n个字符，为str
		string s="hellmo";
		s.repalce(1,3,"1111")  //h1111mo		   
	(6)string的比较 
		compare
		int compare(str)  > retrun 1
						  < return -1
						==  retrun 0
		str1="abc";str2="adc";
		cout<<str1.(str2)<<endl;
	(7)string子串
		string substr(int pos=0,int n=npos) 返回pos开始的n个字符组成的字符串 
		
	(8)插入删除
		str.insert(int pos,s)在pos位置插入s(字符串)
		str.insert(int pos,int n,char c)在pos位置插入n个字符c
		str.erase(int pos,int n)删除从pos开始的n个字符 
		string s="hello";
		s.insert(1,"2222"); //h2222ello
		s.erase(1,4); //hello
	(9)const char * 与string的转化   string 不能隐式类型转化 
		string s="abcde";
		const char *s2=s.c_str();
		string s3=(s2); 
	
	(10)
	当string扩展空间时会重新分配地址 
	
	(11)string的大小写转化
		str.toupper(); //所有字母大写 
		str.tolower(); //所有字母小写 
	*/
	return 0;
}












































