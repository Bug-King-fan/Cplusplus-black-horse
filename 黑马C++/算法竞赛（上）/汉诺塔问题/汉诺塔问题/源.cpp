/*
* A B C三个基塔
* 64个盘子从A->B   64阶太大 按1s 1次 需5800亿年
* 列出移动过程
*/
#include<iostream>
using namespace std;
void hanoi(int n, char a, char b, char c) {
	if (n > 0) {
		hanoi(n - 1, a, c, b);
		cout << "移动盘子 " << n << "从 " << a << " 到 " << b << endl;
		hanoi(n - 1, c, b, a);
	}
}
int main() {
	int n; //n个盘子
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
	//移动次数 (2^n)-1
	return 0;
}