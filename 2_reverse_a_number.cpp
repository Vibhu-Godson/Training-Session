#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Code By VibhuGodson
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        int n; cin>>n;
        int ans=0;
        while(n>0){
            ans=ans*10+(n%10);
            n/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}