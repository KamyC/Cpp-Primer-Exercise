#include<iostream>
#include<string>
#include<vector>
#include <stack> 
#include <queue>
using namespace std;
/*
Exercise 9.42:
编写程序读入一系列单词，并将它们存储在 stack 对象
中。
*/
int main(){
	stack<char> cStack;
	do{
		char a;
		cin >> a;
		cStack.push(a);
	} while (cin.get() != '\n');
	cout << cStack.top() << endl;
	return 0;
}