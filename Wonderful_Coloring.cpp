#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    map<char,int> mp;
    int ans = 0;
    for(auto i:s){
        mp[i]++;
        if(mp[i]>2){
            continue;
        }
        ans++;
    }
    cout<<ans/2<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve(); 
}