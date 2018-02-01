/*
Exercise 4.28:
编写程序由从标准输入设备读入的元素数据建立一个
int 型 vector 对象，然后动态创建一个与该 vector 对
象大小一致的数组，把 vector 对象的所有元素复制给新
数组。
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int> vec = { 1, 2, 3, 4, 5 };
	int *p = new int[5];
	for (vector<int>::size_type i = 0; i != vec.size(); i++){
		*p = vec[i];
		++p;
	};
	p -= vec.size();//point back to the beginning
	
	delete[] p;
	return 0;
}