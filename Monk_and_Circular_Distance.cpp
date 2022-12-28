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
    int n;cin>>n;
    vector<double> arr(n);
    double x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arr[i] = sqrt(pow(x,2)+pow(y,2));
    }
    sort(arr.begin(),arr    .end());
    int q;cin>>q;
    while(q--){
        cin>>x;
        cout<<upper_bound(arr.begin(),arr.end(),x)-arr.begin()<<endl;
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