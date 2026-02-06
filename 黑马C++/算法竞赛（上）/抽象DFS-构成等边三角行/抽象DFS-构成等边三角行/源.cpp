#include<iostream>
using namespace std;
const int MAX = 15;
bool flag; // 找没找到
bool select[MAX];
int n, len[MAX], sum;
void dfs(int p, int s, int b) { //p 第几个边 s长度和 b从那根木棍开始选
	if (flag) {
		return;
	}
	if (p == 3) {
		flag = true;
		return;
	}
	if (s == sum / 3) {  //当前木棍完成
		dfs(p + 1, 0, 0);
	}
	for (int i = 0; i < n; i++) {  //普通情况
		if (!select[i]) {
			select[i] = true;
			dfs(p, s + len[i], i + 1); //强制只能从下一根木棍找，避免12和21重复
			select[i] = false; //取消标记 找全情况
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> len[i];
		sum += len[i];
	}

	if ((sum % 3) != 0) {
		cout << "NO" << endl;
	}
	else {
		dfs(0, 0, 0);
		if (flag) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
//5 1 2 3 4 5  yes   4 1 1 1 1  no