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
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b and a>c) cout<<a;
        else if(b>a and b>c) cout<<b;
        else cout<<c;

        // Using Ternary Oerator
        // cout<<(a>b?(a>c?a:c):(b>c?b:c));
    }
    return 0;
}