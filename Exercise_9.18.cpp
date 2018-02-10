#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
using namespace std;
/*
Exercise 9.18:
编写程序将 int 型的 list 容器的所有元素复制到两个
deque 容器中。list 容器的元素如果为偶数，则复制到
一个 deque 容器中；如果为奇数，则复制到另一个 deque
容器里。
*/
int main(){
	list<int> ilist = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	deque<int> aDeque;//store the odd
	deque<int> bDeque;//store the even
	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); i++){
		if ((*i) % 2 != 0){
			aDeque.push_back(*i);
		}
		else {
			bDeque.push_back(*i);
		}
	}
	return 0;
}