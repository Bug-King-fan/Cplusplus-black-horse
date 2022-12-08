#include<iostream>
using namespace std;

/*
	枚举，自定义的数据类型。
	enum 枚举名{
		枚举值名表  //无分号
	};
	
	枚举值名表格式：
		标识符1,标识符2,标识符3,···,标识符n

	枚举元素做为常量可以有初始值。
	enum 枚举名{
		标识符1 [ = 值 ],
		标识符2 [ = 值 ],
		标识符3 [ = 值 ],
		标识符... [ = 值 ],
		标识符n [ = 值 ]
	};
*/

enum city {
	shanghai,    //0
	beijing,     //1
	nanjing,     //2
 
	tianjing=5,  //5
	guangzhou    //6
};

void ff(enum city x) {
	switch (x) {
	case 0: cout << "上海" << endl; break;
	case 1: cout << "北京" << endl; break;
	case 2: cout << "南京" << endl; break;
	case 5: cout << "天津" << endl; break;
	case 6: cout << "广州" << endl; break;
	default: cout << "非法城市" << endl;
	}
}

void test1() {
	enum city c1, c2, c3, c4, c5;
	int i = 7;
	c1 = (enum city)i;//强转枚举型
	c2 = nanjing;
	c3 = (enum city)5;
	c4 = shanghai;
	c5 = guangzhou;

	ff(c1);
	ff(c2);
	ff(c3);
	ff(c4);
	ff(c5);
	cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl;
}

int main() {

	test1();

	system("pause");
	return 0;
}