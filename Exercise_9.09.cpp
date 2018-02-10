#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
using namespace std;
/*
Exercise
9.9:编写一个循环将 list 容器的元素逆序输出。
*/

int main(){
	list<int> ilist = { 1, 2, 3, 4, 5, 6, 7 };
	list<int>::iterator i = ilist.end();
	while (i!= ilist.begin()){
		cout << *(--i) << endl;
	}
	return 0;
}