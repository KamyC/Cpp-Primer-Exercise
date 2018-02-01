#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*Exercise 4.7:
编写必要的代码将一个数组赋给另一个数组，然后把这段
代码改用 vector 实现。考虑如何将一个 vector 赋给另
一个 vector。
*/
int main(){
	const size_t array_length = 6;
	int a[array_length] = { 1, 2, 3, 4, 5, 6 };
	int b[array_length];
	for (size_t i = 0; i < array_length; i++){
		b[i] = a[i];
	}
	vector<int>vec_a(10, 1);
	vector<int>vec_b(vec_a);

	return 0;
}