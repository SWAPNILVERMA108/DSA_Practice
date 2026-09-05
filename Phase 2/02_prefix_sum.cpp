#include<bits/stdc++.h>
using namespace std;

int rangeSumBrute(vector<int> & arr,int l,int r){
    int sum =0;
    for(int i=l;i<=r;i++){
        sum = sum + arr[i];
    }
    return sum;
}


vector<int>  buildPrefix(vector<int> & arr){
    int n  = arr.size();
    vector<int> prefix(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+arr[i];
    }
    return prefix;
}

int rangeSum(vector<int>& prefix,int l ,int r){
    return prefix[r+1]-prefix[l];
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int l = 2;
    int r = 5;
    cout<<rangeSumBrute(arr,l,r);
    

    //vector<int>prefix =  buildPrefix(arr);

    //cout<<rangeSum(prefix,l,r);
}