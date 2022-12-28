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

vector<int> binary(int n){
    vector<int> ans;
    if(n==0){
        ans.push_back(0);
        return ans;
    }
    while(n>0){
        ans.push_back(n%2);
        n/=2;
    }
    return ans;
}

void solve(){
    int n;cin>>n;
    vector<int> ones(11,0),zeroes(11,1),arr(n),x;
    int z = 12;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        x = binary(arr[i]);
        z = min(z,(int)x.size());
        for(int j=0;j<x.size();j++){
            if(x[j]==1) ones[j] = 1;
            else zeroes[j] = 0;
        }
    }
    int ma,mi,po;
    po = 1;
    ma = mi = 0;
    for(int i=0;i<11;i++){
        if(ones[i]==1) ma+=po;
        po*=2;
    }
    po = 1;
    for(int i=0;i<z;i++){
        if(zeroes[i]==1){
            mi+=po;
        }
        po*=2;
    }
    cout<<ma-mi<<endl;
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