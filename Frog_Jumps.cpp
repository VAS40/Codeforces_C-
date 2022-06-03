#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    string s;
    cin>>s;
    s = "R" + s + "R";
    int n,ans,i,j;
    ans = i = j = 0;
    n = s.length();
    while(i<n){
        if(s[i]=='R'){
            j = i+1;
            while(j<n && s[j]!='R') j++;
            ans = max(ans,j-i);
            i = j;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}