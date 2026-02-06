#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int dp[110][110]{};
	int lena = a.size();
	int lenb = b.size();
	for (int i = 1; i <= lena; i++) {
		dp[i][0] = i;
	}for (int i = 1; i <= lenb; i++) {
		dp[0][i] = i;
	}
	for (int i = 1; i <= lena; i++) {
		for (int j = 1; j <= lenb; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
			}
		}
	}
	cout << dp[lena][lenb] << endl;
	return 0;
}
//采用对齐的方式 查看此步要如何操作
//类似最长公共子序列（LCS）看匹配了多少位
/*
S  A B C F -
T  D B - F G
若s[i]和s[j]匹配则结果为f(i-1,j-1) 即不需要操作
若s[i]和s[j]不匹配则需要修改当前值 结果为f(i-1,j-1)+1
若S的前i位与T的前j-1位对齐后，当前需要进行添加操作 结果为f(i,j-1)+1
若S的前i-1位与T的前j位对齐后，当前需要进行删除操作 结果为f(i-1,j)+1
*/
//abcd acef  3