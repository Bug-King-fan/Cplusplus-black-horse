#include<iostream>
using namespace std;
int dp[110], w[21], c[21]; //w 价值 c 体积  对体积进行dp
int main() {
	int N, V;
	cin >> N >> V;
	for (int i = 0; i < N; i++) {
		cin >> w[i] >> c[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = V; j >= c[i]; j--) {  //一定要倒着考虑体积，确保j-c[i]是之前一次的值
										  // 还没有被更新
			dp[j] = max(dp[j - c[i]] + w[i], dp[j]);
		}
	}
	cout << dp[V] << endl;
	return 0;
}