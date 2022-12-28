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
    int n,m,g;
    cin>>n>>m>>g;
    vector<int> t(n),a(m);
    int max_t = 0;
    for(int i=0;i<n;i++){
        cin>>t[i];
        max_t = max(max_t,t[i]-(i==0?t[i]:t[i-1]));
    }
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int pos = 0;
    for(auto i:a){
        if(i<=max_t) pos++;
        else break; 
    }
    cout<<min(m,pos)<<endl;
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