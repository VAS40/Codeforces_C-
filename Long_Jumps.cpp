#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    ll ans = 0;
    vector<ll> mp(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n-1;i>=0;i--){
        int j = i;
        ll s = 0;
        while(j<n){
            if(mp[j]){
                s+=mp[j];
                break;
            }else{
                s+=arr[j];
                j+=arr[j];
            }
        }
        mp[i] = s;
        ans = max(ans,s);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}