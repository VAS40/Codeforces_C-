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
    ll n,d;
    cin>>n>>d;
    ll max_pos = max(n,(n/2 + 1)*(n-n/2));
    cout<<(d>max_pos?"NO":"YES")<<endl;    
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