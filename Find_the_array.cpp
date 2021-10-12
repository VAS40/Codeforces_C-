#include<bits/stdc++.h>

using namespace std;

vector<int> ans(100);

int main(){
    int k = 1;
    ans[1] = k;
    for(int i=2;i<100;i++){
        k+=2;
        ans[i] = ans[i-1]+k;
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x = upper_bound(ans.begin(),ans.end(),n)-ans.begin();
        if(ans[x-1]==n){
            cout<<x-1<<endl;
        }else{
            cout<<x<<endl;
        }
    }
}