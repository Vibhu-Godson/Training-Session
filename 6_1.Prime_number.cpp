// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// // Code By VibhuGodson
// int main ()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t=1;
//     // cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         bool ans=false;
//         for(int i=2;i<n;i++){
//             if(n%i==0) ans=true;
//             if(ans==true) break;
//         }
//         if(ans) cout<<"Not ";
//         cout<<"Prime..!";
//     }
//     return 0;
// }

// Time complexity of above code is O(n).


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
        bool ans=false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) ans=true;
            if(ans==true) break;
        }
        if(ans) cout<<"Not ";
        cout<<"Prime..!";
    }
    return 0;
}
Time Complexity of above code is O(under-root n)