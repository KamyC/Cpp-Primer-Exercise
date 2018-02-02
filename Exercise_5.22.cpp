/*
Exercise 5.22:
编写程序输出的每种内置类型的长度。
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main(){
	cout << sizeof(int) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;
	cout << sizeof(float) << endl;
	return 0;
}