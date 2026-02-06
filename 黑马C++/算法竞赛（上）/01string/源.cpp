#include<iostream>
#include<cstring>
#include<vector>
#include<string>
using namespace std;
long long get(int a, int b) {
    if (b >= a) { // 需要的位数大于 0 的个数 //是否这些0能减完
        return (long long)(a + 1) * a / 2;
    }
    else {
        return (long long)(a + a - b) * (b + 1) / 2;
    }
}
int main() {
    int n, len, k;
    cin >> n;
    while (n--) {
        cin >> len >> k;
        string s;
        cin >> s;
        int i = 0;
        vector<int>nums;
        while (i < len) {
            if (s[i] == '0') {
                int j = i;
                while (j < len && s[j]=='0') j++;
                nums.push_back(j - i); //下一次还会剩几个0
                i = j;
            }
            else {
                i++;
            }
        }
        long long sum = (long long)(len + len - k) * (k + 1) / 2;
        for (int m = 0; m < nums.size(); m++) {
            sum -= get(nums[m], k);
        }
        cout << sum << endl;
    }
    return 0;
}