#include<iostream>
using namespace std;
//int a[10]{ -2,11,-4,13,-5,-2 };
int a[10]{ -2,-1,-10,-13,-5,-4 };
int n = sizeof(a) / sizeof(a[0]);

/*
void BaoLi() {  //暴力   O(n^2)
	int sum = 0, max_sum = 0;
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = i; j < n; j++) {
			sum += a[j];
			if (sum > max_sum) {
				max_sum = sum;
			}
		}
	}
	cout << "暴力：" << max_sum << endl;
}
*/
int Fenzhi(int a[], int left, int right) {  //分治策略--二分法  O(nlogn)
	int result, mid;
	if (right == left) {
		if (a[left] > 0) {
			return a[left];
		}
		else {
			return 0;
		}
	}

	mid = (right + left) / 2;
	int le = Fenzhi(a, left, mid);
	int ri = Fenzhi(a, mid + 1, right);

	int sum = 0, le_max = 0;
	for (int i = mid; i >= left; i--) {
		sum += a[i];
		if (sum > le_max) {
			le_max = sum;
		}
	}
	sum = 0;
	int ri_max = 0;
	for (int i = mid + 1; i <= right; i++) {
		sum += a[i];
		if (sum > ri_max) {
			ri_max = sum;
		}
	}

	result = le_max + ri_max;  //考虑最大的子序列在左 还是右 还是左右的和
	if (result < le_max) {
		result = le_max;
	}
	if (result < ri_max) {
		result = ri_max;
	}
	return result;
}

int Dp() {   //动态规划   O(n)  //限制最大和有正数 
	int sum = 0, max_sum = 0;
	int max_first = a[0];
	for (int i = 0; i < 6; i++) {
		max_first = max(max_first, a[i]);
	}
	if (max_first <= 0) {
		return max_first;
	}
	for (int i = 0; i < n; i++) {
		sum += a[i]; //当和的贡献大于0时肯定要取，贡献小于0则重置sum=0从新的一个开头开始。
		if (sum > max_sum) {
			max_sum = sum;
		}
		else if (sum < 0) {  //去负数开头
			sum = 0;
		}
	}
	return max_sum;
}

int Windows() {   //滑动窗口   O(n)
	int left = 0, right = 0;
	int windowSum = 0, maxSum = 0;
	int max_first = a[0];
	//寻找数组全为负数的情况
	for (int i = 0; i < 6; i++) {
		max_first = max(max_first, a[i]);
	}
	if (max_first <= 0) {
		return max_first;
	}
	//
	while (right < n) {
		// 扩大窗口并更新窗口内的元素和
		windowSum += a[right];
		right++;
		// 更新答案
//		maxSum = windowSum > maxSum ? windowSum : maxSum;
        maxSum=max(windowSum,maxSum);
		// 判断窗口是否要收缩
		while (windowSum < 0) {
			// 缩小窗口并更新窗口内的元素和
			windowSum -= a[left];
			left++;
		}
	}
	return maxSum;
}

int main() {
//	BaoLi();
//	int k = Fenzhi(a, 0, 5);  cout << "分治：" << k << endl;
	int k = Dp();    cout << "动态规划：" << k << endl;
//	int k = Windows(); cout << "滑动窗口：" << k << endl;
	return 0;
}
