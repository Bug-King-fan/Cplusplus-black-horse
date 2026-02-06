/*洛谷P1886滑动窗口*/
#include<iostream>
#include<deque>
using namespace std;
/*  双端队列是典型的单调队列
* deque<type>dp;  //双端队列
* dp[i] //返回队列中下标为i的元素
* dp.front()  返回队头
* dp.back()   返回队尾
* dp.pop_back()  删除队尾，不返回值
* dp.pop_front() 删除队头，不返回值
* dp.push_back(e) 在队尾添加元素e
* dp.push_front(e)在队头添加元素e
*/
const int N = 1000005;
int a[N];
deque<int>q;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {  //输出最小值
		while (!q.empty() && a[q.back()] > a[i]) {
			q.pop_back();//去尾
		}
		q.push_back(i);
		if (i >= m) {
			while (!q.empty() && q.front() <= i - m) {
				q.pop_front();// 去头
			}
			cout << a[q.front()] << " ";
		}
	}
	cout << endl;
	while (!q.empty())  //清空，下面在用一次
		q.pop_front();  
	for (int i = 1; i <= n; i++) {  //输出最大值
		while (!q.empty() && a[q.back()] < a[i])  
			q.pop_back();  //去尾
		q.push_back(i);
		if (i >= m) {
			while (!q.empty() && q.front() <= i - m)
				q.pop_front();  //去头
			cout << a[q.front()] << " ";
		}
	}
	cout << endl;
	return 0;
}