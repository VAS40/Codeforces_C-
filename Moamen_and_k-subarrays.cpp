#include<bits/stdc++.h>
using namespace std;

#define int                 long long
/****

****/

void solve(){
    int n,k,a;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        if(v[i-1].second+1!=v[i].second)
        {
            k--;
        }
    }
    if(k>0)
    {
        cout<<"Yes"<<endl;
    }else 
    {
        cout<<"No"<<endl;
    }
    return;
}

/****

****/
int32_t  main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int testcase = 1;
    cin>>testcase;
    

    while(testcase--){
        solve();
    }

    return 0;
}
