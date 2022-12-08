#include<iostream>
#include<deque>
using namespace std;
/* deque容器(双端队列)
	(1)构造
		deque<int>d;
		deque<int>d2(d1.begin(),d1.end())
		deque<int>d2(n,m);  初始化为n个m 
	(2)赋值 
		d1=d2  赋值 
		d2.assign(d1.bedin(),d1.end()) 赋值
		d2.assign(n,m)  作用同 d2(n,m)
		d1.swap(d2)  d1与d2元素交换 
	例：
	//iterator 普通迭代器 reverse_iterator 逆序迭代器 const_iterator 只读迭代器 
		for(deque<int>::const_iterator it = d1.begin();it!d1.end();it++){
			cout<<*it<<" ";
		}
	(3)简单操作 
		d1.size()  统计元素个数
		d1.empty() 判空 空1 非空0
		d1.resize(int num)重新指定容器长度为num 容变长填充默认值，变短超出部分被删除
		d1.resize(int num,elem) 重新指定容器长度为num 容变长用elem填充，变短超出部分被删除
	(4)双端插入删除
	 	d1.push_back(i)  尾插 
	 	d1.push_front(i) 头插 
		d1.pop_back()    尾删 
		d1.pop_front()   头删
	(5)数据存取
		d1.at(i)
		d1[i]
		d1.fornt()  返回第一个数据 
		d1.back()   返回最后一个数据
	(6)插入
		d1.insert(iterator it,int m)  将m插入在it(迭代器)位置 
		d1.insert(iterator it,int n,int m)  将n个m插入在it(迭代器)位置 
		d1.insert(iterator it,beg,end) 在it位置插入[beg,end)区间的元素
	(7)删除
		d1.clear() 全部清空
		d1.erase(iterator it) 删除it位置的数据 返回下一个数据的位置 
		d1.erase(iterator it1,iterase it2) 删除 [it1,it2)的元素	  返回下一个数据的位置 
*/
int main(){
	return 0;
} 
