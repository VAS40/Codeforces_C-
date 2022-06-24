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

ll dis(ll i,ll n){
	int tmp = n-i+1;
	int ans = floor((sqrt(1+8*tmp)-1)/2);
	return ((ans*(ans+1))/2);
}
int main() {
    IOS;
	ll n;cin>>n;
	vector<ll> arr(n+1),sum(n+1,0);
	ll m = -1e9,index;
	for(ll i=1;i<=n;i++){
		cin>>arr[i];
		sum[i] = arr[i]+sum[i-1];
	}
	for(ll i=1;i<=n;i++){
        ll cur = sum[i+dis(i,n)-1]-sum[i-1];
        if(cur>m){
            m = cur;
            index = i;
        }
	}
	cout<<m<<endl;

    return 0;
}