#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    int val,c;
    set<int> row,column;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>val;
            if(val) {
                row.insert(i);
                column.insert(j);
            }
        }
    }
    c = min(n-row.size(),m-column.size());
    cout<<(c%2?"Ashish":"Vivek")<<endl;
}

int main(){
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}