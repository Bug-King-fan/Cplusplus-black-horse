/*map/multimap容器
					map所有元素都是pair同时拥有真实值和键值
					oair的第一元素被视为键值，第二元素视为实值
					map不允许有两个元素相同的键值
					不能使用迭代器改变map的键值与实值
					map内部会自动排序
					multimap 键值可以重复
*/
/*
	(1)构造
		map<type1,type2>ma;
		map(const map &mp); 拷贝构造
	(2)赋值
		map<int,int>mp=ma;
		ma.swap(mp); 
	(3)大小
		ma.size()
		ma.empty()
	(4)map插入元素操作
		①ma.insert(pair<type1,type2>(elem1,elem2)) 往容器插入元素，返回pair<iterator,bool>   pair 对组 
		②ma.insert(make_pair(elem1,elem2));
		③ma.insert(map<type1,type2>::value_type(elem1,elem2))
		④ma[key]=value;   若无对应数据，用key取访问不存在的key，编译器会自动把不存在的key加到map中value为0
			 
	注意：打印取值
		map<int,int>::iterator it = map.begin()
		cout<<it->first<<" "<<it->second<<endl; 
		
	(5)删除
		ma.clear()
		ma.erase(iterator)  删除迭代器所指的元素，并返回下一个迭代器		
		ma.erase(beg,end)   删除[beg,end)区间所有元素，返回下一个元素的迭代器
		ma.erase(keyelem)   删除容器中key为keyelem的对组 
		(6)查找 
		ma.find(key)    查找key是否存在 存在返回该元素的迭代器，不存在返回 end() 
		时间复杂度O(logn) 
		ma.count(keyelem) 返回容器中key为keyelem的对组个数 
		ma.lower_bound(keyelem) 返回key>=keyelem的第一个元素的迭代器 
		ma.upper_bound(keyelem)  返回key>keyelem的第一个元素的迭代器
		ma.equal_range(keyelem)  返回容器中key=keyelem的上下限的两个迭代器  ***
*/							//		上限  upper_bound  下限 lower_bound 
/*
		equal返回后数据访问
		pair<map<int,int>::iterator,map<int,int>::iterator>pos=ma.equal_range(3)
		
		cout<<pos.first->first<<" " <<pos.first->second<<endl; 
		cout<<pos.second->first<<" " <<pos.second->second<<endl;
		
		
		//auto 访问
		for(auto [k,v] : mp){ //仅可访问无法修改 
			cout<<k<<" "<<v<<endl;
		}
		for(auto &[k,v] : mp){ //可以访问和修改 
			k++;
			v++; 
			cout<<k<<" "<<v<<endl;
		}
*/
#include<iostream>
#include<map>
using namespace std;
int main(){		
	return 0;
}		 
