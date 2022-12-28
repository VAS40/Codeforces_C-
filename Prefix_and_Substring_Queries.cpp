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

void solve(){
    int n,q;
    string s;
    cin>>n>>q>>s;
    int value;
    while(q--){
        cin>>value;
        if(value==1){
            char c;
            cin>>c;
            s+=c;
        }else if(value==2){
            int x,y;
            cin>>x>>y;
            int tmp = max(x,y);
            x = min(x,y)-1;
            y = tmp-1;
            int c=0;
            string ha = "";
            while(x-c>=0 && (s[x-c]==s[y-c])){
                ha += s[x-c];
                c++;
            }
            reverse(ha.begin(),ha.end());
            while(true){
                if(c==0){
                    cout<<0<<endl;
                    break;
                }
                string tr = s.substr(0,c);
                if(tr==ha){
                    cout<<c<<endl;
                    break;
                }
                ha.erase(ha.begin());
                c--;
            }
        }else{
            int p,l,r;
            cin>>p>>l>>r;
            string f = s.substr(0,p);
            int ans = 0;
            for(int i=l-1;i<r-p+1;i++){
                string trying = s.substr(i,p);
                ans += (trying==f?1:0);
            }
            cout<<ans<<endl;
        }
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
    return 0;
}