/*list 容器  list是一个双向循环链表  不支持随机访问*/
/*
打印可以用iterator迭代器访问 
list 头节点无数据 
	(1)构造
		list<type>li
		list<type>li2(li.begin(),li.end())   [beg,end)
		list<type>li2(n,elem)  n个elem给li2 
	(2)插入/删除
		li.push_back(elem)
		li.pop_back()
		li.push_front(elem)
		li.pop_front()
		li.insert(itreator,elem) 在iterator位置插入elem 返回新数据的位置 
		li.insert(iterator,n,elem) iterator位置插入n个elem无返回
		li.insert(iterator,beg,end) iterator位置擦汗如[beg,end)区间元素 
		li.clear()
		li.erase(beg,end) 删除[beg,end)区间元素 
		li.erase(iterator) 删除迭代器位置元素
		li.remove(elem) 删除容器中值与elem相匹配的所有元素 
	(3)大小
		li.size()
		li.empty()
		li.resize() 同vector
	(4)赋值
		li.assign(beg,end) 
		li.assign(n,elem)
		l1.swap(lst)  交换
	(5)数据存取
		li.front() 
		li.back()
	(6)反转/排序
		li.reverse()  改变原有数据
		注意：所有不支持随机访问的迭代器，不可以用系统提供的算法
			  如果不支持系统提供的算法，容器自身会提供		 
		li.sort()  从小到大
		
		li.sort(mycmp)  从大到小 
		bool mycmp(int v1,int v2){
			return v1 > v2;
		}
		对于自定义数据类型 必须自己制定排序规则！！！
		
		remove()删除自定义数据类型：
			函数放在类public中
			bool operator==(TYPE &p){
				if(this->属性1==p.属性1&&this->属性2==p.属性2&&~~~~&&this->属性n==p.属性n){
					return true;
				}
				retrun false;
			}
		 
*/			
}
#include<iostream>
#include<list>
using namespace std;
int main(){
	return 0;
} 
