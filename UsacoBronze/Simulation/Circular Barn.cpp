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

    freopen("cbarn.in","r",stdin);
    freopen("cbarn.out","w",stdout);
    int n; cin>>n;
    deque<int>d(n);
    rep(i,0,n) {
        cin>>d[i];
    }
    int ans = INT_MAX;
    rep(i,0,n) {
        int dis = 0;
        rep(j, 0, n) {
            dis += d[j] * j;
        }
        ans = min(ans,dis);
        d.push_back(d.front());
        d.pop_front();
    }
    cout<<ans<<"\n";

    return 0;
}