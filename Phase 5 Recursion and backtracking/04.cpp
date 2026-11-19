#include<bits/stdc++.h>
using namespace std;

void findCombinations(int start , int k , vector<int> & arr, vector<int> & current , vector<vector<int>> & result){
    if(current.size()==k){
        result.push_back(current);
        return;
    }
    for(int i =start ;i<arr.size();i++){
        current.push_back(arr[i]);
        findCombinations(i+1, k  , arr, current, result);
        current.pop_back();
    }
}


// Combination sum--- reuse allowed 

void CombinationSum(int idx , int target ,vector<int> & candidate,  vector<int>  & current ,vector<vector<int>> & result ){
    if(target == 0){
        result.push_back(current);
        return;
    }

    if(idx ==candidate.size() || target<0){
        return ;
    }

    current.push_back(candidate[idx]);
    CombinationSum(idx, target - candidate[idx],candidate,current,result);
    current.pop_back();

    CombinationSum(idx+1,target,candidate,current,result);
}