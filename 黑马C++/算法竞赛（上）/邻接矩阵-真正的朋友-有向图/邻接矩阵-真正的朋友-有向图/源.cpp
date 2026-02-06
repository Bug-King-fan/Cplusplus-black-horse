#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n;//n对关系
	cin >> n;
	int G[7][7]; // 6个人
	memset(G, 0, sizeof(G));
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		G[a][b] = 1;
	}
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j <= n; j++) {
			if (G[i][j] == 1 && G[j][i] == 1) {
				sum++;
			}
		}
		cout << "sum" << i << " :" << sum << endl;
	}
	return 0;
}