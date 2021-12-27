#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    bool p = true;
    if(k*k>n){
        p = false;
    }
    if((n%2 && k%2==0) || (n%2==0 && k%2)){
        p = false;
    }
    cout<<(p?"YES":"NO")<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}