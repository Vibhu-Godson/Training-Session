// check if n could be sum of 2 prime numbers 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        int n;cin>>n;
        bool ans=false;
        for(int i=0;i<=n/2 ;i++){
            if(isPrime(i) and isPrime(n-i)) {
                ans=true;
                cout<<i<<" "<<n-i<<endl;
            }
        }
        if(!ans) cout<<-1<<endl;
    }
    return 0;
}