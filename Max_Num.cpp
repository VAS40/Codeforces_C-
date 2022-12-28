#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<math.h>
#include<cstring>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

map<int,string> mp;
ll arr[30],p[30];
int maxp = 0;

ll NcR(int n, int r)
{
 
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }

        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }

    else
        p = 1;

    // if our approach is correct p = ans and k =1
    return p;
}

void powerise(){
    ll r = 1;
    for(int i=0;i<30;i++){
        p[i]=r;
        r*=2;
    }
}

string bitter(int n){
    if(n==0) return "0";
    if(n==1) return "1";
    if(mp.find(n)!=mp.end()) return mp[n];
    return (n%2?"1":"0") + bitter(n/2);
}


void sumarrise(int n){
    string s;
    if(mp.find(n)!=mp.end()){
        s = mp[n];
    }else{
        s = bitter(n);
        mp[n]=s;
    }
    maxp = max(maxp,(int)s.length()-1);
    for(int i=0;i<s.length();i++){
        arr[i]+= ((s[i]=='1'?1:0)*p[i]);
    }
}

bool comp(ll a,ll b){
    return (a<=b?true:false);
}

void solve(){
    int n,l,x,ans=0,k=0;
    cin>>n>>l;
    memset(arr,0,sizeof(arr));
    maxp = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        sumarrise(x);
    }
    int c = count(arr,arr+maxp,0);
    if(maxp+1-c<l) {cout<<-1<<endl;return;}
    map<ll,int,greater<ll>> yeah;
    for(int i=0;i<=maxp;i++){
        yeah[arr[i]]++;
    }
    for(auto i:yeah){
        if(l==0) break;
        if(i.second>l){
            ans += NcR(i.second,l);
            l=0;
        }else{
            l-=i.second;
        }
    }
    cout<<(ans==0?1:ans)<<endl;
}

int main(){
    IOS;
    int t;
    // t = 1;
    cin>>t;
    powerise();
    while(t--){
        solve();
    }
}