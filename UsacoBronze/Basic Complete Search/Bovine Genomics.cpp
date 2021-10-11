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
    //freopen("output.txt","w",stdout);

    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);

    int n,m; cin>>n>>m;
    char spotty[n][m];
    char plain[n][m];

    rep(i,0,n){
        rep(j,0,m){
            cin>>spotty[i][j];
        }
    }
    rep(i,0,n){
        rep(j,0,m){
            cin>>plain[i][j];
        }
    }
    int ans = 0;
    rep(i,0,m){
        bool dont_appear = true;
        rep(j,0,n){
            rep(k, 0 ,n) {
                if(spotty[j][i] == plain[k][i])
                    dont_appear = false;
            }
        }
        if(dont_appear)
            ans++;
    }
    cout<<ans<<"\n";


    return 0;
}