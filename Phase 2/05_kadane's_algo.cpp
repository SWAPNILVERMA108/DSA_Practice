#include<bits/stdc++.h>
using namespace std;

// for max subarray sum 

// it for well if all element are negative 

int maxSubarray(vector<int>& arr ){
    int currSum = arr[0];
    int best =  arr[0];
    for(int i=1;i<arr.size();i++){
        currSum = max(arr[i],currSum + arr[i]);
        best = max(best , currSum);
    }
    return best;

}

// this upper algo only give max subarray sum not index so we use below mentioned algo

pair<int,int> findIndex(vector<int> & arr){
    int currSum =arr[0], best = arr[0];
    int start=0 , bestStart=0 , bestEnd =0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]> currSum + arr[i]){
            currSum = arr[i];
            start = i;

        }else{
            currSum += arr[i];
        }
        if(currSum>best){
            best = currSum;
            bestStart = start;
            bestEnd = i;
        }
    }
    return {bestStart,bestEnd};
}

int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maxSubarray(arr);

    pair<int,int> ans = findIndex(arr);
    cout<<"index is : "<< ans.first<<" , "<<ans.second;

}