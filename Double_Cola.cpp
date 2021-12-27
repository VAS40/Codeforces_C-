#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    ll n,x;
    cin>>n;
    x = 1;
    while(x*5<n){
        n-= (x*5);
        x*=2;
    }
    n = (n+x-1)/x;
    switch(n){
        case 1:
            cout<<"Sheldon"<<endl;
            break;
        case 2:
            cout<<"Leonard"<<endl;
            break;
        case 3:
            cout<<"Penny"<<endl;
            break;    
        case 4:
            cout<<"Rajesh"<<endl;
            break;
        case 5:
            cout<<"Howard"<<endl;
            break;    
    }
}

int main(){
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}