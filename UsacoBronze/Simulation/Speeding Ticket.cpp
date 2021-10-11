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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    int n,m; cin>>n>>m;
    vii road(n);
    vii b(m);
    int ans = 0;

    rep(i,0,n) {
        cin>>road[i].F>>road[i].S;
    }
    rep(i,0,n) {
        cin>>b[i].F>>b[i].S;
    }
    ii cur_rsegment = road[0];
    ii cur_bsegment = b[0];
    int i = 0,j = 0;
    while(i < n && j < m) {
        if(cur_bsegment.F <= cur_rsegment.F) {
            if(cur_bsegment.S > cur_rsegment.S) {
                ans = max(ans,cur_bsegment.S-cur_rsegment.S);
            }
            cur_rsegment.F -= cur_bsegment.F;
            cur_bsegment =  b[++j];
            if(cur_rsegment.F == 0) {
                cur_rsegment  = road[++i];
            }
        } else {
            if(cur_bsegment.S > cur_rsegment.S) {
                ans = max(ans,cur_bsegment.S-cur_rsegment.S);
            }

            cur_bsegment.F -= cur_rsegment.F;
            cur_rsegment =  road[++i];
            if(cur_bsegment.F == 0) {
                cur_bsegment  = road[++j];
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}