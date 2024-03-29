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

int josephusSurvivor(int n, int k) {
  std::vector<int> arr(n,0);
  int count = 0;
  int i=(k-1)%n;
  while(count<n-1){
    if(arr[i]==1) arr[i]=1;
    else count++;
    arr[i]=1;
    i = (i+k)%n;
  }
  int ans = -1;
  for(int i=0;i<n;i++){
    if(arr[i]==0) {ans = i+1;break;}
  }
  return ans;
}

void solve(){
    cout<<josephusSurvivor(7,3);
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