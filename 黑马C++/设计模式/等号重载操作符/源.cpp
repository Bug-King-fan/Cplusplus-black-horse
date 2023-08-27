#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;
using ll = long long;

//深浅拷贝问题 对于数组可以浅拷贝会有空间
//对于类似 char *name 需深拷贝 创建空间
class student {
public:
	student() {
		this->id = 0;
		this->name = NULL;
	}
	student(int id, char* name) {
		this->id = id;
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
		//this->name = name;
	}
	//深拷贝
	student(const student &another) {
		this->id = another.id;
		int len = strlen(another.name);
		this->name = new char[len + 1];
		strcpy(this->name, another.name);
		//this->name = name;
	}

	student &operator=(const student &another) {
		if (this == &another) { //两地址相同代表两个东西一样
			//防止自身赋值
			return *this;
		}
		//不是自身赋值 先将自身数据释放掉
		if (this->name != NULL) {
			delete[]this->name;
			this->name = NULL;
			this->id = 0;
		}
		
		//开始执行深拷贝
		this->id = another.id;
		int len = strlen(another.name);
		this->name = new char[len + 1];
		strcpy(this->name, another.name);

		return *this;
	}


	void print() {
		cout << this->id << endl;
		cout << this->name << endl;
	}

	~student() {
		if (this->name != NULL) {
			delete[]this->name;
			this->name = NULL;
			this->id = 0;
		}
	}

private:
	int id;
	char* name;
};


int main() {
	/*
	char name[64] = "123123";
	student s1(1, name);//无空间 但当主函数中name释放 s1空间释放 name析构消失
	student s2(2, (char *)"123123");//这样有空间
	
	char* name2 = new char[64];
	strcpy(name2, "123123");
	student s3(3, name2);
	s3.print();
	delete[]name;
	s3.print();
	*/

	student s4(1, (char*)"zhangsan");
	student s5 = s4; //调用拷贝构造
	s4.print();
	s5.print();

	student s6(2, (char*)"lisi");
	s5 = s6;// = 操作符

	s5.print();

	return 0;
}