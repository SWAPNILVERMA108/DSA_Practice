#include<bits/stdc++.h>
using namespace std;



// 1. Traversal , Input and output 

void input(vector<int> & arr,int n){
    cout<<"Enter the Element : ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


// 2. Maximum and Minimum

void minMax(vector<int> & arr,int n){
    int mx =arr[0];
    int mn = arr[0];
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
        
    }
    cout<<mn<<endl;
    cout<<mx<<endl;
}


//3. Reverse an array (two pointer approach)

    void reverseArray(vector<int> &arr){
        int left = 0;
        int right = arr.size() -1;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }


    // 4. Frequency counting

    int boundedValue(vector<int> &arr){
        vector<int> freq(15,0);
        for(int x: arr){
            freq[x]++;
        }
        // for(auto i: freq){
        //     cout<<i<<" "<<endl;
        // }

        for(int i=0;i<15;i++){
            cout<<i<<" "<<"->"<<" "<<freq[i]<<endl;
        }
        return 0;

    }

    void unboundedValues(vector<int>& arr){
        unordered_map<int,int>freqMap;
        for(int x : arr){
            freqMap[x]++;   
        }
        for(int i=0;i<15;i++){
            cout<<i<<" "<<"->"<<" "<<freqMap[i]<<endl;
        }
    }

int main(){
    int n = 5;
    vector<int>arr = {2 ,4,2,5,2,1,4,1,5, 7, 9, 10};
    //input(arr,n);
    //minMax(arr,n);

    //reverseArray(arr);

    //boundedValue(arr);
    unboundedValues(arr);

}


