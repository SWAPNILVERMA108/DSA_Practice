#include<bits/stdc++.h>
using namespace std;

void input(vector<int> & arr,int n){
    cout<<"Enter the Element : ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 5;
    vector<int>arr(n);
    input(arr,n);

}