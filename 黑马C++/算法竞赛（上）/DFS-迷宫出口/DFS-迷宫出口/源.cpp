#include<iostream>
#include<cstring>
#include<string>
using namespace std;
const int MAX = 110;
int n, m;
string maze[MAX];
bool in(int x, int y) {  //点在地图中
	return 0 < x && x < n && 0 < y && y < m;
}
int dir[4][2] = { {-1,0},{0,-1},{1,0},{0,1} };//枚举方向
int vis[MAX][MAX];//查看节点是否访问过
bool dfs(int x,int y) {
	if (maze[x][y] == 'T') {
		return true;
	}
	vis[x][y] = 1; // 设置此节点已访问
	maze[x][y] = 'm';//显示路径
	for (int i = 0; i < 4; i++) {
		int tx = dir[i][0] + x;
		int ty = dir[i][1] + y;
		if (in(tx, ty) && maze[tx][ty] != '*' && !vis[tx][ty]) {
			if (dfs(tx, ty)) {//如果dfs找到出口返回true 结束程序找到路径（不一定是最短，只是一条可达路径）
				return true;
			}
		}
	}
	//这个点不成功无法到达
	vis[x][y] = 0;
	maze[x][y] = '.';
	return false;
}
int main() {
	cin >> n >> m;
	//输入迷宫地图
	for (int i = 0; i < n; i++) {
		cin >> maze[i];
	}
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (maze[i][j] == 'S') {
				x = i;
				y = j;
			}
		}
	}
	if (dfs(x, y)) {
		for (int i = 0; i < n; i++) {
			cout << maze[i] << endl;
		}
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
/*
5 6 
....S*
.***..
.*..*.
*.***.
.T....
*/