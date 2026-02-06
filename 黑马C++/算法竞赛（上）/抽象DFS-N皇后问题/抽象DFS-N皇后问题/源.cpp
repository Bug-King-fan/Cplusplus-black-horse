#include<iostream>
using namespace std;
typedef long long int;
int  N, ans;
const int MAX = 20;

bool col[MAX], x1[MAX], x2[MAX];//列 两条对角线
bool check(int r, int i) {
	return !col[i] && !x1[r + i] && !x2[r - i + N];
}

void dfs(int r) { //针对每行进行选择
	if (r == N) {
		ans++;
		return;
	}
	for (int i = 0; i < N; i++) {
		if (check(r, i)) { //不在同一行/列/对角线
			col[i] = x1[r + i] = x2[r - i + N] = true;
			dfs(r + 1); //下一行
			col[i] = x1[r + i] = x2[r - i + N] = false;
		}
	}
//	return;
}

int main() {
	cin >> N;  //经典以8皇后问题为例
	dfs(0);
	cout << ans << endl;
	return 0;
}
//8 92