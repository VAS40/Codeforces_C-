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
    vector<pair<int,int>> arr(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].second>>arr[i].first;
        b[i] = arr[i].second;
    }
    sort(arr.begin(),arr.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(arr[i].second!=b[i]){
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
}

int main(){
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}