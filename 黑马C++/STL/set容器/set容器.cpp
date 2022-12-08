/*set/multiset容器  set的元素既是键值又是实值，
					set不润许有两个相同的键值
					不能用迭代器改set的值
					set的迭代器是一个const_iterator
					set容器会自动将key排好序（小到大） 关联式容器 
					set/multiset底层实现是红黑树
					multiset 允许插入重复键值*/
/*
	(1)构造
		set<type>st;
		mulitset<type>mst;
		set(const srt &st); 拷贝构造 
	(2)赋值
		set<int>st1=st2;
		st1.swap(st2)
	(3)插入/删除
		st.insert(elem)
		st.clear()	
		st.erase(iterator) 删除迭代器所指的元素，返回下一个元素的位置 
		st.erase(beg,end) 删除区间[beg,end)区间的元素，返回下一个元素的迭代器
		st.erase(elem) 删除容器中所有值为elem的元素
	(4)大小
		st.empty()
		st.size() 
	(5)查找
		st.find(key)查找键值key是否存在，存在返回该元素的迭代器，若不存在，返回set.end()
		st.count(key) 查找键key的元素个数
		st.lower_bound(keyelem) 返回第一个key>=keyelem的元素的迭代器
		st.upper_bound(keyelem) 返回第一个key>keyelem的元素的迭代器
		st.equal_range(keyelem) 返回容器中key=keyelem的上下限的两个迭代器  ***
	(6)插入自定义数据类型  需要先指定排序规则 
		class my_set_cmp{
			public:
				bool operator(const person &p1,const person &p2){
					if(p1.age<p2.age){  //从小到发大 
						return true;  
					}
					else
						return false;
				}
		}; // end class
		set<person,my_set_cmp>s;   //set仿函数操作 
		person p1("1",10);
		person p2("2",20);
		person p2("3",30);
		s.insert(p1);
		s.insert(p2);
		s.insert(p3);
*/ 		
 
#include<iostream>
#include<set>
using namespace std;
int main(){
/*
			set<int>s1;
			s1.insert(5);
			s1.insert(1);
			s1.insert(3);
			s1.insert(9);
			s1.insert(7);
//equal_range()的下上限就是 lower_bound  3 和 upper_bound  5
			pair<set<int>::iterator,set<int>::iterator>ret = s1.equal_range(3)
//pair是对组 
			if(ret.first!=s1.end()){  //lower_bound
				cout<<"找到"<<*(ret.first)<<endl;  3
			}
			else{
				cout<<"未找到"<<endl;
				}
			if(ret.second!=s1.end()){  //upper_bound
				cout<<"找到"<<*(ret.second)<<endl;  5
			}
			else{
				cout<<"未找到"<<endl;
				}
*/
/*
pair对组  两个值一个first一个second
		(1)创建对组
			pair<type1,type2>pa;
			pair<type1,type2>pa = make_pair(elem1,elem2);
			pair<string,int>pa("TOM",6);
		(2)取值
			cout<<pa.first<<endl;
			cout<<pa.second<<endl;
				 
*/
	return 0
}
