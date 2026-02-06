#include<iostream>
#include<queue>
using namespace std;
const int MAX = 50000;
queue<pair<int, int>>q;
bool vis[MAX];
int main() {
	int n, A, B, now, step;
	cin >> n >> A >> B;
	q.push(make_pair(A, 0));
	vis[A] = true;
	while (!q.empty()) {
		now = q.front().first;
		step = q.front().second;
		q.pop();
		if (now == B) {
			cout << step << endl;
			break;
		}
		if (!vis[now + 1] && now + 1 <= n) {
			q.push(make_pair(now + 1, step + 1));
			vis[now + 1] = true;
		}
		if (!vis[now - 1] && now - 1 >= 0) {
			q.push(make_pair(now - 1, step + 1));
			vis[now - 1] = true;
		}
		if (!vis[now * 2] && now * 2 <= n) {
			q.push(make_pair(now * 2, step + 1));
			vis[now * 2] = true;
		}
	}
	return 0;
}
//10 2 7   3