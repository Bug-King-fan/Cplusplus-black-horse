#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;
using ll = long long;

/*
* 父辈添加virtual 使子辈对于重复的只拷贝一份 继承于爷爷的
* virtual 防止变量多份拷贝从而出现歧义
*/

class Furniture {
public:
	string m;//材质
};

class Bed :virtual public Furniture {
public:
	Bed() {
		this->m = "实木";
	}

	void Sleep() {
		cout << ".床上睡." << endl;
	}
};

class Sofa :virtual public Furniture {
public:
	Sofa() {
		this->m = "牛皮";
	}

	void Sit() {
		cout << ".沙发上休息." << endl;
	}
};

class BedSofa :public Sofa, public Bed {
	//全部不加virtual，沙发床会产生两个材质m
public:
	void SleepAndSit() {
		Sleep();
		Sit();
	}
	
};

int main() {

	BedSofa a;
	//a.m;
	//不加virtual 报m不明确
	//如要访问
	//a.get();
	//void get() {
	//cout << this->Sofa::m;
	//}
	//cout << a.Sofa::m << endl;
	a.m = "99gload";
	cout << a.m << endl;

	return 0;
}