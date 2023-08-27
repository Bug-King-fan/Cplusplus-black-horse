#include<iostream>
#include<vector>
#include<time.h>
#include<list>
#include<algorithm>
using namespace std;
using ll = long long;

class print {
public:
	void operator()(int val) {
		cout << val << " ";
	} 
};

class DESC {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

bool ASC(int v1, int v2) {
	return v1 < v2;
}


void test1() {
	//merge 合并两有序数组成一个有序数组
	//支持非随机访问容器和随机访问容器
	vector<int>v1;
	vector<int>v2;
	list<int>l1{ 1,5,9,7,6,3,2 };
	list<int>l2{ 11,4,8,65,99,12 };
	/*1-10随机数*/
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++) {
		v1.push_back(rand() % 10 + 1);
	}
	for (int i = 0; i < 10; i++) {
		v2.push_back(rand() % 10 + 1);
	}
	cout << endl;
	cout << "------------------------------" << endl;
	sort(v1.begin(), v1.end(), DESC());
	l1.sort(DESC());
	l2.sort(DESC());
	l1.merge(l2,DESC()); // 指定l2合并到l1
	for_each(l1.begin(), l1.end(), print());
	cout << endl;
	cout << "------------------------------" << endl;

	sort(v1.begin(), v1.end(), ASC);
	sort(v2.begin(), v2.end(), ASC);

	for_each(v1.begin(), v1.end(), print());
	cout << endl;

	for_each(v2.begin(), v2.end(), print());
	cout << endl;

	vector<int>target;
	//重设目标大小空间
	target.resize(v1.size() + v2.size());
	cout << 3 << endl;
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin(), ASC);
	
	cout << 4 << endl;
	for_each(target.begin(), target.end(), print());
}

/*reverse 反转范围内元素
  random_shuffle 随机打乱范围内元素 不支持非随机访问容器 但其有自定义方法 list.merge()
*/
void test2() {
	vector<int>v1{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for_each(v1.begin(), v1.end(), print());
	cout << endl;
	random_shuffle(v1.begin(), v1.end());
	for_each(v1.begin(), v1.end(), print());
	cout << endl;
	reverse(v1.begin(), v1.end());
	for_each(v1.begin(), v1.end(), print());
	cout << endl;
	return;
}


int main() {

	test1();
	//test2();
	return 0;
}