#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

void solve(){
    ll n,m,k,ans;
    cin>>n>>m>>k;
    ans = 0;
    vector<ll> arr(m+1);
    for(int i=0;i<m+1;i++) cin>>arr[i];
    for(auto i:arr){
        string s = toBinary(i^arr[m]);
        if(count(s.begin(),s.end(),'1')<=k){
            ans++;
        }
    }
    cout<<--ans<<endl;
}

int main(){
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}