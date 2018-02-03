#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include <assert.h>
using namespace std;
/*
Exercise 6.7:
前面已实现的统计元音的程序存在一个问题：不能统计大
写的元音字母。编写程序统计大小写的元音，也就是说，
你的程序计算出来的 aCnt，既包括 'a' 也包括 'A' 出
现的次数，其他四个元音也一样。
*/
void cntVowel(char val,int &aCnt,int &eCnt,int &iCnt,int &oCnt,int &uCnt){
	switch (val){
	case 'a': 
	case 'A':
		++aCnt;
		cout << "aCnt:" << aCnt << endl; break;
	case 'e': 
	case 'E':
		++eCnt;
		cout << "eCnt:" << eCnt << endl; break;
	case'i':
	case 'I':
		++iCnt;
		cout << "iCnt:" << iCnt << endl; break;
	case 'o':
	case'O': 
		++oCnt;
		cout << "oCnt:" << oCnt << endl; break;
	case 'u':
	case 'U':
		++uCnt;
		cout << "uCnt:" << uCnt << endl; break;
	default:
		break;
	}
};
/*
Exercise 6.8:
修改元音统计程序使其可统计出读入的空格、制表符和换
行符的个数。
*/
void cntOther(char e,int &space,int &tCnt,int &nCnt){
	switch (e){
	case ' ': 
		++space;
		cout << "space: "<<space << endl; 
	case '\t':
		++tCnt;
		cout << "tCnt: "<<tCnt << endl;
	case '\n':
		++nCnt;
		cout << "nCnt: " << nCnt << endl;
		default:
			break;
	}
};
/*
Exercise 6.9:
修改元音统计程序使其可统计以下双字符序列出现的次
数：ff、fl 以及 fi。
*/
void cntDouble(string str){
	int ff_sum = 0, fl_sum = 0, fi_sum = 0;
	int i = 1;
	while (i < str.length()){
		if (str[i] == 'f'&&str[i - 1] == 'f'){
			ff_sum += 1;
			i += 2;
			cout << "ff" << endl;
		}
		else if (str[i] == 'l'&&str[i - 1] == 'f'){
			fl_sum += 1;
			i += 2;
			cout << "fl" << endl;
		}
		else if (str[i] == 'i'&&str[i - 1] == 'f'){
			fi_sum += 1;
			i += 2; 
			cout << "fi" << endl;
		} 
		else{
			i++;
		}
	};
	cout << "ff_sum: " << ff_sum << endl;
	cout << "fl_sum: " << fl_sum << endl;
	cout << "fi_sum: " << fi_sum << endl;
}
int main(){

	//int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//for (size_t i = 0; i < str.length(); i++){
	//	cntVowel(str[i],aCnt,eCnt,iCnt,oCnt,uCnt);
	//}
	string str;
	cin >> str;
	//int space = 0, tCnt = 0, nCnt = 0;
	//for (size_t i = 0; i != str.length(); i++){
	//	cntOther(str[i], space, tCnt, nCnt);
	//}
	cntDouble(str);
	return 0;
}