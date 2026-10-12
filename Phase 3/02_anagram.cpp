#include<bits/stdc++.h>
using namespace std;

bool brute(string s ,string  t){
    if(s.size() != t.size()){
        return false;

    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    return false;

}
int main(){

    string s = "raman";
    string t = "manar";
    cout<<brute(s,t);

}