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
    int zero,one;
    zero = one = 0;
    for(auto i:s){
        if(i=='0') zero++;
        else one++;
    }
    if(zero==0 || one == 0){
        cout<<s<<endl;
    }else{
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                ans+="10";
                if(i!=s.length()-1 && s[i+1]=='0'){
                    i++;
                }
            }else{
                ans+="10";
            }
        }
        cout<<ans<<endl;
    }
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}