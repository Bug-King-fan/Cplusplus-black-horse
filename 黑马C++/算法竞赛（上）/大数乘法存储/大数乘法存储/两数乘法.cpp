#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*
int main() {
	long b, c, d;
	int a[100], i, j;
	char s[100];
	cout << "numbers:" << endl;
	cin >> s;
	cout << "乘数:" << endl;
	cin >> c;
	int n = strlen(s);
	d = 0; //进位
	for (i = 0, j = n - 1; i < n; i++, j--) {  //低->高存储
		b = (s[j] - 48) * c + d;
		a[i] = b % 10;
		d = b / 10;
	}
	while (d != 0) {
		a[n++] = d % 10;
		d /= 10;
	}
	for (i = n - 1; i >= 0; i--) {  //低->高位存放
		cout << a[i];
	}
	return 0;
}
*/