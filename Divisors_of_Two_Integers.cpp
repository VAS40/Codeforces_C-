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
    int x = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        x = max(x,arr[i]);
        mp[arr[i]]=0;
    }
    sort(arr.begin(),arr.end());
    int y = 0;
    for(auto i:arr){
        if(mp[i]){
            y = max(y,i);
        }else{
            if(x%i){
                y = max(y,i);
            }else{
                mp[i] = 1;
            }
        }
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