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

vector<string> Split(string s){
    vector<string> ans;
    string t(1,s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            ans.push_back(t);
            t = s[i];
        }else{
            t += s[i];
        }
    }
    ans.push_back(t);
    return ans;
}

string Say(string s){
    string n = to_string(s.length());
    n += s[0];
    return n;
}

string countAndSay(int n) {
    string temp,k = "1";
    for(int i=1;i<n;i++){
        temp = "";
        for(auto e:Split(k)){
            temp+=Say(e);
        };
        k = "";
        k += temp;
    }
    return k;
}

void solve(){
    cout<<countAndSay(4)<<endl;    
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