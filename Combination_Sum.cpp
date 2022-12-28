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

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    int n = candidates.size();
    for(int i=0;i<n;i++){
        int s = candidates[i];
        vector<int> temp;
        temp.push_back(s);
        while(s<target){
            int k = target-s;
            for(int j=i+1;j<n;j++){
                if(k%candidates[j]==0){
                    int x = k/candidates[j];
                    for(int y=0;y<x;y++) temp.push_back(candidates[j]);
                    ans.push_back(temp);
                    for(int y=0;y<x;y++) temp.pop_back();
                }
            }
            s+=candidates[i];
            temp.push_back(candidates[i]);
        }
        if(s==target){
            ans.push_back(temp);
        }
    }
    return ans;
}

void solve(){
    vector<int> arr = {1,2,3,6,7};
    vector<vector<int>> ans = combinationSum(arr,8);
    for(auto i:ans){
        cout<<'[';
        for(int j=0;j<i.size()-1;j++){
            cout<<i[j]<<',';
        }
        cout<<i[i.size()-1];
        cout<<']'<<endl;
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