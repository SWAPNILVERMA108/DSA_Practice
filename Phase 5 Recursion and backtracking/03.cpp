// permutation

#include<bits\stdc++.h>
using namespace std;


void findPermutation(vector<int>& arr,vector<int> &current , vector<bool>  & used , vector<vector<int>> result){
    if(current.size()==arr.size()){
        result.push_back(current);
        return;

    }
    for(int i = 0 ;i<arr.size();i++){
        if(used[i]){
            continue;
        }
        used[i]=true;
        current.push_back(arr[i]);

        findPermutation(arr,current, used,result);
        current.pop_back();
        used[i]=false;

    }
}



// space optimized approach  --- in place swapping

void permuteSwap(vector<int>& arr, int idx , vector<vector<int>> & result){
    if(idx==arr.size()){
        result.push_back(arr);
        result;
    }

    for(int i=idx ;i<arr.size();i++){
        swap(arr[idx],arr[i]);
        permuteSwap(arr,idx+1,result);
        swap(arr[idx],arr[i]);


    }
}




