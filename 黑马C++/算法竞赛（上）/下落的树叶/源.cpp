#include<cstring>
#include<iostream>
using namespace std;

const int maxn = 200;
int sum[maxn];
//怎么建立二叉树，然后在进行一系列复杂的处理，说实话，这个题真没有想到有这么巧妙的技巧，直接采用先序遍历的方式，先对头结点做处理.考虑到题目中的意思数组长度最长为80，一开始，我们从下标为40的执行，array[40]=8,然后递归执行左子树，接着是右子树。整体思路是这样，执行左子树的时候，传入的下标-1,判断当前左子树的头结点的值，然后继续递归调用其左右子树。。。
//读入并建立一棵树，树根的水平位置为p循环每棵树 
void build(int p)
{
    int v;
    cin >> v;
    if (v == -1) return;//读到-1停止
    sum[p] += v;
    //建立左右子树
    build(p - 1);
    build(p + 1);
}
bool init() {
    int v;
    cin >> v;
    if (v == -1) return false;//要不然循环每个case
    memset(sum, 0, sizeof(sum));
    int pos = maxn / 2;//树根的水平位置 
    sum[pos] = v;
    //先序遍历,先左子树,再右子树
    build(pos - 1);
    build(pos + 1);
}
int main() {
    int kase = 0;
    while (init()) {
        int p = 0;
        while (sum[p] == 0) p++; // 找最左边的叶子

        // 开始输出。因为要避免行末多余空格，所以稍微麻烦一点
        cout << "Case " << ++kase << ":\n" << sum[p++];
        while (sum[p] != 0) {
            cout << " " << sum[p];
            p++;
        }
        cout << "\n\n";
    }
    return 0;
}

/*
给一颗二叉树，每个节点都有一个水平位置：左子结点在它的左边一个单位，右子节点在右
边一个单位。从左向右输出每个水平位置的所有节点的权值之和。如图所示，从左到右的三
个位置权和分别为 7,11,3，按照递归（先序）方式输入，用-1 表示空树。
Sample Input
 5 7 -1 6 -1 -1 3 -1 -1
 //树
     5
  7     3
     6
 
 8 2 9 -1 -1 6 5 -1 -1 12 -1 -1 3 7 -1 -1 -1 -1
Sample Output
Case 1: 7 11 3
Case 2: 9 7 21 15
题目的意思是让我们从左到右输出树叶下落的数量
*/