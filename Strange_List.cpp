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
    ll n,x,ans = 0;
    cin>>n>>x;
    vector<ll> arr(n+1,0),count(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]%x==0){
            ll tmp = arr[i];
            while(tmp%x==0){
                count[i]++;
                tmp = tmp/x;
            }
        }
        ans += arr[i];
    }    
    count[0] = 1e5;
    ll id = min_element(count.begin(),count.end()) - count.begin();
    ans = ans*(count[id]+1);
    for(int i=1;i<id;i++){
        ans+=arr[i];
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