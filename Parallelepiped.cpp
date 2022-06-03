#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

void solve(){
    ll x,y,z;
    cin>>x>>y>>z;
    cout<< 4*( x*y + y*z + z*x )/sqrt(x*y*z)<<endl;
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