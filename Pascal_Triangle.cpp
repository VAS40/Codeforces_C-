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

vector<long long> pascalsTriangle(int n)
{
  int m = 2*n+n%2;
  vector<vector<long long>> arr(n,vector<long long>(m,0));
  vector<long long> ans;
  arr[0][m/2] = 1;
  for(int i=1;i<n;i++){
    for(int j=0;j<m-1;j++){
      arr[i][j] = arr[i-1][j]+arr[i-1][j+1];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i][j]) ans.push_back(arr[i][j]);
    }
  }
  return ans;
}

void solve(){
    int n;cin>>n;
    for(auto e:pascalsTriangle(n)) cout<<e<<' ';
    cout<<endl;
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