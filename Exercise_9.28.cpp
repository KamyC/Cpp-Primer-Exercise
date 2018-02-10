#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;
/*
Exercise 9.28:
编写程序将一个 list 容器的所有元素赋值给一个
vector 容器，其中 list 容器中存储的是指向 C 风格字
符串的 char* 指针，而 vector 容器的元素则是 string
类型。
*/
int main(){
	list<char*> ilist = { "a", "b", "c", "d" };
	vector<string> ivec;
	ivec.assign(ilist.begin(),ilist.end());
	cout << ivec[0] << endl;
	return 0;
}