#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

bool check(int n,int d){
    while(n>0){
        int tmp = n%10;
        if(tmp == d) return true;
        n/=10;
    }
    return false;
}

vector<int> luckNumbers(int d){
    vector<int> arr(d);
    for(int i=0;i<d;i++){
        int tmp = i;
        while(check(tmp,d)==false){
            tmp+=d;
        }
        arr[i] = tmp;
    }
    return arr;
}

void solve(){
    for(int i=1;i<10;i++){
        vector<int> arr = luckNumbers(i);
        cout<<"LuckNumbers for "<<i<<"are:";
        for(auto e:arr){
            cout<<e<<' ';
        }
        cout<<endl;
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