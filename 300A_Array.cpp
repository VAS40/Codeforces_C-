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
    vector<int> great,less,zero,tmp;
    int a,b;
    a = b = 0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0) great.push_back(x);
        else if(x<0 && a==0) {less.push_back(x);a++;}
        else tmp.push_back(x);
    }
    if(great.size()==0){
        for(auto i:tmp){
            if(b<2 && i<0) {great.push_back(i);b++;}
            else zero.push_back(i);
        }
    }else{
        zero = tmp;
    }
    cout<<less.size()<<' ';
    for(auto i:less) cout<<i<<' ';
    cout<<endl<<great.size()<<' ';
    for(auto i:great) cout<<i<<' ';
    cout<<endl<<zero.size()<<' ';
    for(auto i:zero) cout<<i<<' ';
    cout<<endl;
    
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