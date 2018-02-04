#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 7.28:
编写函数，使其在第一次调用时返回 0，然后再次调用时
按顺序产生正整数（即返回其当前的调用次数）。
*/
int callCnt(int &i){
	return ++i;
}
int main(){
	int i = 0;
	cout << callCnt(i) << endl;
	cout << callCnt(i) << endl;
	return 0;
}