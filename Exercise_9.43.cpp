#include<iostream>
#include<string>
#include<vector>
#include <stack> 
#include <queue>
using namespace std;
/*
Exercise
9.43:
使用 stack 对象处理带圆括号的表达式。遇到左圆括号
时，将其标记下来。然后在遇到右加括号时，弹出 stack
对象中这两边括号之间的相关元素（包括左圆括号）。
接着在 stack 对象中压入一个值，用以表明这个用一对
圆括号括起来的表达式已经被替换。
*/

int main(){
	stack<char> charStack;
	string input; cin >> input;
	string::iterator iter = input.begin();
	while (iter != input.end()){
		if (*iter != ')'){//keep recording the input string until meet ")"
			charStack.push(*iter);
		}
		else{//if meets "(", start to pop out values in the stack until meets '(' while the stack is not empty
			while (charStack.top()!='('&&!charStack.empty()){
				charStack.pop();
			}
			if (charStack.empty()){//if after poping the elements, the stack happens to be empty, report the stack is empty
				cout << "stack is empty" << endl;
			}
			else{//if the stack is not empty, the top should be '('. So pop it out and then push # to show this section is replaced
				charStack.pop();
				charStack.push('#');
			}
		}
		iter++;
	}
	while (!charStack.empty()){//check if the code is right
		cout << charStack.top();
		charStack.pop();
	}
	return 0;
}
