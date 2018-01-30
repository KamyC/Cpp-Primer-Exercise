#include<iostream>
#include<stdio.h>
/*exercise 3.14:
读入一段文本到 vector 对象，每个单词存储为 vector中的一个元素。把 vector 对象中每个单词转化为大写字
母。输出 vector 对象中转化后的元素，每八个单词为一行输出
*/
#include<string>
#include<vector>

using namespace std;

int main(){
	vector<string> vec;
	string str;
	do {
		cin >> str;
		vec.push_back(str);
	} while (cin.get() != '\n');
	vector<string>::size_type a = vec.size();
	std::cout << a << endl;
	int i = 0;
	while (i < a){
		for (int j = 0; j < vec[i].size(); j++){
			if (vec[i][j] > 96){
				vec[i][j] -= 32;
			}	
		}
		i++;
	}
	for (int n = 0; n < a;n++){
		std::cout << vec[n]<<" ";
	}

}