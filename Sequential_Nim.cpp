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
    bool p = true;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<n && arr[i]==1) i++;
    if((i%2 && i==n) || (i%2==0 && i!=n)) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}