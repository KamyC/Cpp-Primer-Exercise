#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
using namespace std;
/*
Exercise
9.4:
定义一个 list 对象来存储 deque 对象里的元素，该
deque 对象存放 int 型元素。
*/
int main(){
	deque<int> ideque = { 1, 2, 3, 4, 5 };
	list<int> ilist;
	for (deque<int>::size_type i = 0; i != ideque.size(); i++){
		ilist.push_back(ideque[i]);
	}
	return 0;
}