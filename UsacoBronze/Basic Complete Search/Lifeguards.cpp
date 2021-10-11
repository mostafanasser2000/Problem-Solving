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

bool compare(double a, double b) {
    if(abs(a-b) < 1e-9) {
        return true;
    }
    return false;
}

int main(){
    IOS
    //freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

    freopen("lifeguards.in","r",stdin);
    freopen("lifeguards.out","w",stdout);

    int n, ans = 0; cin>>n;
    vector<ii>v(n);
    rep(i,0,n) {
        cin>>v[i].F>>v[i].S;
    }
    sort(all(v));

    vector<int>shifts(1000);
    // count for each interval how many lifeguards cover it
    rep(i,0,n) {
        rep(j,v[i].F, v[i].S) {
            shifts[j]++;
        }
    }
    // start to fire one guard  and check for the max interval
    rep(i,0,n) {
        int covered = 0;
        rep(j,v[i].F, v[i].S) {
            shifts[j]--;
        }
        for(int t = 0; t < 1000; ++t) {
            if(shifts[t] > 0)
                covered++;
        }
        ans = max(ans,covered);
        rep(j,v[i].F, v[i].S) {
            shifts[j]++;
        }
    }
    cout<<ans<<"\n";

    return 0;
}