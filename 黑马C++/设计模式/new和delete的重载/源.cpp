#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;
using ll = long long;

class p {
public:
	p() {
		this->a = 0;
		cout << "p()..." << endl;
	}

	p(int a) {
		cout << "p()..." << endl;
		this->a = a;
	}
	//重载new和delete会触发构造和析构函数
	void* operator new(size_t size) {
		cout << "new operator" << endl;
		return malloc(size);
	}

	void* operator new[](size_t size) {
		cout << "new[] operator" << endl;
		return malloc(size);
	}

	void operator delete(void* p) {
		cout << "delete operator" << endl;
		if (p != NULL) {
			free(p);
			p = NULL;
		}
	}

	void operator delete[](void* p) {
		cout << "delete[] operator" << endl;
		if (p != NULL) {
			free(p);
			p = NULL;
		}
	}

	~p() {
		cout << "~p()..." << endl;
	}

private:
	int a;
};


int main() {

//	int* value = new int;


	p* ap = new p(10);
	delete ap;
	cout << "---------------------" << endl;
	p* val = new p[5];
	delete[]val;

	return 0;
}