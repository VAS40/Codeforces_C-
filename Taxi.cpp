#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    int b;
    vector<int> arr(5,0);
    for(int i=0;i<n;i++){
        cin>>b;
        arr[b]++;
    }
    int ans = 0;
    int x = min(arr[1],arr[3]);
    ans += x;
    arr[1]-=x;
    arr[3]-=x;
    int y = min((arr[1]+1)/2,arr[2]);
    ans += y;
    arr[1]-= min(arr[1],y*2);
    arr[2]-=y;
    cout<<arr[4]+arr[1]/4 + (arr[1]%4?1:0) + arr[3] + arr[2]/2 + (arr[2]%2?1:0) + ans<<endl;
}