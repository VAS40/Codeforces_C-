#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>

typedef long long ll;
using namespace std;

void solve(){
    int n;cin>>n;
    int a,b,c;
    a = b = c = 0;
    int x;
    bool p = true;
    while(n--){
        cin>>x;
        if(x==25){
            a++;
        }else if(x==50){
            b++;
            if(a){
                a--;
            }else{
                p = false;
                break;
            }
        }else{
            c++;
            if(a){
                if(b){
                    b--;
                    a--;
                }else{
                    if(a<3){
                        p = false;
                        break;
                    }else{
                        a-=3;
                    }
                }
            }else{
                p = false;
                break;
            }
        }
    }
    cout<<(p?"YES":"NO")<<endl;
}

int main(){
    int t;
    t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}