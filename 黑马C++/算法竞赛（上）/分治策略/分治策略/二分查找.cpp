#include"head.h"
void test1() {
	int a[10]{ 1,2,3,4,5,6,7,8,9,10 };
	int l = 0, r = 9;
	int x;
	cout << "请输入一个数字0~9:" << endl;
	cin >> x;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			cout << "The index is : " << m << endl;
			return;
		}
		else if (a[m] > x) {
			r = m;
		}
		else {
			l = m;
		}
	}
	cout << "不存在！" << endl;
	return;
}