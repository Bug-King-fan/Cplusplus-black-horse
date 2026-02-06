/*打印n层蛇形矩阵
*例n=4	
*	1
*	5  2
*	8  6  3 
*	10 9  7  4
*/
#include<iostream>
using namespace std;
const int MAX = 20;
int main() {
	int n, k=1;
	cin >> n;
	int a[MAX][MAX];
	/*外到内i层  左上到右下j个数*/
	for (int i = 1; i <= n; i++) {  //层数
		for (int j = 1; j <= n - i + 1; j++) {
			a[i - 1 + j][j] = k++;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}