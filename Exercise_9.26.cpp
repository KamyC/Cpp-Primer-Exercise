#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;
/*
Exercise 9.26:
假设有如下 ia 的定义，将 ia 复制到一个 vector 容器
和一个 list 容器中。使用单个迭代器参数版本的 erase
函数将 list 容器中的奇数值元素删除掉，然后将
vector 容器中的偶数值元素删除掉。
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55,
89 };
*/ 
int main(){
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	size_t size = (sizeof(ia) / sizeof(int));
	vector<int> ivec(ia,ia+size);
	list<int> ilist(ia,ia+size);
	for (vector<int>::iterator i = ivec.begin(); i != ivec.end();){
		if ((*i) % 2 == 0){
			i=ivec.erase(i);
			continue;
		};
		i++;
	};
	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); i++){
		if (*i % 2 != 0){
			i=ilist.erase(i);
			--i;
		}
	}
	return 0;
}