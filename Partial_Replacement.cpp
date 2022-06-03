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
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    int i = s.find_first_of('*');
    int j,ans;
    ans = 1;
    while(true){
        j = min(n-1,i+k);
        for(;i<j && s[j]!='*';j--);
        if(i==j) break;
        ans++;
        i = j;
    }
    cout<<ans<<endl;
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