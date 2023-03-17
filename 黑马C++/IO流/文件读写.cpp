#include<iostream>
#include<fstream> //文件读写头文件 

using namespace std;

void test1(){
	string filename="E:\\黑马C++\\IO流\\source.txt";
	string filename2="E:\\黑马C++\\IO流\\target.txt";
	//两种方法打开文件： 
	//ifstream ism(filename,ios::in);//只读方式打开文件 
	//ifstream 写文件类 
	ifstream ism;
	ism.open(filename,ios::in);
	//ostream 读文件类 
	ofstream osm(filename2,ios::out | ios::app);//只写方式 
	//ios::app为附加模式不会覆盖原有记录 
	
	if(!ism){
		cout<<"打开失败"<<endl;
		return ;
	}
	//读文件
	char ch;
	//逐个字符读取 
/*
	while(ism.get(ch)){
		cout<<ch;
		osm.put(ch); //用put逐字符写入 
	} 
*/
//优先方式佳！  >>  << 
	string s;
	while(ism>>s){ //以空格或回车为结束标志 
		osm<<s<<endl; //换行需要添加，否则会连起 
	}
	//关闭文件
	ism.close();
	osm.close();
	
}

//二进制文件操作 

class person{
	public:
		person(){
			
		}
		person(int age,int id):age(age),id(id){
			
		}
		void show(){
			cout<<"age"<<age<<" id"<<id<<endl;
		}
		private:
			int id;
			int age;
}; 

void test2(){
	
	person p1(10,20);
	person p2(30,40);
	//将p1 p2写进文件中
	//p1 p2 以二进制形式放在内存中 ！！！
	string filename2="E:\\黑马C++\\IO流\\target.txt";
	ofstream osm(filename2,ios::out | ios::binary);
	//ios::binary 以二进制方式进行读写
	osm.write((char*)&p1,sizeof(person));//二进制方式写文件 且以char*模式读地址
	//.write((char *)地址,对象大小) 
	osm.write((char*)&p2,sizeof(person));
	osm.close();
	
	//读二进制文件
	ifstream ism(filename2,ios::in|ios::binary);
	person p3,p4;
	ism.read((char*)&p3,sizeof(person));//文件读数据
	ism.read((char*)&p4,sizeof(person));
	//.read((char*)地址,要读的大小); 
	
}

//文本模式 可用>>和<<进行读取写入 类似于cin 和 cout  
void test3(){
	/*
	执行此程序之前，必须在和该程序源文件同目录中手动创建一个 in.txt 文件，假设其内部存储的字符串为：
		10 20 30 40 50
	*/
	int x,sum=0;
    ifstream srcFile("in.txt", ios::in); //以文本模式打开in.txt备读
    if (!srcFile) { //打开失败
        cout << "error opening source file." << endl;
        return ;
    }
    ofstream destFile("out.txt", ios::out); //以文本模式打开out.txt备写
    if (!destFile) {
        srcFile.close(); //程序结束前不能忘记关闭以前打开过的文件
        cout << "error opening destination file." << endl;
        return ;
    }
    //可以像用cin那样用ifstream对象
    while (srcFile >> x) {
        sum += x;
        //可以像 cout 那样使用 ofstream 对象
        destFile << x << " ";
    }
    cout << "sum：" << sum << endl;
    destFile.close();
    srcFile.close();
    return;
}

int main(){
	test1();
	//text2();
	return 0;
} 
