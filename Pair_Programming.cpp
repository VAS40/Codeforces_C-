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
    int k,n,m;cin>>k>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    
    vector<int> arr;
    int i=0;
    int j=0;
    bool p;
    p = true;
    while(p && (i<n || j<m)){
        if(a[i]==0 && i<n){
            k++;
            arr.push_back(a[i]);
            i++;
            continue;
        }
        if(b[j]==0 && j<m){
            k++;
            arr.push_back(b[j]);
            j++;
            continue;
        }
        if(a[i]<=k && i<n){
            arr.push_back(a[i]);
            i++;
            continue;
        }
        if(b[j]<=k && j<m){
            arr.push_back(b[j]);
            j++;
            continue;
        }
        p = false;
    }
    if(p){
        for(auto e:arr){
            cout<<e<<' ';
        }
    }else{
        cout<<-1;
    }
    cout<<endl;
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