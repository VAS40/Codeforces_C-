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
    int m,x;
    m = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        if(mp[x]>m){
            m = mp[x];
        }
    }
    cout<<(m>(n+1)/2?"NO":"YES")<<endl;
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