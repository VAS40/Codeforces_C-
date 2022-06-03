#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<cstring>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

ll arr[201][201];

ll joy(ll a, ll b){
    if(a==0 || b==0){
        return 0;
    }
    if(a<2){
        if(b<2){
            return 0;
        }else if(b==2){
            return 1;
        }else{
            return 1 + joy(a+1,b-2);
        }
    }
    if(b<2){
        if(a<2){
            return 0;
        }else if(a==2){
            return 1;
        }else{
            return 1 + joy(a-2,b+1);
        }
    }
    ll x;
    if(arr[a][b]!=-1){
        return arr[a][b];
    }
    x = max(1 + joy(a+1,b-2),1 + joy(a-2,b+1));
    arr[a][b] = x;
    return x;
}

int main(){
    IOS;
    int t;
    t = 1;
    // cin>>t;
    memset(arr, -1, sizeof(arr[0][0]) * 201 * 201);
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<joy(a,b)<<endl;
    }
}