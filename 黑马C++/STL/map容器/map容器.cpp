/*map/multimap����
					map����Ԫ�ض���pairͬʱӵ����ʵֵ�ͼ�ֵ
					oair�ĵ�һԪ�ر���Ϊ��ֵ���ڶ�Ԫ����Ϊʵֵ
					map������������Ԫ����ͬ�ļ�ֵ
					����ʹ�õ������ı�map�ļ�ֵ��ʵֵ
					map�ڲ����Զ�����
					multimap ��ֵ�����ظ�
*/
/*
	(1)����
		map<type1,type2>ma;
		map(const map &mp); ��������
	(2)��ֵ
		map<int,int>mp=ma;
		ma.swap(mp); 
	(3)��С
		ma.size()
		ma.empty()
	(4)map����Ԫ�ز���
		��ma.insert(pair<type1,type2>(elem1,elem2)) ����������Ԫ�أ�����pair<iterator,bool>   pair ���� 
		��ma.insert(make_pair(elem1,elem2));
		��ma.insert(map<type1,type2>::value_type(elem1,elem2))
		��ma[key]=value;   ���޶�Ӧ���ݣ���keyȡ���ʲ����ڵ�key�����������Զ��Ѳ����ڵ�key�ӵ�map��valueΪ0
			 
	ע�⣺��ӡȡֵ
		map<int,int>::iterator it = map.begin()
		cout<<it->first<<" "<<it->second<<endl; 
		
	(5)ɾ��
		ma.clear()
		ma.erase(iterator)  ɾ����������ָ��Ԫ�أ���������һ��������		
		ma.erase(beg,end)   ɾ��[beg,end)��������Ԫ�أ�������һ��Ԫ�صĵ�����
		ma.erase(keyelem)   ɾ��������keyΪkeyelem�Ķ��� 
		(6)���� 
		ma.find(key)    ����key�Ƿ���� ���ڷ��ظ�Ԫ�صĵ������������ڷ��� end() 
		ʱ�临�Ӷ�O(logn) 
		ma.count(keyelem) ����������keyΪkeyelem�Ķ������ 
		ma.lower_bound(keyelem) ����key>=keyelem�ĵ�һ��Ԫ�صĵ����� 
		ma.upper_bound(keyelem)  ����key>keyelem�ĵ�һ��Ԫ�صĵ�����
		ma.equal_range(keyelem)  ����������key=keyelem�������޵�����������  ***
*/							//		����  upper_bound  ���� lower_bound 
/*
		equal���غ����ݷ���
		pair<map<int,int>::iterator,map<int,int>::iterator>pos=ma.equal_range(3)
		
		cout<<pos.first->first<<" " <<pos.first->second<<endl; 
		cout<<pos.second->first<<" " <<pos.second->second<<endl;
		
		
		//auto ����
		for(auto [k,v] : mp){ //���ɷ����޷��޸� 
			cout<<k<<" "<<v<<endl;
		}
		for(auto &[k,v] : mp){ //���Է��ʺ��޸� 
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
