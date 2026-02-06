/*洛谷P1540机器翻译*/
#include<iostream>
#include<queue>
using namespace std;
/*
* queue<type>name
name.push(item)//item压队
name.front()//返回队首元素，不删除
name.pop()//删除队首元素
name.back()// 返回队尾元素，不删除
name.size()//队列元素个数
name.empty()//判空
*/
int Hash[1003] = { 0 }; //hash表检测内存中是否有单词，有则位1
queue<int>mem;
int main() {
	int n, m;
	cin >> n >> m;
	int cont = 0;
	while (n--) {
		int en;
		cin >> en;
		if (!Hash[en]) {  //没有
			++cont;
			mem.push(en);
			Hash[en] = 1;
			while (mem.size() > m) {
				Hash[mem.front()] = 0;
				mem.pop();
			}
		}
	}
	cout << cont << endl;
	return 0;
}