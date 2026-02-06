#include<iostream>
using namespace std;
int n, k, sum, ans;
const int MAX = 40;
int nums[MAX];
void dfs(int i, int cnt, int s) { 
	if (i == n) { //搜索完所有的数
		if (cnt == k && sum == s) {
			ans++;
		}
		return;
	}
	dfs(i + 1, cnt, s);//不选
	dfs(i + 1, cnt + 1, s + nums[i]);//选
}
int main() {
	cin >> n >> k >> sum;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	dfs(0, 0, 0);
	cout << ans << endl;
	return 0;
}
//5 3 9   1 2 3 4 5  2 //补充  4+5 和5+4为同一种情况