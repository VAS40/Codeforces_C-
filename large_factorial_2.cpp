#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
#include<math.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
using namespace std;

string solve(int A) {
    vector<int> ans(200,0);
    ans[0] = 1;
    for(int i=2;i<=A;i++){
        int c = 0;
        for(int j=0;j<A+3;j++){
            int now = (ans[j]*i) + c;
            ans[j] =  now%10;
            c = now - now%10;
        }
    }
    int j = 199;
    while(ans[j]==0) j--;
    string s = "";
    while(j>=0) {
        s+= to_string(ans[j]);
        j--;
    }
    return s;
}


int main(){
    IOS;
    int t;
    // t = 1;
    // cin>>t;
    cout<<solve(9)<<endl;
}