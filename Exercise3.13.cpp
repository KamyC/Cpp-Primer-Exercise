/*exercise 3.13:
读一组整数到 vector 对象，计算并输出每对相邻元素的和。如果读入元素个数为奇数，则提示用户最后一个元素
没有求和，并输出其值。然后修改程序：头尾元素两两配对（第一个和最后一个，第二个和倒数第二个，以此类推），
计算每对元素的和，并输出。
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int> vec;
	int i;
	while (cin >> i){
		vec.push_back(i);
	}
	int n =1;
	cout << vec.size() << endl;
	if (vec.size() % 2 != 0){
		while (n < vec.size()){
			cout << vec[n]+vec[n-1]<< endl;
			n += 2;
		}
		cout << "最后一个元素没有求和" << endl;

	}
	else{
		while (n < vec.size()){
			cout << vec[n] + vec[n - 1] << endl;
			n += 2;
		}
	}
	int low = 0;
	int high = vec.size()-1;
	if (vec.size() % 2 != 0){
		while (low<high)
		{
			cout << vec[low] + vec[high] << endl;
			low++;
			high--;
		}
		cout << vec[(high + 2) / 2] << endl;
	}
	else{
		while (low<high)
		{
			cout << vec[low] + vec[high] << endl;
			low++;
			high--;
		}
	}

	 
	return 0;
	
}
	
