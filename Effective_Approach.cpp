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
    int n;cin>>n;
    vector<int> arr(n+1);
    int b;
    for(int i=1;i<=n;i++){
        cin>>b;
        arr[b] = i;
    }
    ll x,y;
    x = y = 0;
    int m;cin>>m;
    while(m--){
        cin>>b;
        x += arr[b];
        y += n - arr[b] + 1;
    }
    cout<<x<<' '<<y<<endl;
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