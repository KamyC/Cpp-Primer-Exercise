#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise
6.20:
编写程序从标准输入读入一系列 string 对象，直到同一
个单词连续出现两次，或者所有的单词都已读完，才结束
读取。请使用 while 循环，每次循环读入一个单词。如
果连续出现相同的单词，便以 break 语句结束循环，此
时，请输出这个重复出现的单词；否则输出没有任何单词
连续重复出现的信息。
*/
string check(vector<string> str_array){
	vector<string>::size_type i = 1;
	while (i != str_array.size()){
		if (str_array[i] == str_array[i - 1]){
			return str_array[i];
			break;
		}
		else{
			i++;
		}
	}
	return "No Repeated Words";
}
int main(){
	vector<string> str_array = { "now", "know", "co", "cow", "know", "now" };
	cout << check(str_array) << endl;
	return 0;
}