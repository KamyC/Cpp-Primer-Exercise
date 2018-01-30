#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int> vec(10, 1);
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++){
		*i = 0;
	}
	cout << vec[0] << endl;
	//const_interator
	vector<int>::const_iterator it_1 = vec.begin();
	it_1++;//自身的值可以改变	
	//*it_1 = 10; 不能改变其指向元素的值
	cout << *it_1 << endl;
	//const iterator
	const vector<int>::iterator it_2 = vec.begin();
	*it_2 = 1;//可以改变指向元素值
	//it_2++;不能改变自身的值
	cout << *it_2 << endl;
	//无法用cout输出it_1和it_2

	/*Exercise 3.18+3.19+3.20
	1. 编写程序来创建有 10 个元素的 vector 对象。用迭代器
	把每个元素值改为当前值的 2 倍。
	2. 验证习题 3.18 的程序，输出 vector 的所有元素
	3. 解释一下在上几个习题的程序实现中你用了哪种迭代器，
	并说明原因*/

	vector<int> ivec(10, 1);
	for (vector<int>::iterator i = ivec.begin(); i != ivec.end(); i++){
		*i *= 2;
	}
	//输出的时候用const_iterator迭代器，因为这样不会修改i指向元素的值
	for (vector<int>::const_iterator i = ivec.begin(); i != ivec.end(); i++){
		cout << *i << " ";
	}

	return 0;
}