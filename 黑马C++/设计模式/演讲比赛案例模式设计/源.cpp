#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<functional>
#include<deque>
#include<random>
#include<time.h>

using namespace std;

//选手类
class Player {
public:
	string name;
	int Score[3]{ 0 };

};

void CreatePlayer(map<int, Player>& p, vector<int>& v) {
	string Name = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < 24; i++) {
		Player pl;
		pl.name = "选手";
		pl.name += Name[i];
		int Uid = 100 + i;
		p.insert({ Uid,pl });//保存选手信息
		v.push_back(Uid);
	}
}
 
void SetRandom(vector<int>& v) {
	default_random_engine ran(time(NULL));   //设置随机种子
	shuffle(v.begin(), v.end(), ran);
}

void SetScore(int trun, vector<int>& In, map<int, Player>& p, vector<int>& result) {
	//分数（排序），编号
	multimap<int, int, greater<int>>MyGroup; //greater int类型 排序
	int groupindex = 0;
	
	srand((unsigned int)time(NULL));
	for (auto a : In) {
		//10个评委打分
		deque<int>Sco;
		for (int i = 0; i < 10; i++) {
			int s = rand() % 40 + 60;
			Sco.push_back(s);
		}
		sort(Sco.begin(), Sco.end());
		//去除最高和最低分
		Sco.pop_front();
		Sco.pop_back();
		//求平均分
		int avg = accumulate(Sco.begin(), Sco.end(), 0);
		avg /= Sco.size();
		p[a].Score[trun - 1] = avg;
		//把当前选手编号放入mygroup中 分组
		MyGroup.insert({ avg,a });
		groupindex++;
		if (groupindex % 6 == 0) {
			int numindex = 0;
			for (auto &[k,v] : MyGroup) { //C++17
				//选择前三个
				if (numindex >= 3) {
					break;
				}
				result.push_back(v);
				numindex++;
			}
			MyGroup.clear();
		}
	}
}

void ShowWinPlayer(int trun, vector<int>& v, map<int, Player>& p) {
	cout << "第" << trun << "轮晋级:" << endl;
	for (auto a : v) {
		cout << "姓名：" << p[a].name << "成绩：" << p[a].Score[trun - 1] << endl;
	}
}


int main() {
	//定义map容器 根据编号保存选手信息
	map<int, Player>MyPlayer;

	//第一轮参赛列表 24->12
	vector<int>v1;


	//第二轮参赛列表  12->6
	vector<int>v2;


	//第三轮参赛列表 6->3
	vector<int>v3;


	//前三名 
	vector<int>v4;
	/*--------------第一轮比赛-------------------*/
	//创建选手 
	CreatePlayer(MyPlayer, v1);

	//抽签
	SetRandom(v1);
	//打分
	SetScore(1,v1, MyPlayer,v2);
	//晋级名单
	ShowWinPlayer(1, v2, MyPlayer);

	/*--------------第二轮比赛-------------------*/
	//抽签
	SetRandom(v2);
	//打分
	SetScore(2, v2, MyPlayer, v3);
	//晋级名单
	ShowWinPlayer(2, v3, MyPlayer);

	/*--------------第三轮比赛-------------------*/
	//抽签
	SetRandom(v3);
	//打分
	SetScore(3, v3, MyPlayer, v4);
	//晋级名单
	ShowWinPlayer(3, v4, MyPlayer);

	return 0;
}