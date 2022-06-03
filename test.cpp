#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int sum(int n){
    int ans = 0;
    while(n){
        ans += n%10;
        n/=10;
    }
    return ans;
}
void solve(){
    int n;cin>>n;
    int ans = 10;
    int i=0;
    while(i<n){
        if(sum(ans+9)==10){
            ans+=9;
            i++;
        }else{
            ans+=9;
        }
    }
    cout<<ans<<endl;
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