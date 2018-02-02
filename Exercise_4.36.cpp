#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 4.36:
重写程序输出 ia 数组的内容，要求在外层循环中不能使
用 typedef 定义的类型。
*/
int main(){
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (int i = 0; i != 3; i++){
		for (int j = 0; j != 4; j++){
			cout << ia[i][j] << endl;
		}
	}
	return 0;
}