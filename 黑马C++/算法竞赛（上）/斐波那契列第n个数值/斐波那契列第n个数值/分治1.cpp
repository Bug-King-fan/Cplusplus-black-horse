#include<iostream>
#include<cstdio>
#define long long int
using namespace std;
void Matrix_Mul(int(&m)[2][2], int(&n)[2][2]){
	int tmp[2][2];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			tmp[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				tmp[i][j] += m[i][k] * n[k][j];
			}
		}
	}

	for (int i = 0; i < 2; i++) //复制
		for (int j = 0; j < 2; j++)
			m[i][j] = tmp[i][j];

	return;
}
int Fibonacci(int n){
	int result[2][2] = { {1,0},{0,1} };  //单位矩阵 
	int a[2][2] = { {1,1},{1,0} };
	while (n){
		if (n % 2 == 1)    //n为奇数   a^((n-1)/2) * a^((n-1)/2) * a = A(n)
						  //n为偶数    a^(n/2) * a^(n/2) = A(n)	
			Matrix_Mul(result, a);
		n /= 2;
		Matrix_Mul(a, a);
	}
	return result[0][1];
}
int main(){
	int n;
	cout << "要查询第几项：";
	cin >> n;
	printf("第%d项为:%d", n, Fibonacci(n));
	return 0;
}
/*
一列有规律的数字 1 1 2 3 5 8 13 21 34 ……

递推公式为Fn = Fn - 1 + Fn - 2, 即从第三项开始，每一项等于相邻前两项的和，求Fibonacci数列的方法有很多

现在主要讨论用分治法求Fibonacci数列的第n项
分治法

分治法求Fibonacci数列基于快速幂算法思想
观 察 可 得[f(2) f(1) f(1) f(0)] = [1 1 1 0] 观察可得\left[
	f(2)f(1)f(1)f(0)
		\right] = \left[
			1110
				\right] 观察可得[f(2)f(1)​f(1)f(0)​] = [11​10​]
				用数学归纳法可证明下列公式的正确性（证明略）
				[f(n + 1) f(n) f(n) f(n − 1)] = [1 1 1 0] n \left[
					f(n + 1)f(n)f(n)f(n−1)
						\right] = \left[
							1110

								\right] ^ n[f(n + 1)f(n)​f(n)f(n−1)​] = [11​10​]n
								根据此结论结合快速幂算法思想便可求出Fibonacci数列的第n项
								快速幂算法参考

								代码需要一个求矩阵相乘结果的函数，2 * 2矩阵result初始为单位矩阵，采用非递归分治法（递归的话需要返回二维数组，造成不必要的麻烦），最后得到result矩阵，根据上述公式可直接找到要求的第n项的结果，时间复杂度为O(logn), 代码如下
								*/
