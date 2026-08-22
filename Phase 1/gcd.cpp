#include<bits/stdc++.h>
using namespace std;

int bruteGcd(int a, int b){
    int result = 1;
    for(int i=1;i<= min(a,b);i++){
        if(a%i==0 && b%i== 0){
            result= i;
        }
    }
    return result;

}


// Recursive method

int gdcRecursive(int a,int b){
    if(b==0){
        return a;
    }
    return gdcRecursive(b,a%b);
}


// iterative approach

int gcdIterative(int a,int b){
    while(b !=0){
        int temp = b;
        b=a%b;
        a = temp;
    }
    return a;


    
}

// LCM using GCD

    long long lcm(int a, int b){
        return ((long long )a/gcdIterative(a,b))*b;
    }



int main(){
    // cout<<bruteGcd(45,80);
    // cout<<gdcRecursive(45,80);
    // cout<<gcdIterative(45,80);

    cout<<lcm(45,80)<<endl;

}