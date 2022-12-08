#include<iostream>
#include<vector>
using namespace std;
int main(){
	/*  vector容器（动态）
	
		空间要扩展时，重新找一个合适的空间地址，再把原来的数据复制过去
		地址前后发生改变 

	vector<int>v;  声明 
	v.push_back(i);  //尾插 
	v1.pop_back()   尾删 
	v.capacity()  查看容量 扩展机制/倍数不知道 
	vector<int>v2(v1.begin(),v1.end())
	vector<int>v2(n,m);  初始化为n个m
	v1=v2  赋值 
	v2.assign(v1.bedin(),v1.end()) 赋值
	v2.assign(n,m)  作用同 v2(n,m) 
	v.swap(v2)  v与v2元素交换
	例：
		v1 : 1 2 3 4 5
		v2 : 2 5 9 7 
		v1.swap(v2);
		v1 : 2 5 9 7
		v2 : 1 2 3 4 5
	v1.size()  统计元素个数
	v1.empty() 判空 空1 非空0
	v1.resize(int num)重新指定容器长度为num 容变长填充默认值，变短超出部分被删除
	v1.resize(int num,elem) 重新指定容器长度为num 容变长用elem填充，变短超出部分被删除
	v1.reserve(int len) 预留len个元素长度，不初始化，元素不可访问 
	
	v1.at(i)  访问索引为i的值 
	v1.front()  返回第一个元素
	v1.back()  返回最后一个元素
	v1.insert(iterator it,int m)  将m插入在it(迭代器)位置 
	v1.insert(iterator it,int n,int m)  将n个m插入在it(迭代器)位置
	例：
		v1 = 1 2 3 4 5 
		v1.insert(v1.begin+1,50);
		v1 = 1 50 2 3 4 5 
	v1.erase(iterator it) 删除it位置的数据 返回下一个数据的位置 
	v1.erase(iterator it1,iterase it2) 删除 [it1,it2)的元素 返回下一个数据的位置 
	v1.clear()清空所有数据 
	*/
	return 0;	
	/*  swap的巧用 
	vector<int>v;
	for(int i=0;i<100000;i++){
		v.push_back(i);
	}
	cout<<v.capacity()<<endl;  // >100000
	cout<<v.size()<<endl;  //  100000
	
	v.resize(3);
	cout<<v.capacity()<<endl;  // >100000  浪费了空间 
 	cout<<v.size()<<endl;  //  3  
	
	//巧用swap
	vector<int>(v).swap(v); 
	cout<<v.capacity()<<endl;  // 3
 	cout<<v.size()<<endl;  //  3 
	*/
	
	/*逆序便利  --逆序迭代器 
	vector<int>v{1,2,3,4,5,6,7,8,9}
	for(vector<int>::reverse_iterator it = v.rbegin(); it!=v.rend();i++){
		cout<<*it<<" ";
	}
	
	//vector迭代器是随机访问迭代器  支持跳跃式访问
	vector<int>::iterator itBegin() = v.begin();
	itBegin = itBegin + 3;
	//如果上述写法不报错，这个迭代器是随机访问迭代器
	// ！ list容器的iterator迭代器不支持随机访问 
	 
	*/
}
















