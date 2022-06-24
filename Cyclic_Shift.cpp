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
    ll n,k;cin>>n>>k;
    ll p = -1;
    ll d;
    string s,m;
    m = "";
    cin>>s;
    for(int i=0;i<n;i++){
        if(m<s){
            m = s;
            d = i;
        }else if(m==s){
            p = i-d;
            break;
        }
        s = s.substr(1,n-1) + s[0];
    }
    if(p==-1){
        cout<<(d+(k-1)*n)<<endl;
    }else{
        cout<<(d+(k-1)*p)<<endl;
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