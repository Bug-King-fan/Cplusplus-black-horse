#include<iostream>
using namespace std;
int dp[20][220]{}, w[110], c[110], n[110]; //n数组存放第i号物品有几个
int main() {
	int N, V;
	cin >> N >> V;
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> c[i] >> n[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= V; j++) {
			for (int k = 0; k <= n[i]; k++) {
				if (j >= k * c[i]) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j - k * c[i]] + k * w[i]);
					//max中一定是dp[i][j] 同标号物品放多个要用自身和新的取max
				}
				//不需要else k=0 dp[i][j]=max(dp[i-1][j],dp[i][j]); 相当于else部分
			}
		}
	}
	cout << dp[N][V] << endl;
	return 0;
}
/*
5 10
2 1 2
3 5 3
2 5 1
3 4 2
4 3 8
14
*/
//将所有物品拆分成N个总物品
//按照01背包进行求解 dp[i][v]=max(dp[i][v],dp[i-1][v-k*ci]+k*wi)  0<=k<=N
