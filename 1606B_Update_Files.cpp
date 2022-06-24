#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans = 0;
    if(k<n){
        ll a = 1;
        while(a<k){
            ans++;
            a*=2;
        }
        n-=a;
        ans+= (n+k-1)/k;
    }else{
        ll a = 1;
        while(a<n){
            ans++;
            a*=2;
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}