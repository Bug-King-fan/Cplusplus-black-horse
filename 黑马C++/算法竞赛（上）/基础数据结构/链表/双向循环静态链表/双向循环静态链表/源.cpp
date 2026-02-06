#include<iostream>
using namespace std;
const int MAX = 105;
typedef struct Node {
	int data;
	int predata, nextdata;
};
Node nodes[MAX];
int main() {
	int n, m;
	cin >> n >> m;
	nodes[0].nextdata = 1;
	for (int i = 1; i <= n; i++) {
		nodes[i].data = i;
		nodes[i].predata = i - 1;
		nodes[i].nextdata = i + 1;
	}
	nodes[n].nextdata = 1;
	nodes[1].predata = n;
	int now = 1;
	while ((n--) > 1) {
		for (int i = 1; i < m; i++) {
			now = nodes[now].nextdata;
		}
		cout << nodes[now].data << " ";
		int pre = nodes[now].predata, next = nodes[now].nextdata;
		nodes[pre].nextdata = nodes[now].nextdata;
		nodes[next].predata = nodes[now].predata;
		now = next;
	}
	cout << nodes[now].data << endl;  //输出最后一个节点数据
	return 0;
}
