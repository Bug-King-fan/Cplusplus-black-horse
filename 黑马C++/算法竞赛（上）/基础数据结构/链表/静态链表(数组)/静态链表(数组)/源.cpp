#pragma
#include<iostream>
using namespace std;
typedef int elemtype;
const int MAX = 105;
typedef struct Node {
	elemtype data, nextdata;
};
Node nodes[MAX];
int main() {
	int n, m;
	cin >> n >> m;
	nodes[0].nextdata = 1;
	for (int i = 1; i <= n; i++) {
		nodes[i].data = i;
		nodes[i].nextdata = i + 1;
	}
	nodes[n].nextdata = 1;
	int now = 1, pre = 1;
	while ((n--) > 1) {
		for (int i = 1; i < m; i++) {
			pre = now;
			now = nodes[now].nextdata;
		}
		cout << nodes[now].data << " ";
		nodes[pre].nextdata = nodes[now].nextdata;
		now = nodes[pre].nextdata;
	}
	cout << nodes[now].data << endl;  //最后一个节点
	return 0;
}