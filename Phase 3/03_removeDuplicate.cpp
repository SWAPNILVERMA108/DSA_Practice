#include<bits/stdc++.h>
using namespace std;


string removeDuplicate(string & s){
    bool seen[26]={false};
    string result;
    for(char c:s){
        if(!seen[c-'a']){
            seen[c-'a']=true;
            result +=c;

        }
    }
    return result;
}
int main(){
    string s = "appleapinepipe";
    cout<<removeDuplicate(s);

}