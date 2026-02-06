#include <bits/stdc++.h>

#define endl '\n'
#define int long long
#define uint unsigned long long
using namespace std;
const int N = 30;
int n;
int nums[N][N];
bool vis[N][N];
int dir[4][2] = {
        {0,  1},
        {1,  0},
        {0,  -1},
        {-1, 0}

};

bool check(int x, int y) {
    if (x >= 1 && x <= n && y >= 1 && y <= n) {
        return true;
    }
    return false;
}

void dfs(int x, int y, int number,int di) {
    if (number > (n * n)) {
        return;
    }

    nums[x][y] = number;
    vis[x][y] = true;

    int dx = x + dir[di][0];
    int dy = y + dir[di][1];

    if(dx<1||dx>n||dy<1||dy>n|| vis[dx][dy]){
        di=(di+1)%4;
        dx = x + dir[di][0];
        dy = y + dir[di][1];
    }

    dfs(dx, dy, number + 1,di);

}

void solve() {

   cin >> n;

   dfs(1, n, 1,0);

   for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= n; j++) {
           cout << nums[i][j] << " ";
       }
       cout << endl;
   }

    // string s1="123";
    // string s2="149";
    // string s3="";
    // reverse(s1.begin(),s1.end());
    // reverse(s2.begin(),s2.end());
    // int i=0;
    // int a,b,c;
    // int base=0;
    // for(i=0;i<min(s1.size(),s2.size());i++){

    //     a=s1[i]-'0';
    //     b=s2[i]-'0';
    //     c=a+b;

    //     if(base>0){
    //         c+=base;
    //         base=0;
    //     }

    //     if(c>=10){
    //         s3+=((c-10)+'0');
    //         base=c/10;
    //     }else{
    //         s3+= (c+'0') ;
    //     }
    // }

    // if(s1.size()!=s2.size()){
    //     if(s1.size()>s2.size()){
    //         for( ;i<s1.size();i++){
    //             s3+=s1[i];
    //         }
    //     }else{
    //         for( ;i<s2.size();i++){
    //             s3+=s2[i];
    //         }
    //     }
    // }

    // reverse(s3.begin(),s3.end());

    // cout<<s3<<endl;

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