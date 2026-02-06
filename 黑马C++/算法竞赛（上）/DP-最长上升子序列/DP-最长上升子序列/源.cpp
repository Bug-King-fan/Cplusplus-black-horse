#include<iostream>
using namespace std;
const int MAX = 40;
int a[MAX];
int n;
int LIS() {
	int dp[MAX];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[i] > a[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	return ans;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int result = LIS();
	cout << result << endl;
	return 0;
}
//6 3 2 6 1 4 5