#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<utility>
using namespace std;
/*
Exercise 10.9:
编写程序统计并输出所读入的单词出现的次数。
*/

int main(){
	map<string, int> cntMap;
	string input;
	do{
		cin >> input;
		++cntMap[input];
	} while (cin.get() != '\n');
	string searchWord;
	cin >> searchWord;
	cout << cntMap[searchWord] << endl;
	return 0;
}