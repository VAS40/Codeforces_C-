#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

vector<int> arr;


ll check(ll n){
    ll ans = lower_bound(arr.begin(),arr.end(),n)-arr.begin();
    if(ans==arr.size()){
        ll k = arr.size();
        ll term = (3*k*(k+1))/2 - k;
        arr.push_back(term);
        while( term <= n){
            k++;
            term = (3*k*(k+1))/2 - k;
            arr.push_back(term);
        }
    }
    ans = lower_bound(arr.begin(),arr.end(),n)-arr.begin();
    if(arr[ans]>n && arr[ans-1]<=n) return ans-1;
    return ans;
}
void solve(){
    ll n;cin>>n;
    ll s = 0;
    while(true){
        ll ans = check(n);
        if(ans == 0) break;
        s ++;
        n -= max(2,arr.at((ans)));
    }
    cout<<s<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    arr.push_back(0);
    while(t--){
        solve();
    }
}