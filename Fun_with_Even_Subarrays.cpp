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
    for(int i=n;i>0;i--) cin>>arr[i];
    int ans = 0;
    int i = 1;
    while(i<n){
        if(arr[i+1]==arr[1]){
            i++;
            continue;
        }
        ans++;
        i *= 2;
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