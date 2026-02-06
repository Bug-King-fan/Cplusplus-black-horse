#include<iostream>
using namespace std;
int nodes[105];
int main() {
	int m, n;
	cin >> n >> m;
	for (int i = 1; i < n; i++) {
		nodes[i] = i + 1;
	}
	nodes[n] = 1;  //循环链表
	int now = 1, pre = 1;  
	while ((n--) > 1) {
		for (int i = 1; i < m; i++) {
			pre = now;   
			now = nodes[now];   //下一个节点
		}
		cout << now << " ";
		nodes[pre] = nodes[now];  //跳过now，即删除
		now = nodes[pre];  //新的now
	}
	cout << now << endl;  //最后的数据节点
	return 0;
}