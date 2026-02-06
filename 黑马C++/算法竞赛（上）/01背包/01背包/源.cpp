#include<iostream>
using namespace std;
int main() {
	int c, n; //c : 背包容量 n: 物品个数
	cin >> c >> n;
	int v[20], w[20];  //v物品价值 w物品重量
	for (int i = 1; i <= n; i++) {
		cin >> v[i] >> w[i];  
	}
	int dp[200][200]; //存放物品价值

	for (int i = 0; i <= n; i++) {   //前0个物品价值为0  背包容积为0价值为0 
		for (int j = 0; j <= c; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			}
		}
	}

	for (int i = 1; i <= n; i++) {  //dp寻找
		//i表示放前i个物品
		for (int j = 1; j <= c; j++) {
			//j表示当前背包可用总容量
			if (j < w[i]) {  //不能装下当前物品
				dp[i][j] = dp[i - 1][j]; //于没有这件物品，装前i-1个物品最大价值相同
			}
			else {
				dp[i][j] = max(dp[i - 1][j], v[i] + dp[i - 1][j - w[i]]);
		//看装上后价值和没装作比较，j-w[i]为要装此物品，计算前i-1个物品，体积为j-w[i]的最大价值
			}
		}
	}

	cout << dp[n][c] << endl; //输出n个物品容量为c的最大价值

	return 0;
}