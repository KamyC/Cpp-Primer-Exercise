#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise
6.12:
编写一个小程序，从标准输入读入一系列 string 对象，
寻找连续重复出现的单词。程序应该找出满足以下条件的
单词的输入位置：该单词的后面紧跟着再次出现自己本
身。跟踪重复次数最多的单词及其重复次数。输出重复次
数的最大值，若没有单词重复则输出说明信息。例如，如
果输入是：
how, now now now brown cow cow
则输出应表明“now”这个单词出现了三次。
*/
int check(vector<string> str){
	int sum = 1;
	int max = 1;
	vector<string>::size_type i = 1;
	while (i<str.size())
	{
		if (str[i] == str[i - 1]){
			sum += 1;
			i++;
			cout << "==" << endl;
		}
		else if (str[i] != str[i - 1]){
			max = max<sum ? sum : max;
			i++;
			sum = 1;
			cout << "!=" << endl;
		}
	}
	return sum>max ? sum : max;
}
int main(){
	string str;
	vector<string> str_array;
	vector<string>::size_type i = 0;
	do{
		cin >> str;
		str_array.push_back(str);
		i++;
	} while (cin.get() != '\n');
	cout<<check(str_array)<<endl;
	return 0;
}