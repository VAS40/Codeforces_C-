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
    map<int,int> mp;
    bool p = false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]]==2 && arr[i-1]!=arr[i]) p = true;
        if(mp[arr[i]]>2) p = true;
    }
    cout<<(p?"YES":"NO")<<endl;    
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}