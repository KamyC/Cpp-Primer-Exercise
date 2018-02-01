#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 4.16:
下列程序段实现什么功能？
*/
int main(){
	int i = 42, j = 1024;
	int *p1 = &i, *p2 = &j;
	*p2 = *p1 * *p2;//42*1024
	*p1 *= *p1;//42*42
	cout << *p2 << endl;
	cout << *p1 << endl;
	return 0;
}