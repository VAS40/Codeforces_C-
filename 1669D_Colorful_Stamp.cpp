#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<math.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

void solve(){
    int n;string s;
    cin>>n>>s;
    int i = 0;
    vector<string> arr;
    while(i<n){
        string a = "";
        while(i<n && s[i]!='W'){
            a+=s[i];
            i++;
        }
        if(a.length()) arr.push_back(a);
        if(s[i]=='W') i++;
    }
    if(arr.size()==0) {cout<<"YES"<<endl;return;}
    for(auto i:arr){
        if(i.find("R")==string::npos || i.find("B")==string::npos) {cout<<"NO"<<endl;return;};
    }
    cout<<"YES"<<endl;
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