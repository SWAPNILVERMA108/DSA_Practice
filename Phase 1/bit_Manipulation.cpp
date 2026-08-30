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


// count no of bits in any binary no 

int countSetBitsBrute(int n){
    int cnt =0;
    while(n){
        cnt += (n & 1);
        n = n>>1;

    }
    return cnt;
}


int countSetBitsOptimal(int n){
    int count =0;
    while(n){
        n= n & (n-1);
        count++;

    }
    return count;
}


// check power of 2 

bool isPowerOfTwo(int n){
    bool check  = n>0 && (n & (n-1))==0;
    if(check){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
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

    cout<<endl<<"count no of 1's int any binary no , so no is : ";
    cout<<countSetBitsBrute(13);

    cout<<endl<<"count no of 1's int any binary no , so no is : ";
    cout<<countSetBitsOptimal(13);


    cout<<endl<<"is give no is power of 2 or not : ";
    cout<<isPowerOfTwo(16);

}