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
    int n;string s;
    cin>>n>>s;
    int i = 1;
    while(i<n){
        if(s[i]<s[i-1]) {i++;continue;}
        else if(s[i]==s[i-1] && i!=1) {i++;continue;}
        else {i--;break;}
    }
    string a,b;
    a = b = s.substr(0,i+1);
    reverse(b.begin(),b.end());
    cout<<a<<b<<endl;
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