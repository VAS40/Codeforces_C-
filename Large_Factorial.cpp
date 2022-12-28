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
map<int,string> mp;
string multiply(string a,string b){
    int n = a.length() + b.length() + 3;
    vector<int> arr(n,0),x(n,0),y(n,0);
    int j = 0;
    for(int i=a.length()-1;i>=0;i--){
        x[j] = (int)(a[i]-'0');
        j++;
    }
    j = 0;
    for(int i=b.length()-1;i>=0;i--){
        y[j] = (int)(b[i]-'0');
        j++;
    }
    for(int i=0;i<n-1;i++){
        for(int k = 0;k<n-1;k++){
            int ans = x[k] * y[i];
            if(ans/10>0) arr[i+k+1]+=ans/10;
            arr[i+k]+=ans%10;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>9){
            arr[i+1] += arr[i]/10;
        }
        arr[i] = arr[i]%10;
    }
    int i = n-1;
    while(arr[i]==0) i--;
    string rer = "";
    while(i>=0) { 
        rer= rer+ to_string(arr[i]);
        i--;
    }
    return rer;
}
string factorial(int factor){
    if(factor < 0) return "";
    if(factor ==0 || factor==1) return "1";
    if(mp.find(factor)!=mp.end()) return mp[factor];
    string s = to_string(factor);
    string ans = multiply(s,factorial(factor-1));
    mp[factor] = ans;
    return ans;
}

void solve(){
    int n;cin>>n;
    cout<<factorial(n)<<endl;
}

int main(){
    IOS;
    int t;
    // t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}