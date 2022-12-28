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


class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth){
    std::vector<int> ans,add;
    if(lng == wdth){
      return ans;
    }
    while(lng!=wdth){
      if(lng<wdth) {lng-=wdth;ans.push_back(wdth);}
      else {wdth -= lng;ans.push_back(lng);}
    }
    ans.push_back(lng);
    return ans;
  };
};

void solve(){
    vector<int> arr;
    arr = SqInRect::sqInRect(9,5);
    for(auto i:arr) cout<<i<<' ';
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