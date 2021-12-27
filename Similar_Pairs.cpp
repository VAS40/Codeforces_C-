#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n;cin>>n;
    int b;
    bool p = false;
    vector<int> o,e;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b%2){
            o.push_back(b);
        }else{
            e.push_back(b);
        }
    }
    if(o.size()%2){
        for(auto i:o){
            for(auto j:e){
                if(abs(i-j)==1){
                    p = true;
                }    
            }
        }
    }else{
        p = true;
    }        
    cout<<(p?"YES":"NO")<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}