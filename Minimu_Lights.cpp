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

int solve(vector<int> &A, int B){
    int n = A.size();
    vector<int> dp(n+1,1e9);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        if(A[i]==0) continue;
        int lft = max(0,i-B+1) + 1;
        int rgt = min(n-1,i+B-1) + 1;
        
        for(int j=lft;j<=rgt;j++){
            dp[j] = min(dp[j],dp[lft-1]+1);
        }
    }
    if(dp[n]==1e9) return -1;
    return dp[n];
}

int main(){
    IOS;
    int t,B;
    // t = 1;
    cin>>t;
    vector<int> Arr(t);
    for(int i=0;i<t;i++){
        cin>>Arr[i];
    }
    cin>>B;
    solve(Arr,B);
}