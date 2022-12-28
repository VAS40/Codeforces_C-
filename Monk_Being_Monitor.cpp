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
    map<int,int> mp;
    int x,y,z;
    x = 0;
    y = 1e9;
    for(int i=0;i<n;i++){
        cin>>z;
        mp[z]++;
    }
    for(auto i:mp){
        x = max(x,i.second);
        y = min(y,i.second);
    }
    cout<<(x-y==0?-1:x-y)<<endl;
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