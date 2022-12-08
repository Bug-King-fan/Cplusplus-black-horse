/*
I/O流的三大类型：fstream(输入输出文件流)、ifstream(输入文件流)、ofstream(输出文件流)
注意：ifstream对象如果重复使用，需在使用前先调用clear函数，否则会出错！
*/
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char buffer[50];
	fstream out;  //定义out变量
	//void open(const char* filename, openmode_mode_1 | openmode_mode_2 | ..... | openmode_mode_n);
	/*
		ios::in     为输入(读)而打开文件
		ios::out    为输出(写)而打开文件
		ios::ate    初始位置：文件尾
		ios::app    所有输出附加在文件末尾
		ios::trunc  如果文件已存在则先删除该文件
		ios::binary 二进制方式
	*/
//	out.open("E://黑马C++//C++操作文件//I、O与文件读写//test.txt", ios::in);  //打开文件text.txt  ios::in  表示只读	
	out.open("test", ios::in);

	cout << "test.txt 内容：" << endl;
	if (out.is_open()) {
		while (!out.eof()) {  // .eof()  : 文件结束
			out.getline(buffer, 50, '\n');
			//getline(char * arry,int n,[char m]) 表示该行（一行）字符达到n个或遇到字符m
			//注意：n一定要大于arry的[]中的数，留出足够的缓存区
			cout << buffer << endl;
		}
	
		cout << "打开成功！\n";
	}
	else
		cout << "未打开!\n";
	out.close();
	//cin.get();//读取回车符，没有的话程序一闪而过，可用system("pause")替代
	system("pause");
}
