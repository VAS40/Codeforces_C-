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

bool compare(pair<ll,ll> A, pair<ll,ll> B){
    if(A.second==B.second){
        return A.first<B.first;
    }else if(A.second<B.second){
        return true;
    }
    return false;
}

void solve(){
    long long n,k;cin>>n>>k;
    vector<pair<ll,ll>> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i].first;
    }    
    for(ll i=0;i<n;i++){
        cin>>arr[i].second;
    }
    sort(arr.begin(),arr.end(),compare);
    long long i,atk;
    i = atk = 0;
    while(k>0 && i<n){
        atk+=k;
        arr[i].first-= atk;
        if(arr[i].first<=0){
            while(i<n && arr[i].first<=0){
                i++;
                if(i==n) break;
                arr[i].first-=atk;
            }
        }
        if(i<n){
            k-=arr[i].second;
        }
    }
    cout<<(i<n?"NO":"YES")<<endl;
}

int main(){
    IOS;
    ll t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}