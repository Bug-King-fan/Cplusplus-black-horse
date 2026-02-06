#include <bits/stdc++.h>

#define endl '\n'
#define int long long
#define uint unsigned long long
using namespace std;

//单调栈： 求数组下一个最大的值
void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    stack<int> stk;
    for (int i = 0; i < n; i++) {
        //遇到比当前大的，就弹出之前比此值小的，更新结果，并将自己放进栈
        while (!stk.empty() && nums[stk.top()] < nums[i]) {
            ans[stk.top()] = i;
            stk.pop();
        }
        stk.push(i);
    }
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}

//单调队列(dequeue) 求区间为k的极值问题
//极大值：
void solve2() {
    int n , k;
    cin >> n >> k;
    vector<int>a(n);

    deque<int>que;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    //单调减队列
    for (int i = 0;i < n;i++) {
        //永远保持队列是单调递减的
        while (!que.empty() && a[que.back()] < a[i]) {
            que.pop_back(); //去尾
        }
        que.push_back(i);
        //满足区间为k
        if (i >= k) {
            //弹出是极大值，但是不在 区间 范围内的情况
            while (!que.empty() && que.front() < i - k + 1) {
                que.pop_front();
            }
            //队头就是极大值
            cout << a[que.front()] << " ";
        }
    }
}
//单调队列(dequeue) 求区间为k的极值问题
//极小值： 单调增
void solve3() {
    int n , k;
    cin >> n >> k;
    vector<int>a(n);

    deque<int>que;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    for (int i = 0;i < n;i++) {
        //永远保持队列是单调递减的
        while (!que.empty() && a[que.back()] > a[i]) {
            que.pop_back(); //去尾
        }
        que.push_back(i);
        //满足区间为k
        if (i >= k) {
            //弹出是极大值，但是不在 区间 范围内的情况
            while (!que.empty() && que.front() < i - k + 1) {
                que.pop_front();
            }
            //队头就是极大值
            cout << a[que.front()] << " ";
        }
    }
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //    cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}