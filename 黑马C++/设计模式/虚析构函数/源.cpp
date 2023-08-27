#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;
using ll = long long;

class A {
public:
	A() {
		cout << "A()..." << endl;
		this->p = new char[20];
		memset(this->p, 0, 20);
		strcpy(this->p, "A String...");
		
	}
	virtual ~A() { //虚析构函数
		cout << "~A()..." << endl;
		if (this->p != NULL) {
			delete[]p;
			this->p = NULL;
		}
	}
	virtual void print() {
		cout << "A 的print方法 " << this->p << endl;
	}
private:
	char* p;
};

class B :public A {
public:
	B() { //此刻会触发A的构造函数
		cout << "B()..." << endl;
		this->p = new char[20];
		memset(this->p, 0, 20);
		strcpy(this->p, "B String...");
	}
	virtual ~B() {
		cout << "~B()..." << endl;
		if (this->p != NULL) {
			delete[]p;
			this->p = NULL;
		}
	}
	virtual void print() {
		cout << "B 的print方法 " << this->p << endl;
	}
private:
	char* p; //与A重名变量
};

void func(A* ap) {
	ap->print();
}

void func2(A& ap) {
	ap.print();
}

void deletefunc(A* ap) {
	delete ap; //触发析构函数
}


void test() {
	A* oa = new A;
	B* ob = new B;
	func(oa);
	func(ob);
	deletefunc(oa);
	deletefunc(ob);
	cout << "---------" << endl;
	B obja;
	func2(obja);

}

int main() {

	test();

	return 0;
}