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

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for(int i=0;i<n-2;i++){
        if(i!=0 && nums[i]==nums[i-1]){
            i++;
        }
        int j = i+1;
        int k = n-1;
        while(j<k){
            int s = nums[i]+nums[j]+nums[k];
            if(j!=i+1 && nums[j]==nums[j-1]){
                j++;
                continue;
            }
            if(k!=n-1 && nums[k]==nums[k+1]){
                k--;
                continue;
            }

            if(s==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;k--;
            }else if(s<0){
                j++;
            }else{
                k--;
            }
        }
    }
    return ans;
}
void solve(){
    vector<int> arr = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
    vector<vector<int>> ans = threeSum(arr);
    for(auto i:ans){
        cout<<'['<<i[0]<<','<<i[1]<<','<<i[2]<<']'<<endl;
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