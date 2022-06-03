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
    int p,n,q,v;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<q;i++){
        cin>>v;
        p = find(arr.begin(),arr.end(),v)-arr.begin();
        cout<<p+1<<"  ";
        rotate(arr.begin(),arr.begin()+p,arr.begin()+p+1);
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