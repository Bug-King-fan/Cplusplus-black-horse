#include<iostream>
using namespace std;
//只能下走或右走
const int MAX = 40;
int dir[8][2] = { {1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1} };
bool d[MAX][MAX];
long long dp[MAX][MAX];
int main() {
	int n, m, cx, cy;
	cin >> n >> m >> cx >> cy;
	d[cx][cy] = true;
	for (int i = 0; i < 8; i++) {
		int tx = cx + dir[i][0];
		int ty = cy + dir[i][1];
		if (tx >= 0 && tx <= n && ty >= 0 && ty <= m) {
			d[tx][ty] = true;
		}
	}//标记不能走的点
	dp[0][0] = 1;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (!d[i][j]) {
				if (i != 0) {
					dp[i][j] += dp[i - 1][j];
				}
				if (j != 0) {
					dp[i][j] += dp[i][j - 1];
				}
			}
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}
//5 5 2 4  14