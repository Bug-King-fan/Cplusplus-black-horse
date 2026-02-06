#include<iostream>
using namespace std;
const int MAX = 110;
int main() {
	int n;
	cin >> n;
	//n封邮件错排
	long long dp[MAX];
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) * (i - 1);
	}
	cout << dp[n] << endl;
	return 0;
}
//5 44