#include<iostream>
#include<string>
using namespace std;
const int MAX = 110;
int n, m;
int MIN_STEP = 10000000; //设置上限
string maze[MAX];
int dir[4][2] = { {-1,0},{0,-1},{1,0},{0,1} };
bool vis[MAX][MAX];
bool in(int x, int y) {
	return 0 < x && x < n && 0 < y && y < m;
}
void dfs(int x, int y, int step) {
	vis[x][y] = true;
	if (maze[x][y] == 'T') {
		if (MIN_STEP > step) {
			MIN_STEP = step;//更新最小值
		}
		return;
	}
	for (int i = 0; i < 4; i++) {
		int tx = dir[i][0] + x;
		int ty = dir[i][1] + y;
		if (in(tx, ty) && maze[tx][ty] != '*' && !vis[tx][ty]) {
			vis[tx][ty] = true;
			dfs(tx, ty, step + 1); //加一步 
			vis[tx][ty] = false;
		}
	}
	vis[x][y] = false; //要遍历所有可能的路径，所以要取消标记
	//这里不需要return 我们只需要记录到达出口的最小步数就可以
	//肯定有解，无解则需返回false 在main中在加一个if 若无解则为-1步
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> maze[i];
	}
	int x, y;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (maze[i][j] == 'S') {
				x = i;
				y = j;
			}
		}
	}
	dfs(x, y, 0); //最少步数为0
	cout << MIN_STEP << endl;
	return 0;
}
/*
5 6
....S*
.**...
.*..*.
*..**.
.T.... 7
*/