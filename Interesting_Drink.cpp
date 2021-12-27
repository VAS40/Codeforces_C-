#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int q;cin>>q;
    int x;
    while(q--){
        cin>>x;
        int y = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        cout<<y<<endl;
    }
}

int main(){
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}