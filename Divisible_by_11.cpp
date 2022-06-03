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
    int a,odd,even;
    odd = even = 0;
    vector<string> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i<=n/2){
            a = arr[i][0]-'0';
        }else{
            a = arr[i].at(arr[i].length()-1)-'0';
        }
        if(i%2){
            odd += a;
        }else{
            even += a;
        }
    }
    if(abs(odd-even)%11 == 0){
        cout<<"OUI"<<endl;
    }else{
        cout<<"NON"<<endl;
    }
}

int main(){
    IOS;
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}