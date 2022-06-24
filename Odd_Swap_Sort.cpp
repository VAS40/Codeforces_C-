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
    vector<int> arr(n);
    int oddMax = 0 ;
    int evenMax = 0;
    bool p = true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2){
            if(oddMax<=arr[i]){
                oddMax = arr[i];
            }else{
                p = false;
            }
        }else{
            if(evenMax<=arr[i]) evenMax = arr[i];
            else p = false;
        }
    }
    cout<<(p?"YES":"NO")<<endl;
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