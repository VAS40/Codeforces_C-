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
    int a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int x = min(a[0][2],a[1][1]);
    int y = min(a[0][0],a[1][2]);
    int z = max(0,min(a[0][1],a[1][2]-y-(a[0][2]-x)));
    cout<<2*(x-z)<<endl;
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