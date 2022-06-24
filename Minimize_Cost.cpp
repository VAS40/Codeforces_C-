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
    int n,k;cin>>n>>k;
    vector<ll> arr(n);
    ll s,p,m,cur;
    s = p = m = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]>0) p+= arr[i];
        if(arr[i]<0) m+= arr[i];
        if(i-k<0) continue;
        cur = arr[i-k];
        if(cur>0){
            m+=cur;
            if(m>0){
                s+=m;
                m=0;
            }
            p-=cur;
        } 
    }
    cout<<s+abs(p+m)<<endl;
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