#include<iostream>
using namespace std;
int A[20] = { 0 };
int n;
bool isp[10005] = { false };
bool vis[20] = { false };
bool is_prime(int num){
    bool flag = true;
    for (int i = 2, n = sqrt(num); i <= n; i++){
        if (num % i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}
void dfs(int cur) {
    if (cur == n && isp[A[0] + A[n - 1]]) {
        for (int i = 0; i < n; i++)
            cout << A[i];
        cout << endl;
        return;
    }
    for (int j = 2; j <= n; j++) {//放置整数j
        if (!vis[j] && isp[j + A[cur - 1]]) {
            A[cur] = j;
            vis[j] = true;
            dfs(cur + 1);
            vis[j] = false;
        }
    }
}
int main() {
	cin >> n;
    for (int i = 2; i <= n * n; i++) {
        if (is_prime(i)) {
            isp[i] = true;
        }
    }
    for (int i = 0; i < n; i++)
        A[i] = i + 1;

    vis[1] = true;
    dfs(1);

	return 0;
}
/*
输入正整数n，把整数1, 2, 3,…, n组成一个环，使得相邻两个整数之和均为素数。
输出时从整数1开始逆时针排列。同一个环应恰好输出一次。n≤16。
样例输入：
6
样例输出：
1 4 3 2 5 6
1 6 5 2 3 4
*/