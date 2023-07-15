#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> &nums){
    if(nums.size()==1){
        vector<int> temp = {nums[0]};
        vector<vector<int>> result = {temp};
        return result;
    }

    vector<vector<int>> result;


    for(int i=0;i<nums.size();i++){
        vector<int> restArray;
        for(int j=0;j<nums.size();j++){
            if(j==i){

            }else{
                restArray.push_back(nums[j]);
            }
        }

        vector<vector<int>> temp = permute(restArray);
        for(int j=0;j<temp.size();j++){
            vector<int> isntance = temp[j];
            vector<int> resultInst;
            resultInst.push_back(nums[i]);
            for(int k=0;k<isntance.size();k++){
                resultInst.push_back(isntance[k]);
            }
            result.push_back(resultInst);
        }
    }
    return result;

}

int main()
{
	vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    vector<vector<int>> result = permute(nums);
    for(int i=0;i<result.size();i++){
        vector<int> temp = result[i];
        for(int j=0;j<temp.size();j++){
            cout<<temp[j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}