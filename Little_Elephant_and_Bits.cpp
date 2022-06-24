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
    int i = s.find_first_of('0');
    if(i==-1){
        cout<<s.substr(0,s.length()-1)<<endl;
    }else{
        cout<<s.substr(0,i)<<s.substr(i+1,s.length()-i-1)<<endl;
    }
}

int main(){
    IOS;
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}