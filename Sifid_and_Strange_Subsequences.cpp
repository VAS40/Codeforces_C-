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
    vector<int> arr(n);
    int ans = 0;
    int m = 1e9 + 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            m = min(arr[i],m);
        }else{
            ans++;
        }
    }
    sort(arr.begin(),arr.end());
    if(ans == n) cout<<ans<<endl;
    else{
        bool p = true;
        for(int i=1;i<ans;i++){
            if(arr[i]-arr[i-1]<m){
                p = false;
                break;
            }
        }
        cout<<ans+p<<endl; 
    }
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