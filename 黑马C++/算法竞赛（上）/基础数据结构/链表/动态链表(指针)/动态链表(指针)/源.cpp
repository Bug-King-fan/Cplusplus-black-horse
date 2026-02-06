/*动态链表*/
/*洛谷P1996约瑟夫问题*/
#include<iostream>
using namespace std;
typedef int elemtype;
typedef struct Node {  //创建链表结构
	elemtype data;
	Node* next;
};
int main() {
	int n, m;
	cin >> n >> m;
	Node* head, * p, * now, * pre;
	head = new Node;
	head->data = 1;
	head->next = NULL;
	now = head;
	for (int i = 2; i <= n; i++) {
		p = new Node;
		p->data = i;
		p->next = NULL;
		now->next = p;
		now = p;
	}
	now->next = head;//循环链表

	now = head;
	pre = head;
	while ((n--) > 1) {
		for (int i = 1; i < m; i++) {
			pre = now;
			now = now->next;
		}
		cout << now->data << " ";
		pre->next = now->next;  //删除节点
		delete now;
		now = pre->next;
	}
	cout << now->data << endl;
	delete now;
	return 0;
}