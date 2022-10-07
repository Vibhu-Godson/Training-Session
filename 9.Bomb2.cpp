#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Code By VibhuGodson
bool checkDigits(int n,int k){
    while(n){
        if(n%10==k) return true;
        n/=10;
    }
    return false;
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int i=1;
        while(i<n){
            if(i%k==0 or checkDigits(i,k)) cout<<"BOMB ";
            else cout<<i<<" "; 
            i++;
        }
    }
    return 0;
}