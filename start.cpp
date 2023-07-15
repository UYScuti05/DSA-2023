#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> m;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            m.push(s[i]);
        }else{
            char temp;
            if(s[i]==')'){
                temp = '(';
            }
            if(s[i]=='}'){
                temp = '{';
            }
            if(s[i]==']'){
                temp = '[';
            }
            if(m.size()==0) return false;
            if(m.top()==temp){
                m.pop();
            }else{
                return false;
            }
        }
    }
    if(m.size()==0)return true;
    return false;
}
int main()
{
	string str = "(]";
    cout<<isValid(str);
	return 0;
}