#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
const ll MAX = 105;
ll res[MAX] = { 0 };
ll Feb(int x){
	if (x == 0 || x == 1){
		res[x] = x;
		return res[x];
	}
	if (res[x - 1] != 0 && res[x - 2] != 0)
		res[x] = res[x - 1] + res[x - 2] + 1;
	else
		res[x] = Feb(x - 1) + Feb(x - 2) + 1;
	return 
		res[x];
}
int main(){
	string s, s0, s1 = "0", s2 = "1";
	ll n;
	cin >> n >> s;
	int flag = 0;
	s1 = "0", s2 = "1";
	for (int i = 2; i <= 23; i++){
		s0 = s1 + s2;		
		s1 = s2;
		s2 = s0;
		for (int j = 0; j < (int)(s0.length() - s.length()); j++){
			if (s == s0.substr(j, s.length())){
				flag = i;
				break;
			}
		}
		if (flag == i)
			break;
	}
	cout << Feb(n + 1 - flag) << endl;
	return 0;
}