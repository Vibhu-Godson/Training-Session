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
        int a,b;
        cin>>a>>b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}