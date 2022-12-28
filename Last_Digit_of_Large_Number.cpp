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

int mod4(std::string str){
    int n = str.length();
    int su = 0;
    if(n>2) {
        for(int i=n-2;i<n;i++){
            su = su*10 + (int)(str[i]-'0');
        }
    }else{
        for(auto i:str){
            su = su*10 + (int)(i-'0');
        }
    }
    return su%4;
}
int last_digit(const std::string &str1,std::string str2) {
    if(str2.length() == 1 && str2[0]=='0'){
        return 1;
    }
    int n = str1.length();
    char s = str1[n-1];
    if(s=='1' || s=='5' || s=='6' || s=='0'){
        return (int) (s-'0');
    }
}
void solve(){
    string s;cin>>s;
    cout<<mod4(s)<<endl; 
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