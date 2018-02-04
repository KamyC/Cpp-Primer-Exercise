#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 7.4:
编写一个函数，返回其形参的绝对值。
*/
double abso(int a){
	cout << "call int" << endl;
	return a > 0 ? a : -a;
}
double abso(const float &a){
	cout << "call float" << endl;
	return a > 0 ? a : -a;
}
double abso(const double &a){
	cout << "call double" << endl;
	return a > 0 ? a : -a;
}

int main(){
	cout << abso(-3.14) << endl;

	return 0;
}