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
    int a,b,c,d;
    cin>>a>>b>>c;
    d = a+b+c;
    if(d%9){
        cout<<"NO"<<endl;
    }else{
        int x = d/9;
        if(min(a,min(b,c))<x){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
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