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

int solution(string roman) {
    map<int,int> mp;
    int ans = 0;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    int i,n = roman.length();
    if(n==1) return mp[roman[0]];
    for(i=0;i<n-1;i++){
        if(mp[roman[i]]<mp[roman[i+1]]){
            ans+=mp[roman[i+1]]-mp[roman[i]];
            i++;
        }else{
            ans+=mp[roman[i]];
        }
    }
    return (mp[roman[n-1]]<=mp[roman[n-2]]?ans+mp[roman[n-1]]:ans);
}

void solve(){
    
}

int main(){
    IOS;
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solution(s)<<endl;
    }
}