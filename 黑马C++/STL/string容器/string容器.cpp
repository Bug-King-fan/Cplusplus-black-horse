#include<iostream>
using namespace std;
int main(){
	/*
	(1)���� 
		string()
		string(const string& str)
		string(const char *s)
		string(int n,char c) ʹ��n���ַ�c��ʼ��
	(2)��ֵ
		string s=(const char *s)
		string s=(const string &s)
		string s=(char c)
		string s.assign=(const char *s)
		string s.assign=(const char *s,int n) ��s��ǰn���ַ���s
		string s.assign=(const string &s)
		string s.assign=(int n,char c)��n���ַ�c��s
		string s.assign=(const string &s,int start,int n)��s��start��ʼ n���ַ�����s
	(3)string�Ĵ�ȡ
		str[i]
		str.at(i) �±�Խ�粻���жϳ�����У�Ҳ�����
	(4)ƴ�Ӳ���
		+= 
		str.append(const char *s)��sƴ�ӵ�str����
		str.append(const string &s,int pos,int n)��s��pos��ʼ��n���ַ��ӵ�str����
		str.append(int n,char c)��n��c�ӵ�str����
	(5)string���Һ��滻  ���ҷ��صĵ�һ���ַ���λ�� 
		int index = s.find(string/char str,int pos=0) ��pos��ʼ��str��һ�γ��ֵ�λ��
		int index = s.find(const char *s,int pos,int n)��pos��ʼ����s��ǰn���ַ���һ�γ���λ��
		rfind(ͬfind) rfind���һ�γ��ֵ�λ�ã������ҿ�ʼ����
		ע�⣺
			rfind��
				string s="abcdefg";
				int pos0 = s.find("bc"); //1
				int pos1 = s.rfind("bc");  //1
 		
 		str.replace(int pos,int n,const string *&str) �滻��pos��ʼ��n���ַ���Ϊstr
		string s="hellmo";
		s.repalce(1,3,"1111")  //h1111mo		   
	(6)string�ıȽ� 
		compare
		int compare(str)  > retrun 1
						  < return -1
						==  retrun 0
		str1="abc";str2="adc";
		cout<<str1.(str2)<<endl;
	(7)string�Ӵ�
		string substr(int pos=0,int n=npos) ����pos��ʼ��n���ַ���ɵ��ַ��� 
		
	(8)����ɾ��
		str.insert(int pos,s)��posλ�ò���s(�ַ���)
		str.insert(int pos,int n,char c)��posλ�ò���n���ַ�c
		str.erase(int pos,int n)ɾ����pos��ʼ��n���ַ� 
		string s="hello";
		s.insert(1,"2222"); //h2222ello
		s.erase(1,4); //hello
	(9)const char * ��string��ת��   string ������ʽ����ת�� 
		string s="abcde";
		const char *s2=s.c_str();
		string s3=(s2); 
	
	(10)
	��string��չ�ռ�ʱ�����·����ַ 
	
	(11)string�Ĵ�Сдת��
		str.toupper(); //������ĸ��д 
		str.tolower(); //������ĸСд 
	*/
	return 0;
}












































