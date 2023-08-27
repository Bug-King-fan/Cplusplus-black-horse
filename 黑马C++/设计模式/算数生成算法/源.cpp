#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric> //包含accumulate fill
using namespace std;
using ll = long long;

class Print {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

//fill 填充  accumulate 求和
void test1() {
	vector<int>v{ 1,2,5,6,98,7,6,3 };
	int base_sum = 0;
	int re = accumulate(v.begin(), v.end(), base_sum);
	cout << re << endl;

	vector<int>v2(5);
	fill(v2.begin(), v2.end(), 10);
	for_each(v2.begin(), v2.end(), Print());
}

//set_intersection 交集 A∩B x∈A且x∈B
//set_union 并集  A∪B  x∈A或x∈B
//set_difference 差集  A-B x∈A且x不属于B
void test2() {
	vector<int>v1{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int>v2{ 5,6,7,8,9,10,11,12,13,14,15 };

	vector<int>v3(min(v1.size(), v2.size()));
	auto it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//存在多余0的情况
	//解决 返回的是迭代器 返回结果的下一个位置

//	for_each(v3.begin(), v3.end(), Print());
	for_each(v3.begin(), it, Print());
	cout << endl;
	vector<int>v4(v1.size() + v2.size());
	auto it2 = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
	for_each(v4.begin(), it2, Print());
	cout << endl;
	vector<int>v5(v1.size());
	auto it3 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());
	for_each(v5.begin(), it3, Print());
	cout << endl;


}

int main() {

	//test1();
	test2();
	return 0;
}