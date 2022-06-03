#include <bits/stdc++.h>
using namespace std;

#define IAMSPEED ios_base::sync_with_stdio(0); cin.tie(0); 

const int N = 200000; 

void solve(){ 
    int arr[5], sum = 0;
    for(int i = 0; i < 5; ++i){
        cin >> arr[i];
        sum += arr[i]; 
    }
    cout << (sum % 5 == 0 && sum != 0 ? sum / 5 : -1) << endl; 
} 

int main(){
    IAMSPEED
    int t = 1; 
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}