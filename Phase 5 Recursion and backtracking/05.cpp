#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<string> & board, int row , int col , int n){
    // check above column 
    for(int i=0;i<row;i++){
        if(board[i][col]=='q') return false;
    }

    // check upper-left diagonal 

    for(int i  = row-1,  j = col-1; i>=0 && j>=0; i--, j--){
        if(board[i][j]=='q') return false;
    }

    // check upper-right diagonal

    for(int i = row-1, j = col+1; i>=0 && j<n;i--,j++){
        if(board[i][j]=='q'){
            return false;
        }
    }
    return true;
}

void solveNQueen(vector<string> & board , int n , int row, vector<vector<string>> & result){
    if(row == n ){
        result.push_back(board);
        return;
    }

    for(int col = 0 ;col<n;col++){
        if(isSafe(board,row,col,n)){
            board[row][col]='q';
            solveNQueen(board, n, row + 1, result);
            board[row][col]='.';
        
        }
    }
}

void solveNQueenOptimal(int row , int n , vector<string> & board , vector<bool> & cols, vector<bool> & dig1, vector<bool> & dig2 , vector<vector<string>> & result){

    if(row==n){
        result.push_back(board);
        return;
    }

    for(int col = 0 ;col<n;col++){

        int d1 = row-col + n -1 ;
        int d2 = row + col;

        if(cols[col] || dig1[d1] || dig2[d2]) continue;

        board[row][col]='q';
        cols[col] = dig1[d1] = dig2[d2] = true;
        solveNQueenOptimal(row+ 1, n , board, cols, dig1, dig2, result);
        board[row][col]='.';
        cols[col] = dig1[d1] = dig2[d2] = false;


    }

    
}

int main() {
    int n;
    cin >> n;

    vector<string> board(n, string(n, '.'));
    vector<vector<string>> result;

    solveNQueen(board, n, 0, result);

    for (auto &solution : result) {
        for (auto &row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

    cout << "Total Solutions: " << result.size() << endl;

    return 0;
}