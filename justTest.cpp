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
    int q,d;
    cin>>q>>d;
    int x;
    vector<vector<int>> arr(10);
    arr[1] = {1};
    arr[2] = {2,21};
    arr[3] = {3,13,23};
    arr[4] = {4,41,14,43};
    arr[5] = {5,51,52,53,54};
    arr[6] = {6,61,26,63,16,65};
    arr[7] = {7,57,37,17,67,47,27};
    arr[8] = {8,81,18,83,28,85,38,87};
    arr[9] = {9,19,29,39,49,59,69,79,89};
    for(int i=0;i<q;i++){
        cin>>x; 
        int tmp = x%d;
        if(arr[d][tmp]<=x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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