#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<math.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

void solve(){
    ll n,x;cin>>n>>x;
    vector<ll> arr(n);
    int ans = 0;
    for(int i=0;i<n;i++) cin>>arr[i];
    ll s = 0;
    int i = 0;
    while(i<n && s+arr[i]<=x){
        s+=arr[i];
        i++;
        ans++;
    }
    int prev = 0;
    int k = ans;
    while(i<n){
        if(arr[i]>x) {ans = 0; break;}
        if(k==ans){
            s-=arr[prev];
            k--;
            prev++;
            continue;
        }
        if(s+arr[i]>x){
            s -= arr[prev];
            prev++;
            ans = min(ans,k);
            k--;
        }else{
            s+=arr[i];
            k++;
            i++;
        }
    }
    cout<<(ans>n?n:ans)<<endl;
}

int main(){
    IOS;
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}