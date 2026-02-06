#include<iostream>
using namespace std;
const int N = 1003;
int Hash[N] = { 0 };
struct queue {
	int data[N];
	/*动态	int *data;*/
	int head, rear;//头尾指针

	bool init() {  //初始化
		head = rear = 0;
		return true;
		/*动态*/
//		Q.data = (int *)malloc(N*sizeof(int));
//		if (!Q.data)
//			return false;
//		else
//		return true;
	}
	int size(){
		return (rear - head + N) % N;
	}
	bool empty() {
		if (size() == 0)
			return true;
		else
			return false;
	}
	bool push(int e) {
		if ((rear + 1) % N == head)  //队满
			return false;
		data[rear] = e;
		rear = (rear + 1) % N;
		return true;
	}
	bool pop(int& e) {
		if (head == rear)  //队空
			return false;
		e = data[head];
		head = (head + 1) % N;
		return true;
	}
	int front() {
		return data[head];
	}
}Q;
int main() {
	Q.init();
	int m, n;
	cin >> m >> n;
	int cont = 0;
	while (n--) {
		int en;
		cin >> en;
		if (!Hash[en]) {
			++cont;
			Q.push(en);
			Hash[en] = 1;
			while (Q.size() > m) {
				int temp;
				Q.pop(temp);
				Hash[temp] = 0;
			}
		}
	}
	cout << cont << endl;
	return 0;
}