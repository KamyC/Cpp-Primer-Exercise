/*
Exercise
7.5:
编写一个函数，该函数具有两个形参，分别为 int 型和
指向 int 型的指针，并返回这两个 int 值之中较大的数
值。考虑应将其指针形参定义为什么类型？
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int bigger(int a, const int &b){
	return a > b ? a : b;
}
int main(){
	cout << bigger(2, 4) << endl;
	return 0;
}