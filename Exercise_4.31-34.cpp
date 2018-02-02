#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	/*
	Exercise 4.31:
	编写程序从标准输入设备读入字符串，并把该串存放在字
	符数组中。描述你的程序如何处理可变长的输入。提供比
	你分配的数组长度长的字符串数据测试你的程序。
	*/
	string str;
	cin >> str;
	size_t char_length = 10;
	if (str.length() > char_length){
		char_length = str.length();
		char *p = new char[char_length];
		for (string::size_type i = 0; i != str.length(); i++){
			*p = str[i];
			p++;
		}
		p--; 
		cout << *p << endl;
	}
	else{
		char *p = new char[char_length];
		for (int i = 0; i != str.length(); i++){
			*p = str[i];
			p++;
		}
		p--;
		cout << *p << endl;
}
		/*
		Exercise 4.32:
		编写程序用 int 型数组初始化 vector 对象。
		*/	
		const size_t arr_size = 10;
		int arr[arr_size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		vector<int> vec(arr, arr + arr_size);//用数组初始化vector
		cout << vec[0] << endl;
		/*
		Exercise 4.33:
		编写程序把 int 型 vector 复制给 int 型数组。*/
		vector<int>vec_2 = { 1, 2, 3, 4, 5, 6 };
		int *pInt=new int[vec_2.size()];
		for (vector<int>::size_type i = 0; i != vec_2.size(); i++){
			 *pInt= vec_2[i];
			 pInt++;
		}
		cout << *(--pInt) << endl;
		/*
		Exercise 4.34:
		编写程序读入一组 string 类型的数据，并将它们存储在
		vector 中。接着，把该 vector 对象复制给一个字符指
		针数组。为 vector 中的每个元素创建一个新的字符数
		组，并把该 vector 元素的数据复制到相应的字符数组
		中，最后把指向该数组的指针插入字符指针数组。
		*/
		string str_2;
		vector<string> vec_str;
		do{
			cin >> str_2;
			vec_str.push_back(str_2);
		} while (cin.get()!='\n');
		char *pp=new char[];
		int count = 0;
		for (vector<int>::size_type i = 0; i != vec_str.size(); i++){
			for (size_t j = 0; j != vec_str[i].size(); j++){
				*pp = vec_str[i][j];
				pp++;
				count++;
			}
		}
		pp -= count;
		cout << *pp << endl;
		return 0;
	
}