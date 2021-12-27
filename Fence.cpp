#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    int ans = 0,sum,j=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++) ans+=arr[i];
    sum = ans;
    for(int i=k;i<n;i++){
        sum -= arr[i-k];
        sum += arr[i];
        if(ans>sum){
            j = i-k+1;
            ans = sum;
        }
    }
    cout<<j+1<<endl;
}

int main(){
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}