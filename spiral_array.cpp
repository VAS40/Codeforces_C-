#include<bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(const vector<vector<int> > &A) {
    int t,b,l,r,dir;
    t = l = dir = 0;
    b = A.size()-1;
    r = A[0].size()-1;
    vector<int> ans;
    while(t<=b && l<=r){
        if(dir == 0){
            for(int i = l;i<=r;i++){
                ans.push_back(A[t][i]);
            }
            t++;
            dir = 1;
        }
        if(dir==1){
            for(int i=t;i<=b;i++){
                ans.push_back(A[i][r]);
            }
            r--;
            dir = 2;
        }
        if(dir==2){
            for(int i=r;i>=l;i--){
                ans.push_back(A[b][i]);
            }
            b--;
            dir = 3;
        }
        if(dir==3){
            for(int i=b;i>=t;i--){
                ans.push_back(A[i][l]);
            }
            dir = 0;
            l++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> A;
    for(int i=1;i<=5;i++){
        vector<int> B;
        // for(int j=1;j<=5;j++){
        //     B.push_back(j);
        // }
        B.push_back(i);
        A.push_back(B);
    }
    vector<int> ans = spiralOrder(A);
    for(auto i:ans){
        cout<<i<<' ';
    }
    return 0;
}