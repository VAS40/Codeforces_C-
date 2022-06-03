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
    int n;cin>>n;
    vector<int> arr(n),check(n+1,0);
    check[0] = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        while(arr[i]>n){
            arr[i] /= 2;
        }
        check[arr[i]]+=1;
    }
    for(int i=n;i>0;i--){
        if(check[i]<1){
            cout<<"NO"<<endl;
            return;
        }

        if(check[i]>1){
            check[i/2] += check[i]-1;
        }
    }
    cout<<"YES"<<endl;
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