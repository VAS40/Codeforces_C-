#include<iostream>
#include<string>

using namespace std;

struct point
{
    /* data */
    int x;
    int y;
};

void solve(){
    struct point a,b,c;
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    int ans = abs(a.x-b.x) + abs(b.y-a.y);
    if(a.x==b.x && ((a.y<c.y && c.y<b.y) || (a.y>c.y && c.y>b.y))){
        ans+=2;
    }
    if(a.y==b.y && ((a.x<c.x && c.x<b.x) || (a.x>c.x && c.x>b.x))){
        ans+=2;
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}