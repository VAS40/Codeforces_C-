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
    ll n,k;
    cin>>n>>k;
    ll max_e=0,x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>x;
        max_e = max(x,max_e);
        arr[i] = x;
    }
    sort(arr.begin(),arr.end());
    int i= 0;
    while(i<n){
        if(arr[i]!=i) break;
        i++;
    }
    if(k==0){
        cout<<n<<endl;
    }else{
        if(i>max_e) cout<<n+k<<endl;
        else{
            if(find(arr.begin(),arr.end(),(max_e+i+1)/2)==arr.end()){
                cout<<n+1<<endl;
            }else{
                cout<<n<<endl;
            }
        }
    }
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