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
        int k;
        cin>>k;
        for(int i=1;i<=n;i++){
            if(i%k==0){
                cout<<"BOMB ";
                continue;
            }
            int x=i;
            while(x>0){
                if(x%10==k){
                    cout<<"BOMB ";
                    continue;
                }
                x/=10;
            }
            cout<<i<<" ";
        }
    }
    return 0;
}