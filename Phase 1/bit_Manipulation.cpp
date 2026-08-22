#include<bits/stdc++.h>
using namespace std;

int andOperation(int a,int b){
    cout<<(a & b);

}

int orOperation(int a,int b){
    cout<<(a|b);
}

int xorOperation(int a, int b){
    cout<<(a^b);
}

int leftShift(int a, int b){
    cout<<(a<<b);
}

int rightShift(int a , int b){
    cout<<(a>>b);
}

int main(){
    andOperation(5,3);
    cout<<endl;
    orOperation(5,3);
    cout<<endl;
    xorOperation(5,3);
    cout<<endl;
    leftShift(5,3);
    cout<<endl;
    rightShift(5,1);
    cout<<endl;

}