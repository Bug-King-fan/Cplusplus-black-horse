#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main() {
	map<char, int>mp;
	string s;
	cin >> s;
	char* p = &s[0];
	while (*p!='\0') {
		if (mp.find(*p) != mp.end()) {
			mp[*p] = 1;
			cout << *p << endl;
			break;
		}
		else {
			mp[*p] = 0;
		}
		p++;
	}
	return 0;
}