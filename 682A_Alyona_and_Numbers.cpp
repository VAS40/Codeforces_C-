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
    ll n,m;
    cin>>n>>m;
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        ans += (i+m)/5 - (i/5);
    }
    cout<<ans<<endl;
}

// (n//5)*m+(n%5)*(m//5)+max(0,(m%5)+(n%5)-4)  formula
// //indicating integer division.
int main(){
    IOS;
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}