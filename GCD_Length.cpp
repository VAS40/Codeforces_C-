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
    int a,b,c;
    cin>>a>>b>>c;
    string x,y;
    x = "1";
    y = "";
    for(int i=0;i<a-1;i++) x+="0";
    for(int i=1;i<=(b-c+1);i++) y+="1";
    for(int i=1;i<c;i++) y+="0";
    cout<<x<<" "<<y<<endl;   
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