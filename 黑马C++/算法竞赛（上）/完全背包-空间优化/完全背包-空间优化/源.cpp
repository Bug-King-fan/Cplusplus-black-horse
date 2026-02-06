#include<iostream>
using namespace std;
int dp[220], w[110], c[110];
int main() {
	int N, V;
	cin >> N >> V;
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> c[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = c[i]; j <= V; j++) {
			dp[j] = max(dp[j - c[i]] + w[i], dp[j]);
		}
	}
	cout << dp[V];
	return 0;
}