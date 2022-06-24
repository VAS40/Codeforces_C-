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
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<ll> diff;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            diff.insert(abs(arr[j]-arr[i]));
        }
    }
    ll gcd = 0;
    for(auto i:diff){
        gcd = __gcd(gcd,i);
    }
    cout<<(gcd==0?-1:gcd)<<endl;
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