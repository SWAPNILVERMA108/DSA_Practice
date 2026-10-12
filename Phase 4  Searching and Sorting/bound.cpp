#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> & arr,int x){
    int low = 0 ;
    int high = arr.size();
    while(low<high){
        int mid = low + (high - low )/2;
        if(arr[mid]<x){
            low = mid +1;
        }else{
            high = mid;
        }
    }
    return low;
}


int upperBound(vector<int> & arr ,int x){
    int low = 0 ;
    int high = arr.size();
    while(low<high){
        int mid = low + (high - low )/2;
        if(arr[mid]<=x){
            low = mid +1;
        }else{
            high = mid;
        }
    }
    return low;

}

int main(){
    vector<int> arr= {2,3,6,7,8,12,15};
    int x = 7;
    cout<<"lower bound is : " <<lowerBound(arr,x);
    cout<<endl;

    cout<<"upper bound is : " <<upperBound(arr,x);


    

}