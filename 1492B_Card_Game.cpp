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
    vector<pair<int,int>> arr(n);
    int max,index;
    max = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        if(arr[i].first>max){
            max = arr[i].first;
            index = i;
        }
        arr[i].second = index;
    }
    int prev = n;
    while(index>=0){
        for(int i=index;i<prev;i++){
            cout<<arr[i].first<<' ';
        }
        if(index>0){
            prev = index;
            index = arr[index-1].second;
        }else{
            break;
        }
    }
    cout<<endl;
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