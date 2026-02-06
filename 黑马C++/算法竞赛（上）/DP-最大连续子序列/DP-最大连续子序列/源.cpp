#include<iostream>
using namespace std;
const int MAX = 30;
int main() {
	int n;
	cin >> n;
	int nums[MAX];
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int ans = -21000000;
	int sum = 0;
	for (int i = 0; i < n; i++) {  //考虑全负
		ans = max(nums[i], ans);
	}
	if (ans <= 0) {
		cout << ans << endl;
	}
	else {
		ans = 0;
		for (int i = 0; i < n; i++) {
			if ((sum + nums[i]) < 0) {
				sum = 0;
			}
			else {
				sum += nums[i];
			}
			ans = max(ans, sum);
		}
		cout << ans << endl;
	}
	return 0;
}
// 6 -2 11 -4 13 -5 -2     20
// 6 -11 -2 -5 -7 -9 -8    -2