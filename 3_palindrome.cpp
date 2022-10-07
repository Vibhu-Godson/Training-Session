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
        int m=0,n1=n;
        while(n>0){
            m=m*10+(n%10);
            n/=10;
        }
        if(m!=n1) cout<<"Not ";
        cout<<"Palindrome";
    }
    return 0;
}