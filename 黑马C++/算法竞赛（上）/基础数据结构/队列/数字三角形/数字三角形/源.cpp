#include<iostream>
using namespace std;
const int MAX = 102;
int main() {
	int n;
	cin >> n;
	int scoue[MAX][MAX];
	int result[MAX][MAX];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> scoue[i][j];
		}
	}
	result[1][1] = scoue[1][1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) {
				result[i][j] = result[i - 1][j] + scoue[i][j];
			}
			else if (i == j) {
				result[i][j] = result[i - 1][j - 1] + scoue[i][j];
			}
			else {
				result[i][j] = max(result[i - 1][j - 1], result[i - 1][j]) + scoue[i][j];
			}
		}
	}
	if (n % 2 == 0) {
		cout << max(result[n][n / 2], result[n][(n / 2) + 1]) << endl;
	}
	else {
		cout << result[n][(n / 2) + 1] << endl;
	}
	return 0;
}