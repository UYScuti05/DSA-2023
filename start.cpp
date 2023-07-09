#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &v){
    set<int> s;
    for(auto it:v){
        s.insert(it);
    }
    vector<int> result;
    for(int i=1;i<=v.size();i++){
        if(s.find(i)!=s.end()){

        }else{
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    vector<int> v = {4,3,2,7,8,2,3,1};
    vector<int> result = solution(v);
    for(auto it: result){
        cout<<it<<endl;
    }
    return 0;
}