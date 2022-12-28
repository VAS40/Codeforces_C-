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


bool canJump(vector<int>& nums) {
    int n = nums.size();
    int last = n-1;
    for(int i=n-2;i>=0;i--){
        if(i+nums[i]>=last) last = i;
    }
    return last<=0;
}

void solve(){
    vector<int> arr = {34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,0};
    cout<<(canJump(arr)?"True":"False")<<endl;
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