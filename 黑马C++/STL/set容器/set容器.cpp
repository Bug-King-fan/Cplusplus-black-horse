/*set/multiset����  set��Ԫ�ؼ��Ǽ�ֵ����ʵֵ��
					set��������������ͬ�ļ�ֵ
					�����õ�������set��ֵ
					set�ĵ�������һ��const_iterator
					set�������Զ���key�ź���С���� ����ʽ���� 
					set/multiset�ײ�ʵ���Ǻ����
					multiset ��������ظ���ֵ*/
/*
	(1)����
		set<type>st;
		mulitset<type>mst;
		set(const srt &st); �������� 
	(2)��ֵ
		set<int>st1=st2;
		st1.swap(st2)
	(3)����/ɾ��
		st.insert(elem)
		st.clear()	
		st.erase(iterator) ɾ����������ָ��Ԫ�أ�������һ��Ԫ�ص�λ�� 
		st.erase(beg,end) ɾ������[beg,end)�����Ԫ�أ�������һ��Ԫ�صĵ�����
		st.erase(elem) ɾ������������ֵΪelem��Ԫ��
	(4)��С
		st.empty()
		st.size() 
	(5)����
		st.find(key)���Ҽ�ֵkey�Ƿ���ڣ����ڷ��ظ�Ԫ�صĵ��������������ڣ�����set.end()
		st.count(key) ���Ҽ�key��Ԫ�ظ���
		st.lower_bound(keyelem) ���ص�һ��key>=keyelem��Ԫ�صĵ�����
		st.upper_bound(keyelem) ���ص�һ��key>keyelem��Ԫ�صĵ�����
		st.equal_range(keyelem) ����������key=keyelem�������޵�����������  ***
	(6)�����Զ�����������  ��Ҫ��ָ��������� 
		class my_set_cmp{
			public:
				bool operator(const person &p1,const person &p2){
					if(p1.age<p2.age){  //��С������ 
						return true;  
					}
					else
						return false;
				}
		}; // end class
		set<person,my_set_cmp>s;   //set�º������� 
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
//equal_range()�������޾��� lower_bound  3 �� upper_bound  5
			pair<set<int>::iterator,set<int>::iterator>ret = s1.equal_range(3)
//pair�Ƕ��� 
			if(ret.first!=s1.end()){  //lower_bound
				cout<<"�ҵ�"<<*(ret.first)<<endl;  3
			}
			else{
				cout<<"δ�ҵ�"<<endl;
				}
			if(ret.second!=s1.end()){  //upper_bound
				cout<<"�ҵ�"<<*(ret.second)<<endl;  5
			}
			else{
				cout<<"δ�ҵ�"<<endl;
				}
*/
/*
pair����  ����ֵһ��firstһ��second
		(1)��������
			pair<type1,type2>pa;
			pair<type1,type2>pa = make_pair(elem1,elem2);
			pair<string,int>pa("TOM",6);
		(2)ȡֵ
			cout<<pa.first<<endl;
			cout<<pa.second<<endl;
				 
*/
	return 0
}
