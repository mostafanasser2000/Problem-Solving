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

bool check_rank(vi a, vi b) {
    int n = len(a);
    bool r1 = true, r2 = true;
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]){
            r1 =  false;
        }
    }

    for(int i = 0; i < n; i++) {
        if(b[i] < a[i]){
            r2 = false;
        }
    }
    if(r1 || r2)
        return true;
    return false;

}



int main(){
    IOS
    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);

    int n,k; cin>>k>>n;
    int rankings[k][n];
    for(int i = 0; i < k; ++i){
        for(int j = 0; j < n; ++j){
            cin>>rankings[i][j];
        }
    }
    int ans = 0;

    for(int i = 1; i <= n; ++i) {
        for(int j  = i+1; j <= n; ++j) {
            vi rank1, rank2;

            for(int l = 0; l < k; ++l){
                for(int m = 0; m < n; ++m){
                    if(rankings[l][m] == i) {
                        rank1.push_back(m+1);
                    }
                    else if(rankings[l][m] == j) {
                        rank2.push_back(m+1);
                    }
                }
            }
            if(check_rank(rank1,rank2))
                ans++;
        }
    }
    cout<<ans<<"\n";


    return 0;
}