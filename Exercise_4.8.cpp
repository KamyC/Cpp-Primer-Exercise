#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 4.8:
编写程序判断两个数组是否相等，然后编写一段类似的程
序比较两个 vector。
*/
int main(){
	const size_t arr_length = 4;
	int a[arr_length] = { 1, 2, 3, 4 };
	int b[arr_length+1] = {1,2,3,4,5};	
	if (sizeof(a) / sizeof(int) != sizeof(b) / sizeof(int)){
		cout << "Not Equal" << endl;
	}
	else {
		for (size_t i = 0; i != arr_length; i++){
			if (a[i] != b[i]){
				cout << "Not Equal" << endl;
				break;
			}
		}
	}
	
	vector<int> vec_a(10, 1);
	vector<int> vec_b(10,2);
	if (vec_a.size() != vec_b.size()){
		cout << "Not Equal" << endl;
	}
	else{
		for (vector<int>::size_type i= 0; i != vec_a.size(); i++){
			if (vec_a[i] != vec_b[i]){
				cout << "Not Equal" << endl;
				break;
			}
		}
	}
	return 0;

}