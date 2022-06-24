#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

ll count_nine(ll n){
    ll m = 0;
    ll c = 0;
    ll tmp = n;
    while(n>0){
        n/=10;
        m = m*10 + 9;
        c++;
    }
    if(tmp>=m) return c;
    else return c-1;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    ll b9;
    b9 = count_nine(b);
    cout<<a*b9<<endl;
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