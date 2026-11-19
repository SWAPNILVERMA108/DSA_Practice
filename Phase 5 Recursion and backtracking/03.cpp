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




int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> current;
    vector<bool> used(arr.size(), false);
    vector<vector<int>> result;

    findPermutation(arr, current, used, result);

    for (auto &p : result) {
        for (int x : p) {
            cout << x << " ";
        }
        cout << endl;
    }

    vector<vector<int>> result2;

    permuteSwap(arr, 0, result2);

    cout << "\nIn-place Swapping:\n";

    for (auto &p : result2) {
        for (int x : p) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}