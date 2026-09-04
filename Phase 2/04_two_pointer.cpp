#include<bits/stdc++.h>
using namespace std;

pair<int,int> twoPointerOptimal(vector<int> & arr , int target){
    
    int left = 0;
    int right = arr.size()-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum == target){
            return {left,right};
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int target = 11;
    pair<int,int> ans= twoPointerOptimal(arr,target);
    cout<<ans.first<<" , "<<ans.second;

}