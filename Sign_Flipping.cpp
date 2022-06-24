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
    int n;cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i%2){
            cout<<abs(x)<<' ';
        }else{
            cout<<abs(x)*-1<<' ';
        }
    }
    cout<<endl;
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