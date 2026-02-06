#include<iostream>
using namespace std;
void QuickSort(int nums[], int lift, int right);
int main() {
	int nums[] = { 27,99,0,8,13,64,86,30,7,10,88,25,90 };
	QuickSort(nums, 0, 12);

	/*输出*/
	for (int i = 0; i < 13; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
}
void QuickSort(int nums[], int lift, int right) {

	if (lift >= right)  //边界条件 
		return;

	int i = lift;
	int j = right;
	int temp;
	int base = nums[lift];
	while (i != j) {
		while (nums[j] >= base && i < j) {//右哨先动找到第一个比基值base小的 
			j--;
		}
		while (nums[i] <= base && i < j) {//左哨后动找到第一个比基值base大的
			i++;
		}
		if (i < j)  //交换 
		{
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}
	}

	nums[lift] = nums[j];  //基位置与j哨兵交换 
	nums[j] = base;

	QuickSort(nums, lift, j - 1);//左
	QuickSort(nums, j + 1, right);//右 
}