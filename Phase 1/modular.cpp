#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 +7;

int modAdd(int a,int b){
    return (int)(((long long)a + b)%mod);

}

int modSub(int a,int b){
    return (int)((((long long)a-b)%mod+mod)%mod);
}
int main(){
    cout<<modAdd(45,78);
    cout<<modSub(45,78);


}