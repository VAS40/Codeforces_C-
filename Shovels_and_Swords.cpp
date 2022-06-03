#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    ll x,y,z;
    x = max(a,b);
    y = min(a,b);
    z = x-y;
    if(z>=y){
        cout<<y<<endl;
    }else{
        a = y-z;
        cout<<z+ 2*(a/3) + (a%3>1?1:0)<<endl;
    }
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}