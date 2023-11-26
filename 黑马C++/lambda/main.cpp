#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//lambda表达式
// [捕获列表](参数列表) mutable(可选) 异常属性 -> 返回类型 { 函数体 }
// 捕获列表：捕获上下文中的变量
// 参数列表：与普通函数的参数列表一致，如果不需要参数传递，则可以省略
// mutable：默认情况下，lambda表达式总是一个const函数，mutable可以取消其常量性
// 异常属性：指定函数体内部抛出异常的类型，如果指定为noexcept，则不允许抛出异常，否则允许抛出异常
// 返回类型：与普通函数的返回类型一致，如果不需要返回值，则可以省略
// 函数体：与普通函数的函数体一致，如果函数体只有一条语句，并且不需要返回值，则可以省略return关键字
//[=]() {};            //全部变量传值传参
//[&]() mutable {};    //全部变量传引用传参
//[=, &x]()mutable {};//接收所有变量，但只有x是引用传参
//[&, x]() mutable {};//接收所有变量，单只有x是传值传参

void solve() {
    int n = 6;
    int e=5;
    vector<int> v = {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
    cout << endl;
    for_each(v.begin(), v.end(), [](int &x) { x++; });
    for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
    cout << endl;
    auto gold = [](int x) {
        if (x % 2 == 0) { cout << x << " is even number"; } else { cout << x << " is odd number"; }
        cout << endl;
    };
    for_each(v.begin(), v.end(), gold);
    auto gold2 = [&n](int x) -> void {
        n = 20;
        //e = 30; //未进行引用捕获，不可修改
    };
    auto gold3 = [=](int x) -> void {
        // n=20; //值传递，不可修改
        // e=30;
    };
    auto gold4 = [&v]()->void{
        for(auto &a:v) {
            a++;
        }
    };
    gold4();
    for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool flag = true;
    if (flag) {
        solve();
    } else {
        int t;
        cin >> t;
        while (t--) {
            solve();
        }
    }
    return 0;
}