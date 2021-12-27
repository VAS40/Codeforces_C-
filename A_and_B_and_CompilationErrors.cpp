#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int> mp;
    int b;
    int x,y,z;
    x = y = z = 0;
    for(int i=0;i<n;i++){
        cin>>b;
        x+=b;
    }
    for(int i=0;i<n-1;i++){
        cin>>b;
        y+=b;
    }
    for(int i=0;i<n-2;i++){
        cin>>b;
        z+=b;
    }
    cout<<x-y<<endl;
    cout<<y-z<<endl;
}

int main(){
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}