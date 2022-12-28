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

vector<int> findOccurences(vector<int> &A) {
    map<int,int> mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    vector<int> ans;
    for(auto i:mp){
        ans.push_back(i.second);
    }
    return ans;
}

int main(){
    IOS;
    int t;
    // t = 1;
    cin>>t;
    vector<int> ans,A(t);
    for(int i=0;i<t;i++){
        cin>>A[i];
    }
    ans = findOccurences(A);
    for(auto i:ans){
        cout<<i<<' ';
    }
}