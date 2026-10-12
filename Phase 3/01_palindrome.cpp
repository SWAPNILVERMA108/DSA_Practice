#include<bits/stdc++.h>
using namespace std;

bool brute(string s){
    string rev = s;
    reverse(rev.begin(),rev.end());
    return s == rev;
}

bool optimal(string & s){
    int left =0;
    int right = s.size()-1;
    while(left<right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}


// valid palindrome ( ignoring all non - alpha numeric)

bool isPalindrome(string & s){
    int left =0;
    int right=s.size()-1;

    while(left<right){
        if(!isalnum(s[left])){
            left++;
            continue;
        }
        if(!isalnum(s[right])){
            right--;
            continue;

        }
        if(tolower(s[left]) != tolower(s[right])){
            return false;
            
        }
        left++;
            right--;
    }
    return true;

}


// reverse a string 

 string reverseString(string &s ){
    int left = 0;
    int right = s.size()-1;
    while(left<right){
        swap(s[left++],s[right]);
    }
    for(char ch : s){
        cout<<ch;
    }
}



int main(){
    string s = " amadam a";
    //cout<<brute(s);
    cout<<endl;

    //cout<<optimal(s);

    cout<<endl;
    //cout<<isPalindrome(s);
    cout<<endl;

    cout<<reverseString(s);

}