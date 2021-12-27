#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n;cin>>n;
    int x,z,k;
    z = 0;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>k;
        mp[k]++;
        if(mp[k]>z){
            z = mp[k];
        }
    }
    x = mp.size();
    cout<<(n==1?0:max(min(z,x-1),min(x,z-1)))<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}