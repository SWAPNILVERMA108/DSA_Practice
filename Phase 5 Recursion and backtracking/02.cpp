#include<bits/stdc++.h>
using namespace std;


// find subsequence 

void findSubsequence(int idx , vector<int> & arr, vector<int> & current ,vector<vector<int>> & result){
    if(idx==arr.size()){
        result.push_back(current);
        return;
    }

    current.push_back(arr[idx]);
    findSubsequence(idx+1,arr,current,result);
    current.pop_back();
    findSubsequence(idx+1,arr,current,result);
    

}


//subset - iterative bit-mask alternative

vector<vector<int>> subsetBitMask(vector<int> & arr){
    int n = arr.size();
    vector<vector<int>> result;
    for(int mask = 0 ; mask<(1<<n);mask++){
        vector<int>subset;
        for(int i =  0;i<n;i++){
            if(mask & (1<<i)){
                subset.push_back(arr[i]);
            }
        }
        result.push_back(subset);

    }
    return result;
}





    int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> current;
    //vector<vector<int>> result;

    //findSubsequence(0, arr, current, result);
    vector<vector<int>> result = subsetBitMask(arr);

    for (auto &sub : result) {
        cout << "[ ";
        for (int x : sub) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}


