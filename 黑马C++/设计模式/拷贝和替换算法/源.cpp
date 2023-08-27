#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
using namespace std;
using ll = long long;

class Print {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

//拷贝/替换 copy swap 
void test1() {
	srand((unsigned int)time(NULL));

	vector<int>v1;

	for (int i = 0; i < 10; i++) {
		v1.push_back(rand() % 10 + 1);
	}
	vector<int>v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Print());

	vector<int>v3;
	for (int i = 0; i < 10; i++) {
		v3.push_back(rand() % 10 + 1);
	}
	cout << endl;
	cout << "----------------------" << endl;
	for_each(v2.begin(), v2.end(), Print());
	cout << endl;
	for_each(v3.begin(), v3.end(), Print());
	cout << endl;
	cout << "----------------------" << endl;
	swap(v2, v3);
	for_each(v2.begin(), v2.end(), Print());
	cout << endl;
	for_each(v3.begin(), v3.end(), Print());
	cout << endl;
	cout << "----------------------" << endl;

}


class CMP {
public:
	bool operator()(int val) {
		return val > 5;
	}
};

//replace replace_if 替换
void test2() {
	
	vector<int>v1;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
	replace(v1.begin(), v1.end(), 5, 100); //5替换成100
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
	replace_if(v1.begin(), v1.end(), CMP(), 200);//满足条件的替换成200
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
}


int main() {

//	test1();
	test2();
	return 0;
}