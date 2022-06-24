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
    ll a[3],m;
    cin>>a[0]>>a[1]>>a[2]>>m;
    sort(a,a+3);
    if (a[2]-(a[0]+a[1]+1)<=m)
    {
        if(m<=(a[0]+a[1]+a[2]-3)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
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