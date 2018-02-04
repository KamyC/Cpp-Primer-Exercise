#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 7.6:
编写函数交换两个 int 型指针所指向的值，调用并检验
该函数，输出交换后的值。
*/
void swap(int *&a, int *&b){
	int *temp = b;
	b = a;
	a = temp;
}
int main(){
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}