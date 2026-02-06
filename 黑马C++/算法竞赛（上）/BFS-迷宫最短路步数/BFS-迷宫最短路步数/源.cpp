#include<iostream>
#include<string>
#include<queue>
using namespace std;
const int MAX = 110;
int dir[4][2] = { {-1,0},{0,-1},{1,0},{0,1} };
bool vis[MAX][MAX];
string maze[MAX];
int n, m;
bool in(int x, int y) {
	return 0 <= x && x < n && 0 <= y && y < m;
}
typedef struct node {
	int x, y, d;
	node(int xx, int yy, int dd) {
		x = xx;
		y = yy;
		d = dd;
	}
};
int bfs(int x, int y) {
	queue<node>q;
	q.push(node(x, y, 0));
	vis[x][y] = true;
	while (!q.empty()) {
		node now = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int tx = dir[i][0] + now.x;
			int ty = dir[i][1] + now.y;
			if (in(tx, ty) && maze[tx][ty] != '*' && !vis[tx][ty]) {
				if (maze[tx][ty] == 'T') {
					return now.d + 1;
				}
				else {
					vis[tx][ty] = true;
					q.push(node(tx, ty, now.d + 1));
				}
			}
		}
	}
	return -1; //无法到达
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
	cout << bfs(x, y) << endl;
	return 0;
}
/*
5 6 
....S*
.**...
.*..*.
*..**.
.T....    7
*/