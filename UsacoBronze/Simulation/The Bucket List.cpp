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

// Accepted
int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("blist.in","r",stdin);
    freopen("blist.out","w",stdout);
    int n,x,y,z; cin>>n;
    vi v;
    map<int,int>start_time;
    map<int,int>end_time;

    int mx= 0, ans = 0;
    rep(i,0,n) {
        cin>>x>>y>>z;
        v.push_back(x);
        v.push_back(y);
        start_time[x] = z;
        end_time[y] = z;
    }
    sort(all(v));
    rep(i,0,len(v)) {
        if(start_time.find(v[i]) != start_time.end()) {
            ans += start_time[v[i]];
        } else {
            ans -= end_time[v[i]];
        }
        mx = max(ans,mx);
    }
    cout<<mx<<"\n";

    return 0;
}