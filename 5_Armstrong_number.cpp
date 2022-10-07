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
        int n;cin>>n;
        int n1=n;
        int ans=0;
        while(n>0){
            int rem=n%10;
            ans+=rem*rem*rem;
            n/=10;
        }
        if(ans!=n1) cout<<"Not ";
        cout<<"Armstrong..!";
    }
    return 0;
}