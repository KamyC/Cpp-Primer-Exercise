#include<iostream>
#include<utility>
#include<vector>
#include<string>
using namespace std;
/*
Exercise
10.1:
编写程序读入一系列 string 和 int 型数据，将每一组
存储在一个 pair 对象中，然后将这些 pair 对象存储
在 vector 容器里。
*/
typedef pair<string, int> Author;

int main(){

	vector<pair<string, int> > ivec;
	string name;
	int age;
	do{
		cin >> name >> age;
		ivec.push_back(Author(name, age));
	} while (cin.get() != '\n');
	vector<pair<string, int> >::iterator iter = ivec.begin();
	iter += 1;
	cout << (*iter).first << endl;
	return 0;
}