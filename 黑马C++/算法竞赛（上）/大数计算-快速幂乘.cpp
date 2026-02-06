#include <bits/stdc++.h>

#define endl '\n'
#define int long long
#define uint unsigned long long
using namespace std;

int qmi(int a , int b) {
    int ans = 0;
    while (b) {
        if (b & 1) {
            ans *= a;
        }
        b >>= 2;
        a *= a;
    }
    return ans;
}

void add() {
    string s1 = "1501";
    string s2 = "8499";
    string s3 = "";
    reverse(s1.begin() , s1.end());
    reverse(s2.begin() , s2.end());
    int i = 0;
    int a , b , c;
    int base = 0;
    for (i = 0; i < min(s1.size() , s2.size()); i++) {

        a = s1[i] - '0';
        b = s2[i] - '0';
        c = a + b;

        if (base > 0) {
            c += base;
            base = 0;
        }

        if (c >= 10) {
            s3 += ((c - 10) + '0');
            base = c / 10;
        }
        else {
            s3 += (c + '0');
        }
    }
    if (s1.size() != s2.size()) {
        if (s1.size() > s2.size()) {
            for (; i < s1.size(); i++) {
                if (base > 0) {
                    s3 += ((s1[i] - '0' + base) + '0');
                    base = 0;
                    continue;
                }
                s3 += s1[i];
            }
        }
        else
        {
            for (; i < s2.size(); i++)
            {
                if (base > 0)
                {
                    s3 += ((s2[i] - '0' + base) + '0');
                    base = 0;
                    continue;
                }
                s3 += s2[i];
            }
        }
    }
    else
    {
        if (base)
        {
            s3 += (base + '0');
        }
    }

    reverse(s3.begin() , s3.end());

    cout << s3 << endl;
}

void sub()
{
    string a , b;
    int na[10500] , nb[10500] , ans[10500];
    bool pd;
    cin >> a >> b;
    if ((a < b && a.size() == b.size()) || a.size() < b.size())
    {
        swap(a , b);
        pd = true;
    }
    for (int i = a.size(); i > 0; i--)
    {
        na[i] = a[a.size() - i] - '0';
    }
    for (int i = b.size(); i > 0; i--)
    {
        nb[i] = b[b.size() - i] - '0';
    }
    // ���ַ����е���Ϣת���������У�����ģ�����֡�
    int maxl = max(a.size() , b.size());
    //    int maxl=a.size();
    // �ҵ��������е����λ��Ϊforѭ������
    for (int i = 1; i <= maxl; i++)
    {
        if (na[i] < nb[i])
        {
            na[i + 1]--;
            na[i] += 10;
        }
        ans[i] = na[i] - nb[i];
    }

    while (ans[maxl] == 0)
    {
        maxl--; // ��ֹ����λ�����������0
    }

    if (pd == true)
    {
        cout << "-"; // b>aʱ��a - b < 0 ���Դ��ϸ���
    }

    for (int i = maxl; i > 0; i--)
    {
        cout << ans[i];
    }
    if (maxl < 1)
    {
        cout << "0";
    }
}

// ���ٳ�
//  ��ģ���Ŀ��ٳˣ���ֹ�м��������
int quickMulMod(int a , int b , int mod)
{
    int res = 0;
    a %= mod;
    b %= mod;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res + a) % mod;
        }
        a = (a << 1) % mod; // a����2
        b >>= 1;            // b����2
    }
    return res;
}

// ������
int quickMilMod(int a , int b , int mod)
{
    int res = 1;
    a %= mod;
    b %= mod;
    while (b > 0) {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //    cin>>t;
    while (t--)
    {
        //        add();
        sub();
    }

    return 0;
}