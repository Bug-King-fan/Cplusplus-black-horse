#include<iostream>
using namespace std;
int dp[220]{}, w[110], c[110], n[110]; //n数组存放第i号物品有几个
int main() {
	int N, V;
	cin >> N >> V;
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> c[i] >> n[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = V; j >= 0; j--) {
			for (int k = 0; k <= n[i]; k++) {
				if (j >= k * c[i]) {
					dp[j] = max(dp[j], dp[j - k * c[i]] + k * w[i]);
					//max中一定是dp[i][j] 同标号物品放多个要用自身和新的取max
				}
			}
		}
	}
	cout << dp[V] << endl;
	return 0;
}