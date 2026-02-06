#include<iostream>
using namespace std;
const int MAX = 40;
int nums[MAX];
bool select[MAX];
int n, k, sum, ans;
void dfs(int cnt, int s) {
	if (s == sum && cnt == k) {
		ans++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!select[i]) {
			select[i] = true;
			dfs(cnt + 1, s + nums[i]);
			select[i] = false;
		}
	}
}
int main() {
	cin >> n >> k >> sum;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	dfs(0, 0);
	cout << ans << endl;
	return 0;
}
//5 3 9 1 2 3 4 5      12//有重复 4+5 和5+4是两种方案