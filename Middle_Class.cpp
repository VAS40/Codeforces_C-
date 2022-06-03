#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n,x;cin>>n>>x;
    vector<ll> arr(n+1,0);
    ll ans,avg,sum;
    sum = 0;
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int i=n;
    for( ;i>0;i--){
        sum+=arr[i];
        avg = (sum)/(n-i+1);
        if(avg<x) break;
    }
    cout<<n-i<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}