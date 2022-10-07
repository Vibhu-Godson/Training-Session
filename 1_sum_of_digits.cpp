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
        int n;
        cin>>n;
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }
        cout<<endl;
        cout<<sum<<endl;
    }
    return 0;
}