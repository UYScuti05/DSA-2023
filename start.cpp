#include <bits/stdc++.h>
using namespace std;

void solution(vector<char> &s){
    for(int i=0;i<s.size()/2;i++){
            char temp = s[i];
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = temp;
        }
}

int main()
{
    vector<char> v = {'H','E','L','L','O','O'};
    solution(v);
    for(auto it: v){
        cout<<it<<endl;
    }
    return 0;
}