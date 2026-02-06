#include<iostream>
#include<queue>
using namespace std;
int main() {
	queue<int>q;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int cont = 1;
	while (q.size() > 1) {
		int x = q.front();
		q.pop();
		if (cont == m) {
			cont = 1;
		}
		else {
			q.push(x);
			cont++;
		}
	}
	cout << q.front() << endl;
	return 0;
}