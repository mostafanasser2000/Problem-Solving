#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define len(x) (int)x.size()
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

template<class T>
void print(vector<T>v){
    int sz = len(v);
    for(int i = 0; i < sz; ++i){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

}


int main(){
    IOS
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);

    int x,y,m; cin>>x>>y>>m;
    int ans = 0;
    for(int i = 1; i <= 1000;  ++i) {
        int p1 = i * x;
        if(p1 <= m) {
            ans = max(ans,p1);
        }
        for(int j = 1; j <= 1000; ++j) {
            int p2 = j * y;
            if(p2 <= m) {
                ans = max(p2,ans);
            }
            if(p1+p2 <= m) {
                ans  = max(ans,p1+p2);
            }

        }
    }
    cout<<ans<<"\n";



    return 0;
}