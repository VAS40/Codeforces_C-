#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(2*n +1),odd,even;
    for(int i=1;i<=2*n;i++){
        cin>>arr[i];
        if(arr[i]%2) odd.push_back(i);
        else even.push_back(i);
    }
    if(odd.size()%2){
        odd.pop_back();
        even.pop_back(); 
    }else{
        if(odd.size()>0){
            odd.pop_back();
            odd.pop_back();            
        }else{
            even.pop_back();
            even.pop_back();
        }
    }
    for(int i=0;i<odd.size();i+=2){
            cout<<odd[i]<<' '<<odd[i+1]<<endl;
        }
        for (int i = 0; i < even.size(); i+=2)
        {
            cout<<even[i]<<' '<<even[i+1]<<endl;
        } 
}

int32_t main(){
    IOS;
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}