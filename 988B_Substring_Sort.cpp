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

bool compare(string a,string b){
    if(a.length()<b.length()){
        return true;
    }else{
        return false;
    }
}
void solve(){
    int n;cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end(),compare);
    bool p = true;
    for(int i=1;i<n;i++){
        if(arr[i].find(arr[i-1])==string::npos){
            p = false;
            break;
        }
    }
    if(p){
        cout<<"YES"<<endl;
        for(auto i:arr) cout<<i<<endl;
    }else{
        cout<<"NO"<<endl;
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