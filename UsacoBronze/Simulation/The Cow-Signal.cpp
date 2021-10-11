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

    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    int r,c,k; cin>>r>>c>>k;
    vector<string>v(r);
    rep(i,0,r) {
        cin>>v[i];
    }
    rep(i,0,r) {
        string t = "";
        for(auto c : v[i]) {
            rep(j,0,k) {
                t += c;
            }
        }
        rep(j,0,k) {
            cout<<t<<"\n";
        }
    }
    return 0;
}