#include<iostream>
using namespace std;
const int MAX = 40;
char mat[MAX][MAX];
int n, m;
bool row[MAX], col[MAX];
void dfs(int x, int y) {
	mat[x][y] = '0';
	if (!row[x]) {
		row[x] = true;
		for (int i = 0; i < m; i++) {
			if (mat[x][i] == '1') {
				dfs(x, i);
			}
		}
	}
	if (!col[y]) {
		col[y] = true;
		for (int i = 0; i < n; i++) {
			if (mat[i][y] == '1') {
				dfs(i, y);
			}
		}
	}
}
int main() {
	cin >> n >> m;
	int ans = 0;
	for (int i = 0; i < n; i++) {
			cin >> mat[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mat[i][j] == '1') {
				ans++;
				dfs(i, j);
				}
			}
		}
	cout << ans << endl;
	return 0;
}
/*
5 5 
00010
00010
01001
10001
01000
        2
*/