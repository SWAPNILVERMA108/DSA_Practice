#include<bits/stdc++.h>
using namespace std;

// row and column operation 

int traversal(vector<vector<int>> & mat){
    int rows = mat.size();
    int cols = mat[0].size();

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;

    }

}

// spiral matrix a

vector<int> spiralOrder(vector<vector<int>> & mat){
    vector<int> result;
    int top =0;
    int bottom = mat.size()-1;
    int left =0;
    int right = mat[0].size()-1;
    while(top <=bottom && left <= right){
        for(int j=left;j<= right;j++){
            result.push_back(mat[top][j]);
        }
        top++;
        for(int i = top; i<= bottom ;i++){
            result.push_back(mat[i][right]);
        }
        right--;


    }
    if(top<=bottom){
        for(int i=right;i>=left;i--){
            result.push_back(mat[bottom][i]);
           
        }
         bottom--;
    }
    if(left<= right){
        for(int i=bottom;i>=top;i--){
            
        }
        left++;
    }
    return result;
}

void print(vector<int> &result){
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "matrix is :"<<endl; 
    traversal(mat);
    cout<<endl;
     vector<int> result1= spiralOrder(mat);
     cout<<"spiral traversal is : ";
     print(result1);
    
    

}
