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
    int n;
    string arr[2];
    cin>>n>>arr[1];
    bool p = true;
    arr[0] = arr[1];
    reverse(arr[1].begin(),arr[1].end());
    int t,m;
    for(auto s:arr){
        t = m = 0;
        for(auto i:s){
            if(i=='T'){
                t++;
            }else if(i=='M'){
                m++;
                if(t) t--;
                else p = false;
            }
        }
    }
    cout<<((p && m*3==n)?"YES":"NO")<<endl;
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