#include<bits/stdc++.h>
using namespace std;

void printNTo1B(int n){
    if(n==0){
        return;
    }
    cout<<n<<" "<<endl;
    printNTo1B(n-1);

}

void printNTo1S(int n){
    if(n==0){
        return;
    }
    
    printNTo1S(n-1);
    cout<<n<<" "<<endl;

}

int SumOfN(int n){
    int sum =0;
    if(n==0){
        return 0;
        
    }
    return n + SumOfN(n-1);
}

// factorial of any no 

long long factorial(int n){
    if(n==0 || n==1){
        return 0;
    }
    return n+factorial(n-1);
}


// fibonacci 

int fibonacci(int n ){
    if(n<=1){
        return n;

    }
    return fibonacci(n-1)+ fibonacci(n-2);
}


// Reverse a string using recursion

void revStr(string &str , int left,int right){
    if(left>= right){
        return ;
    }
    swap(str[left],str[right]);

    revStr(str,left+1,right-1);

}

void print1(string & str){
    for(char & x : str){
        cout<<x;
    }


}


// Array recursion : sum of array element

int sumArr(vector<int> & nums,int idx){
    if(idx == nums.size()){
        return 0;

    }
    return nums[idx] + sumArr(nums,idx+1);
}


int main(){
    int n =10;
    // printNTo1S(n);
    // printNTo1B(n);
cout<<SumOfN(n);
cout<<endl;
cout<<factorial(n);
cout<<endl;
cout<<fibonacci(n);
cout<<endl;

string str = "Swapnil";
int left = 0;
int right = str.size()-1;
revStr(str,left,right);
print1(str);

cout<<endl;
vector<int>nums = {1,2,3,4,5,6,7};
cout<<sumArr(nums,0);

}