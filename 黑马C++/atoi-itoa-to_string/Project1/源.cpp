#pragma warning(disable:4996)  //����itoa �� atoi�ᱨ��
#include<iostream>
#include<algorithm>
#include<string>   //to_string (C++11)
#include<cstring>
#include <typeinfo>  //itoa  atoi

const int Max = 1000;
using namespace std;
int main() {
	int a = 1534;
	char result[Max];
	itoa(a, result, 10);   //itoa(int nums,char *string,int radix)  
	//����ת�����ַ����� radix��2-32��ת��Ϊ���ٽ�����
	for (int i = 0; i < strlen(result); i++) {
		cout << result[i];
	}
	cout << "    ";
	cout << typeid(result).name() << endl;    //char[1000]

	cout << "*********************************************************" << endl;

	char num[Max]{ "1024" };
	int nums;
	nums = atoi(num);    //atoi(char *string)   ���ַ���ת��Ϊ����
	cout << nums << "    ";
	cout << typeid(nums).name() << endl;    // int


	cout << "*********************************************************" << endl;

	int number = 999;
	string Ss = to_string(number);   // to_string()   ��ֵ->�ַ���
	cout << Ss << "    ";
	cout << typeid(Ss).name() << endl;  //string
	/*
		to_string (int val);
		to_string (long val);
		to_string (long long val);
		to_string (unsigned val);
		to_string (unsigned long val);
		to_string (unsigned long long val);
		to_string (float val);
		to_string (double val);
		to_string (long double val);
	*/

	return 0;
}