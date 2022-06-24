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

void solve(){
    int n;cin>>n;
    int one,two,x;
    one = two = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        switch(x%3){
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            default:
                break;
        }
    }
    int m = min(one,two);
    cout<<n-(one+two) + m + (one-m)/3 + (two-m)/3<<endl;
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