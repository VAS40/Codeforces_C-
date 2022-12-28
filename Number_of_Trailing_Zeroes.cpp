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

long zeros(long n) {
    long five = 5;
    long ans = 0;
    for(int i=1;i<30;i++){
        ans += n/five;
        five*=5;
    }
    return ans;
}

void solve(){
    long n;cin>>n;
    cout<<zeros(n)<<endl;
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