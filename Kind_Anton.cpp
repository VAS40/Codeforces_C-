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
    vector<int> a(n),b(n);
    bool one, mone, p;
    one = mone = false;
    p = true;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    for (int i = 0; i < n; i++)
    {
        if(a[i]<b[i]){
            if(one==false) {
                p = false;
                break;
            }
        }else if (a[i]>b[i])
        {
            if(mone==false){
                p = false;
                break;
            }
        }
        if(a[i]==1) one = true;
        if(a[i]==-1) mone = true;
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