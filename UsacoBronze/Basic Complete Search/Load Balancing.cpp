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

int b,n;
vii v(105);
int MAX_CNT(int x, int y) {
    int lf = 0, lr = 0, tf =  0, tr = 0;

    for(int i = 0; i < n; ++i) {
        if(v[i].F < x && v[i].S < y)
            lf++;
        else if(v[i].F > x && v[i].S < y)
            lr++;
        else if(v[i].F < x && v[i].S > y)
            tf++;
        else
            tr++;
    }

    return max({lf,lr,tf,tr});
}
int main(){
    IOS
    freopen("balancing.in","r",stdin);
    freopen("balancing.out","w",stdout);
    cin>>n>>b;
    vi xs, ys;
    rep(i,0,n) {
        cin>>v[i].F>>v[i].S;
        xs.push_back(v[i].F);
        ys.push_back(v[i].S);
    }
    sort(all(xs));
    sort(all(ys));

    int ans = INT_MAX;


    for(int i = 0;  i < n; i++) {
        for(int j = 0; j < n; j++) {
            int x = xs[i]+1;
            int y = ys[j]+1;
            ans = min(ans, MAX_CNT(x,y));
        }
    }
    cout<<ans<<"\n";


    return 0;
}