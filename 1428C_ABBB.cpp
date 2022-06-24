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
    int a,b;
    a = b = 0;
    for(auto i:s){
        if(i=='A'){
            a++;
        }else{
            if(a){
                a--;
            }else{
                b++;
            }
        }
    }
    cout<<a+b%2<<endl;
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