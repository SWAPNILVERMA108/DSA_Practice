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

bool isOdd(int n){
    return (n&1)==1;
    
}

bool checkBit(int n,int i){
    return (n&(1<<i)) !=0;

}

int setBit(int n,int i){
    int set = (n|(1<<i));
    return set;
}

int clearBit(int n,int i){
    int set = (n & ~(1<<i));
    return set;
}

int toggleBit(int n,int i){
    int set = (n ^ (1<<i));
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
    cout<<isOdd(5);
    cout<<endl;
    cout<<"check bit :";
    cout<<checkBit(3,2);
    cout<<endl;
    cout<<"set the i th bit : ";
    cout<<setBit(5,1);
    cout<<endl<<"remove at i th bit : ";
    cout<<clearBit(5,2);

    cout<<endl<<"toggle bit at ith index : ";
    cout<<toggleBit(7,1);


}