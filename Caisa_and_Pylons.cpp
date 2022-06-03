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
    vector<int> arr(n+1,0);
    int ans = 0;
    int s = 0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        s += arr[i-1]-arr[i];
        if(s<0){
            ans+= -s;
            s = 0;
        }
    }
    cout<<ans<<endl;
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