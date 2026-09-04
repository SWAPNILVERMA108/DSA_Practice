#include<bits/stdc++.h>
using namespace std;

int maxBruteSum(vector<int> & arr,int k){
    int n = arr.size();
    int best = INT_MIN;
    for(int i=0;i+k<=n;i++){
        int sum =0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        best = max(best,sum);
    } 
    return best;
    
}

int maxSumOptimal(vector<int> & arr,int k){
    int n = arr.size();
    int windowSum=0;
    for(int i=0;i<k;i++){
        windowSum += arr[i];
    }
    int best = windowSum;
    for(int i=k;i<n;i++){
        windowSum += arr[i] - arr[i-k];
        best = max(best,windowSum);

    }
    return best;

}

// Longest subarray with sum <= K

int longestSubarray(vector<int> & arr, int k){
    int n = arr.size();
    int left =0 , best = 0, sum =0;
    for(int right = 0;right < n;right++){
        sum += arr[right];
        while(sum>k){
            sum -= arr[left];
            left++;
        }
        best = max(best, (right-left + 1));
    }
    return best;

}

int main(){


    vector<int> arr = {1,2,3,4,5,6,7,8};
    int k = 3;
    cout<<maxBruteSum(arr,3);
    cout<<maxSumOptimal(arr,3);
    cout<<"Max no of element : "<<longestSubarray(arr,7);

}