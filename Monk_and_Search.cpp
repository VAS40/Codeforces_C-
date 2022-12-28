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
    int n;cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int q;cin>>q;
    int b,x;
    while(q--){
        cin>>b>>x;
        int m = (b?upper_bound(arr.begin(),arr.end(),x)-arr.begin():lower_bound(arr.begin(),arr.end(),x)-arr.begin());
        cout<<max(0,n-m+1)<<endl;
    }
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