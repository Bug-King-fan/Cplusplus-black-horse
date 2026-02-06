#include <iostream>
using namespace std;
const int N = 210;
int dp[N][7];
int main(){
	int n, k;
	cin >> n >> k;
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i && j <= k; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - j][j];
		}
	}
	cout << dp[n][k] << endl;
	return 0;
}
