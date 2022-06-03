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
    string s;
    cin>>s;
    int n = s.length();
    int a,b,x;
    int p=0;
    for(int i=n-2;i>=0;i--){
        a = (s[i]-'0');
        b = (s[i+1]-'0');
        x = a+b;
        if(x>=10){
            cout<<s.substr(0,i)<<x<<(i<n-2?s.substr(i+2,n-i-2):"")<<endl;
            return;
        }
    }
    a = (s[p]-'0');
    b = (s[p+1]-'0');
    x = a+b;
    cout<<s.substr(0,p)<<x<<(p<n-2?s.substr(p+2,n-p-2):"")<<endl;
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