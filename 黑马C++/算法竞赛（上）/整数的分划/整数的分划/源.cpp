/* 求n有多少种划分
* 对于n=6 
* n=
*	 6
*	 5+1 
*	 4+2  4+1+1
*	 3+3 3+2+1 3+1+1+1
*	 2+2+2 2+2+1+1 2+1+1+1+1 
*	 1+1+1+1+1+1
* 共11种划分方式
*/
#include<iostream>
using namespace std;
int Divied(int n, int m) {
	if (n < 1 || m < 1) {
		cout << "erro" << endl;
		exit(0);
	}
	else if (n == 1 || m == 1) {
		return 1;
	}
	else if (n < m) {
		return Divied(n, n);
	}
	else if (n == m) {
		return 1 + Divied(n, n - 1);
	}
	else {
		return (Divied(n, m - 1) + Divied(n - m, m));
	}
}
int main() {
	int n;
	cin >> n;
	int k = Divied(n, n);
	cout << k << endl;  //k种
	return 0;
}